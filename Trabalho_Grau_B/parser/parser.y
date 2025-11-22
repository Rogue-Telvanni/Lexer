%define parse.trace false
%nonassoc OBJECT_LITERAL
%union {
  char *sval;
  double fval;
  int   ival;
}

%{
  #include <stdio.h>
  #include <math.h>
  #include <string.h>


  int yylex (void);
  int syntax_error = 0;

  void yyerror (char const *);
  extern int yylineno;
  // extern int yydebug;

  extern void go_to_template_state();
  extern void go_to_initial_state();

  // Codigo para DEBUG
  // ==============================================================================

  int last_reduce_line = 0;

  void print_reduce(const char *rule, int line) {
    #ifndef DEBUG
      return;
    #endif

    if (line != last_reduce_line) {
        printf("\n");
        last_reduce_line = line;
    }

    printf("REDUCE (line %d): %s\n", line, rule);
  }
  // ==============================================================================


  // Codigo usado para Gerar IR
  // ==============================================================================

  typedef struct {
    char *op;    /* operator or mnemonic, e.g. "+", "-", "*", "/", "=" */
    char *dst;   /* destination, e.g. "t1" or variable name */
    char *arg1;  /* first operand (or source for '=') */
    char *arg2;  /* second operand (NULL for unary or assignment) */
  } Instr;

  #define MAX_IR 4096
  Instr ir[MAX_IR];
  int ir_count = 0;

  char *strdup_or_null(const char *s){
    if(!s) return NULL;
    return strdup(s);
  }

  void emit(const char *op, const char *dst, const char *arg1, const char *arg2){
    if(ir_count >= MAX_IR){
      fprintf(stderr, "IR overflow\n");
      exit(1);
    }
    ir[ir_count].op  = strdup_or_null(op);
    ir[ir_count].dst = strdup_or_null(dst);
    ir[ir_count].arg1 = strdup_or_null(arg1);
    ir[ir_count].arg2 = strdup_or_null(arg2);
    ir_count++;
  }

  /* new temporary name generator */
  char *new_temp(){
    static int tmpn = 0;
    char buf[32];
    snprintf(buf, sizeof(buf), "t%d", tmpn++);
    return strdup(buf);
  }

  /* print IR (call from main after parsing) */
  void print_ir(){
    for(int i=0;i<ir_count;i++){
      Instr *ins = &ir[i];
      if(ins->arg2)
        printf("%s = %s %s %s\n", ins->dst, ins->arg1, ins->op, ins->arg2);
      else if(ins->op && strcmp(ins->op, "=")==0) /* assignment as dst = arg1 */
        printf("%s = %s\n", ins->dst, ins->arg1);
      else if(ins->op) /* unary or other */
        printf("%s %s %s\n", ins->op, ins->dst ? ins->dst : "", ins->arg1 ? ins->arg1 : "");
    }
  }
  // ==============================================================================


  // Codigo para validacao de declaracao de simbolos
  // ==============================================================================
  struct table {
    char name[32];
    int val;
    int declared;  // 0 = não declarada, 1 = declarada
  };

  #define SYMBOL_TABLE_SIZE 53

  struct table symbol_table[SYMBOL_TABLE_SIZE];

  void declare_symbol(char* str) {
      int index = str[0] % SYMBOL_TABLE_SIZE;
      int i = index;
      while (symbol_table[i].declared && strcmp(symbol_table[i].name, str) != 0) {
          i = (i + 1) % SYMBOL_TABLE_SIZE;
      }
      strcpy(symbol_table[i].name, str);
      symbol_table[i].declared = 1;
  }

  int is_declared(char* str) {
    //IR nao esta habilitado, entao sempre retorna 1 para que nao haja erro de variavel nao definida
    #ifndef IR_ENABLED
      return 1;
    #endif

      int index = str[0] % SYMBOL_TABLE_SIZE;
      int i = index;

      while (symbol_table[i].declared) {
          if (strcmp(symbol_table[i].name, str) == 0)
              return 1;
          i = (i + 1) % SYMBOL_TABLE_SIZE;
          if (i == index) break;
      }
      return 0;
  }
  // ==============================================================================

%}
%token <sval> IDENT STRING_LITERAL STRING_SINGLE_QUOTE TEMPLATE_CHUNK
%token <fval>  FLOAT
%token <ival>  INTEGER TRUE FALSE

%token FUNC RETURN IF ELSE  
%token LPAR RPAR LCURLY RCURLY LBRACKET RBRACKET
%token SEMI COMMA COLON WHITESPACE COMMENT
%token ASSIGN OPERATORS POINT PLUS MINUS MULT DIV EQUAL TEQUAL DIFF LESS MORE LEQ MEQ REST AND OR NOT ARROW
%token TYPE
%token TEMPLATE_START TEMPLATE_END TEMPLATE_EXPR_START

%type <sval> expression
%type <sval> variable
%type <sval> expression_or_object

%type <sval> lvalue
%type <sval> object_literal

%right ASSIGN
%left OR
%left AND
%left EQUAL DIFF
%left LESS MORE LEQ MEQ
%left PLUS MINUS
%left MULT DIV REST
%right NOT
%left POINT
%right ARROW 

%start program

%%

program: statement_list
       ;

statement_list:
      %empty
    | statement_list terminator
    | statement_list statement
    ;

/* Um statement pode ser uma função ou um comando */
statement: function
         | command 

terminator: SEMI

function:
      FUNC IDENT LPAR arguments RPAR block  { 
        // Isso e' para debugar Reducoes
        char* buffer = (char*)malloc(sizeof(char) * 100);
        sprintf(buffer, "function -> FUNC IDENT(%s) LPAR arguments RPAR block", $2);
        print_reduce(buffer, @1.first_line);
      }
    | FUNC IDENT LPAR arguments RPAR error RCURLY {
          yyerror("ERRO: função com erro, recuperada até '}'");
          yyerrok;
      }
    ;

function_expression: FUNC LPAR arguments RPAR block { print_reduce("function_expression -> (anonymous)", @1.first_line); }
  | FUNC IDENT LPAR arguments RPAR block { print_reduce("function_expression -> (named)", @1.first_line); }
  ;

arguments: argument_list_opt { print_reduce("arguments -> argument_list_opt", @1.first_line); }
         ;

/* "argument_list_opt" significa "lista de argumentos opcional" (pode ser vazia) */
argument_list_opt: %empty { print_reduce("argument_list_opt -> empty", @$.first_line); }
                 | argument_list { print_reduce("argument_list_opt -> argument_list", @1.first_line); }
                 ;

/* "argument_list" é a lista em si (uma ou mais expressões) */
argument_list: expression { print_reduce("argument_list -> expression", @1.first_line); }
             | argument_list COMMA expression { print_reduce("argument_list -> argument_list COMMA expression", @1.first_line); }
             ;

           
command: variableDeclaration { print_reduce("command -> variableDeclaration", @1.first_line); }
        | assignment { print_reduce("command -> assignment", @1.first_line); }
        | conditional { print_reduce("command -> conditional", @1.first_line); }
        | method_call { print_reduce("command -> method_call", @1.first_line); }
        | returnStmt { print_reduce("command -> returnStmt", @1.first_line); }
        | block { print_reduce("command -> block", @1.first_line); }
        ;

variableDeclaration: TYPE IDENT  { 
                        declare_symbol($2);
                        print_reduce("variableDeclaration -> TYPE IDENT ", @1.first_line); 
                      }
                    | TYPE IDENT ASSIGN expression_or_object  {
                          char* buffer = (char*)malloc(sizeof(char) * 100);
                          sprintf(buffer, "variableDeclaration -> TYPE IDENT(%s) = expression_or_object ", $2);
                          print_reduce(buffer, @1.first_line);
                        
                          declare_symbol($2);        
                          emit("=", $2, $4, NULL);
                      };

method_call_expr: expression LPAR arguments RPAR { print_reduce("method_call_expr -> expression LPAR arguments RPAR", @1.first_line); };

method_call: method_call_expr  { print_reduce("method_call -> method_call_expr ", @1.first_line); };

returnStmt: RETURN expression  {print_reduce("returnStmt -> RETURN expression ", @1.first_line);};

assignment: lvalue ASSIGN expression_or_object  {
  emit("=", $1, $3, NULL);

  print_reduce("assignment -> lvalue ASSIGN expression_or_object ", @1.first_line);   
};

conditional: IF LPAR expression RPAR command { print_reduce("conditional -> IF LPAR expression RPAR command", @1.first_line); }
            | IF LPAR expression RPAR command ELSE command { print_reduce("conditional -> IF LPAR expression RPAR command ELSE command", @1.first_line); };

block:  LCURLY statement_list RCURLY { print_reduce("block -> LCURLY statement_list RCURLY", @1.first_line); }
    | LCURLY statement_list error {
          yyerror("'}' de fechamento da função não encontrado");
          yyerrok;
          /* Skip until '}' */
          while (yychar != RCURLY && yychar != YYEOF)
              yychar = yylex();
          if (yychar == RCURLY) { /* consume '}' */
              yychar = YYEMPTY;
          }
      }
    | LCURLY error RCURLY {
          yyerror("bloco vazio com erro");
          yyerrok;
      }
    | LCURLY statement_list YYEOF {
          yyerror("bloco não fechado antes do EOF");
          yyerrok;
      }
    ;


expression: expression PLUS expression { 
            char *t = new_temp();
            emit("+", t, $1, $3);
            free($1); free($3);
            $$ = t;
            print_reduce("expression -> expression PLUS expression", @1.first_line); 
          }
          | expression MINUS expression { 
            char *t = new_temp();
            emit("-", t, $1, $3);
            free($1); free($3);
            $$ = t;
            print_reduce("expression -> expression MINUS expression", @1.first_line); 
          }
          | expression MULT expression { 
            char *t = new_temp();
            emit("*", t, $1, $3);
            free($1); free($3);
            $$ = t;
            print_reduce("expression -> expression MULT expression", @1.first_line); 
          }
          | expression DIV expression { 
            char *t = new_temp();
            emit("/", t, $1, $3);
            free($1); free($3);
            $$ = t;
            print_reduce("expression -> expression DIV expression", @1.first_line); 
          }
          | expression REST expression { 
            print_reduce("expression -> expression REST expression", @1.first_line); 
          }
          | expression POINT IDENT { 
            print_reduce("expression -> expression POINT IDENT", @1.first_line); 
          }
          | expression EQUAL expression {
            print_reduce("expression -> expression EQUAL expression", @1.first_line); 
          }
          | expression TEQUAL expression { 
            print_reduce("expression -> expression TEQUAL expression", @1.first_line); 
          }
          | expression DIFF expression { 
            print_reduce("expression -> expression DIFF expression", @1.first_line); 
          }
          | expression LESS expression { 
            print_reduce("expression -> expression LESS expression", @1.first_line); 
          }
          | expression MORE expression { 
            print_reduce("expression -> expression MORE expression", @1.first_line); 
          }
          | expression LEQ expression { 
            print_reduce("expression -> expression LEQ expression", @1.first_line); 
          }
          | expression MEQ expression { 
            print_reduce("expression -> expression MEQ expression", @1.first_line); }
          | expression AND expression { 
            print_reduce("expression -> expression AND expression", @1.first_line); 
          }
          | expression OR expression { 
            print_reduce("expression -> expression OR expression", @1.first_line); 
          }
          | NOT expression { 
            print_reduce("expression -> NOT expression", @1.first_line); 
          }
          | LPAR expression RPAR { 
            $$ = $2;
            print_reduce("expression -> LPAR expression RPAR", @1.first_line); 
          }
          | method_call_expr { print_reduce("expression -> method_call_expr", @1.first_line); }
          | variable { 
            $$ = $1;
            print_reduce("expression -> variable", @1.first_line); 
          }
          | lvalue { 
            $$ = $1;
            print_reduce("expression -> lvalue", @1.first_line); 
          }
          | TRUE { print_reduce("expression -> TRUE", @1.first_line); }
          | FALSE { print_reduce("expression -> FALSE", @1.first_line); }
          | LPAR arguments RPAR ARROW expression { print_reduce("expression -> LPAR arguments RPAR ARROW expression", @1.first_line); }
          | function_expression { print_reduce("expression -> function_expression", @1.first_line); }
          | array_literal { print_reduce("expression -> array_literal", @1.first_line); }


          /*erros*/
          | LPAR arguments RPAR error expression {
            print_reduce("expression -> erro arrow", @1.first_line);
            yyerror("=> Arrow Function esperado\n");
          }

        ;                

expression_or_object: expression {
                      print_reduce("expression_or_object -> expression", @1.first_line);
                    }
                    | object_literal{
                      print_reduce("expression_or_object -> object_literal", @1.first_line);
                    }
                    ;
object_literal: LCURLY property_list_opt RCURLY
    { print_reduce("object_literal -> { property_list_opt }", @1.first_line); }
    ;


property_list_opt: %empty {
                  print_reduce("property_list_opt -> empty", @$.first_line);
                }
                | property_list{
                  print_reduce("property_list_opt -> property_list", @1.first_line);
                }
                ;

property_list: property{
                print_reduce("property_list -> property", @1.first_line);
              }
             | property_list COMMA property {
                print_reduce("property_list -> property_list, property", @1.first_line);
              }
             ;

property: lvalue COLON expression_or_object { 
      char* buffer = (char*)malloc(sizeof(char) * 100);
      sprintf(buffer, "property -> lvalue(%s) : expression_or_object", $1);
      print_reduce(buffer, @1.first_line);
    }
    | variable COLON expression_or_object { print_reduce("property -> variable : expression_or_object", @1.first_line); }
    ;
array_literal:
      LBRACKET argument_list_opt RBRACKET  { print_reduce("array_literal -> [ argument_list_opt ]", @1.first_line); }
    | LBRACKET argument_list_opt error RBRACKET {
          yyerror("']' não encontrado no array, recuperado até ']'");
          yyerrok;
      }
    | LBRACKET argument_list_opt error {
          yyerror("array não fechado antes do EOF");
          yyerrok;
      }
    ;
    
lvalue: IDENT { 
        if (!is_declared($1)) {
            printf("\nErro Semantico: variavel '%s' utilizada mas nao declarada (line %d)\n\n", $1, @1.first_line);
            exit(1);
        }

        // Isso e' para debugar Reducoes
        char* buffer = (char*)malloc(sizeof(char) * 100);
        sprintf(buffer, "lvalue -> IDENT(%s)", $1);
        print_reduce(buffer, @1.first_line);

        $$ = $1;
      }
      | lvalue POINT IDENT { 
        print_reduce("lvalue -> lvalue POINT IDENT", @1.first_line); 
      }
      ;

variable: INTEGER { 
        // Isso e' para a IR
        char tmp[64];
        snprintf(tmp, sizeof(tmp), "%d", $1);   /* INTEGER is <ival> */
        $$ = strdup(tmp);

        // Isso e' para debugar Reducoes
        char* buffer = (char*)malloc(sizeof(char) * 100);
        sprintf(buffer, "variable -> INTEGER(%s)", tmp);
        print_reduce(buffer, @1.first_line); 
      }
      | FLOAT { 
        // Isso e' para a IR
        char tmp[64];
        snprintf(tmp, sizeof(tmp), "%g", $1);   /* FLOAT is <fval> */
        $$ = strdup(tmp);
        
        // Isso e' para debugar Reducoes
        char* buffer = (char*)malloc(sizeof(char) * 100);
        sprintf(buffer, "variable -> FLOAT(%s)", tmp);
        print_reduce(buffer, @1.first_line);
        
      }
      | TRUE {
        // Isso e' para debugar Reducoes
        $$ = strdup("1");
        print_reduce("variable -> TRUE", @1.first_line);
      }
      | FALSE {
        // Isso e' para debugar Reducoes
        $$ = strdup("0");
        print_reduce("variable -> FALSE", @1.first_line);
      }
      | STRING_LITERAL { 
        $$ = strdup($1);

        // Isso e' para debugar Reducoes
        char* buffer = (char*)malloc(sizeof(char) * 100);
        sprintf(buffer, "variable -> STRING_LITERAL(%s)", $1);
        print_reduce(buffer, @1.first_line);

      }
      | STRING_SINGLE_QUOTE { 
        $$ = strdup($1);

        // Isso e' para debugar Reducoes
        char* buffer = (char*)malloc(sizeof(char) * 100);
        sprintf(buffer, "variable -> STRING_SINGLE_QUOTE(%s)", $1);
        print_reduce(buffer, @1.first_line);
      }
      | template_literal { 
        print_reduce("variable -> template_literal", @1.first_line); 
      }
      ;

template_literal: TEMPLATE_START template_body TEMPLATE_END 
    { print_reduce("template_literal -> `...`", @1.first_line); }
    ;

template_body: %empty 
    { /* O corpo pode ser vazio */ }
    | template_body template_part
    { /* Constrói o corpo pedaço por pedaço */ }
    ;

template_part: TEMPLATE_CHUNK { print_reduce("template_part -> TEMPLATE_CHUNK", @1.first_line); }
    | TEMPLATE_EXPR_START expression RCURLY {print_reduce("template_part -> ${expression}", @1.first_line);
        go_to_template_state();};



%%

int main (int argc, char** argv){
    // yydebug = 1;
    yyparse();

    int parse_result = yyparse();

    if (syntax_error) {
        printf("\n\nErro(s) de sintaxe encontrados. Arquivo rejeitado.\n\n");
        return -1;
    }

    printf("\n\nArquivo aceito pelo parser!\n\n");

    #ifdef IR_ENABLED
        printf("\n--- GENERATED IR ---\n");
        print_ir();
    #endif
  

    return 0;
}

void yyerror(const char* error){
    syntax_error = 1;
    printf("Error: %s on line %d\n", error, yylineno);
}