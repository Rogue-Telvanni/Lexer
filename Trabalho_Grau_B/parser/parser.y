%define parse.trace false
%nonassoc OBJECT_LITERAL
%{
  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  extern int yylineno;
  // extern int yydebug;

  extern void go_to_template_state();
  extern void go_to_initial_state();

  int last_reduce_line = 0;

  void print_reduce(const char *rule, int line) {
    if (line != last_reduce_line) {
        printf("\n");
        last_reduce_line = line;
    }

    printf("REDUCE (line %d): %s\n", line, rule);
  }

%}

%token FLOAT
%token NUMBER
%token FUNC
%token ASSIGN
%token COLON
%token LPAR
%token RPAR
%token LCURLY
%token RCURLY
%token LBRACKET
%token RBRACKET
%token SEMI
%token COMMA
%token RETURN
%token IF
%token ELSE
%token OPERATORS
%token POINT
%token IDENT
%token PLUS
%token MINUS
%token MULT
%token DIV
%token EQUAL
%token TEQUAL
%token DIFF
%token LESS
%token MORE
%token LEQ
%token MEQ
%token REST
%token TRUE
%token FALSE
%token AND
%token OR
%token NOT
%token TYPE
%token WHITESPACE
%token COMMENT
%token ARROW
%token STRING_LITERAL
%token STRING_SINGLE_QUOTE


/* 1. ADICIONE os 4 novos tokens */
%token TEMPLATE_START
%token TEMPLATE_END
%token TEMPLATE_EXPR_START
%token TEMPLATE_CHUNK

/* declaração de qual lado deve iniciar a leitura*/
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

// TODO : FAZER UM PRINT PARA CADA REGRA USAR O GEMINI

program: statement_list
       ;

statement_list: %empty
              | statement_list statement
              ;

/* Um statement pode ser uma função ou um comando */
statement: function
         | command
         ;

semi_opt: SEMI
        | %empty

function: FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY { print_reduce("function -> FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY", @1.first_line); }
        | FUNC IDENT LPAR arguments RPAR LCURLY statement_list error
        {
            /*
            recuperação do erro, vou tentar adicionar qual o erro o usuário deve receber
            para quando esquece de adicionar o fechamento da function
            */

            /*
                pelo que li na documnetação a gente precisa definir um token que ele deve encontrar
                para começar a ler iniciando um novo estado de que consistente sem erro
                em pensei em um caracter de nova linha
            */


            yyerror("ERRO: '}' de fechamento da função não encontrado");
            yyclearin; 
            yyerrok;   
        };

function_expression: FUNC LPAR arguments RPAR LCURLY statement_list RCURLY { print_reduce("function_expression -> (anonymous)", @1.first_line); }
  | FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY { print_reduce("function_expression -> (named)", @1.first_line); }
  ;

arguments: argument_list_opt { print_reduce("arguments -> argument_list_opt", @1.first_line); }
         ;

/* "argument_list_opt" significa "lista de argumentos opcional" (pode ser vazia) */
argument_list_opt: %empty { print_reduce("argument_list_opt -> empty", yylineno); }
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
        | semi_opt { print_reduce("command -> semi_opt", @1.first_line); }
        ;

variableDeclaration: TYPE IDENT semi_opt { print_reduce("variableDeclaration -> TYPE IDENT semi_opt", @1.first_line); }
                   | TYPE assignment { print_reduce("variableDeclaration -> TYPE assignment", @1.first_line); };

method_call_expr: expression LPAR arguments RPAR { print_reduce("method_call_expr -> expression LPAR arguments RPAR", @1.first_line); };

method_call: method_call_expr semi_opt { print_reduce("method_call -> method_call_expr semi_opt", @1.first_line); };

returnStmt: RETURN expression semi_opt {print_reduce("returnStmt -> RETURN expression semi_opt", @1.first_line);};

assignment: lvalue ASSIGN expression_or_object semi_opt { print_reduce("assignment -> lvalue ASSIGN expression_or_object semi_opt", @1.first_line); };

conditional: IF LPAR expression RPAR command { print_reduce("conditional -> IF LPAR expression RPAR command", @1.first_line); }
            | IF LPAR expression RPAR command ELSE command { print_reduce("conditional -> IF LPAR expression RPAR command ELSE command", @1.first_line); };

block: LCURLY statement_list RCURLY { print_reduce("block -> LCURLY statement_list RCURLY", @1.first_line); }
        ;

expression: expression PLUS expression { print_reduce("expression -> expression PLUS expression", @1.first_line); }
          | expression MINUS expression { print_reduce("expression -> expression MINUS expression", @1.first_line); }
          | expression MULT expression { print_reduce("expression -> expression MULT expression", @1.first_line); }
          | expression DIV expression { print_reduce("expression -> expression DIV expression", @1.first_line); }
          | expression REST expression { print_reduce("expression -> expression REST expression", @1.first_line); }

          | expression POINT IDENT { print_reduce("expression -> expression POINT IDENT", @1.first_line); }

          /* Operadores booleanos e de comparação agora estão aqui */
          | expression EQUAL expression { print_reduce("expression -> expression EQUAL expression", @1.first_line); }
          | expression TEQUAL expression { print_reduce("expression -> expression TEQUAL expression", @1.first_line); }
          | expression DIFF expression { print_reduce("expression -> expression DIFF expression", @1.first_line); }
          | expression LESS expression { print_reduce("expression -> expression LESS expression", @1.first_line); }
          | expression MORE expression { print_reduce("expression -> expression MORE expression", @1.first_line); }
          | expression LEQ expression { print_reduce("expression -> expression LEQ expression", @1.first_line); }
          | expression MEQ expression { print_reduce("expression -> expression MEQ expression", @1.first_line); }
          | expression AND expression { print_reduce("expression -> expression AND expression", @1.first_line); }
          | expression OR expression { print_reduce("expression -> expression OR expression", @1.first_line); }
          | NOT expression { print_reduce("expression -> NOT expression", @1.first_line); }

          | LPAR expression RPAR { print_reduce("expression -> LPAR expression RPAR", @1.first_line); }
          | method_call_expr { print_reduce("expression -> method_call_expr", @1.first_line); }
          | variable { print_reduce("expression -> variable", @1.first_line); }
          | lvalue { print_reduce("expression -> lvalue", @1.first_line); }
          | TRUE { print_reduce("expression -> TRUE", @1.first_line); }
          | FALSE { print_reduce("expression -> FALSE", @1.first_line); }
          | LPAR arguments RPAR ARROW expression { print_reduce("expression -> LPAR arguments RPAR ARROW expression", @1.first_line); }
          | function_expression { print_reduce("expression -> function_expression", @1.first_line); }
          | array_literal { print_reduce("expression -> array_literal", @1.first_line); }


          /*erros*/
          | LPAR arguments RPAR error expression {
            print_reduce("expression -> erro arrow", @1.first_line);
            yyerror("=> Arrow Function esperado");
          }

        ;                

expression_or_object: expression
                    | object_literal
                    ;
object_literal: LCURLY property_list_opt RCURLY
    { print_reduce("object_literal -> { ... }", @1.first_line); }
    ;


property_list_opt: %empty
                 | property_list
                 ;

property_list: property
             | property_list COMMA property
             ;

property: lvalue COLON expression_or_object { print_reduce("property -> lvalue : expression_or_object", @1.first_line); }
        | variable COLON expression_or_object { print_reduce("property -> variable : expression_or_object", @1.first_line); }
        ;

array_literal: LBRACKET argument_list_opt RBRACKET
    { print_reduce("array_literal -> [ ... ]", @1.first_line); }
    ;

lvalue: IDENT { print_reduce("lvalue -> IDENT", @1.first_line); }
      | lvalue POINT IDENT { print_reduce("lvalue -> lvalue POINT IDENT", @1.first_line); }
      ;

variable: NUMBER { print_reduce("variable -> NUMBER", @1.first_line); }
        | FLOAT { print_reduce("variable -> FLOAT", @1.first_line); }
        | STRING_LITERAL { print_reduce("variable -> STRING_LITERAL", @1.first_line); }
        | STRING_SINGLE_QUOTE { print_reduce("variable -> STRING_SINGLE_QUOTE", @1.first_line); }
        | template_literal { print_reduce("variable -> template_literal", @1.first_line); }

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

int main (void){
    // yydebug = 1;
    yyparse();
}

void yyerror(const char* error){
    printf("Error: %s on line %d\n", error, yylineno);
}