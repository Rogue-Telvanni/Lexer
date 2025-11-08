%{
  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  extern int yylineno;
  extern int yydebug;

  extern void go_to_template_state();
  extern void go_to_initial_state();
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
%left COLON 

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

function : FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY { printf("REDUCE: function -> FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY\n"); }

function_expression: FUNC LPAR arguments RPAR LCURLY statement_list RCURLY { printf("REDUCE: function_expression -> (anonymous)\n"); }
  ;

arguments: argument_list_opt { printf("REDUCE: arguments -> argument_list_opt\n"); }
         ;

/* "argument_list_opt" significa "lista de argumentos opcional" (pode ser vazia) */
argument_list_opt: %empty { printf("REDUCE: argument_list_opt -> empty\n"); }
                 | argument_list { printf("REDUCE: argument_list_opt -> argument_list\n"); }
                 ;

/* "argument_list" é a lista em si (uma ou mais expressões) */
argument_list: expression { printf("REDUCE: argument_list -> expression\n"); }
             | argument_list COMMA expression { printf("REDUCE: argument_list -> argument_list COMMA expression\n"); }
             ;

command     : assignment { printf("REDUCE: command -> assignment\n"); }
            | conditional { printf("REDUCE: command -> conditional\n"); }
            | method_call { printf("REDUCE: command -> method_call\n"); }
            | returnStmt { printf("REDUCE: command -> returnStmt\n"); }
            | block { printf("REDUCE: command -> block\n"); }
            | variableDeclaration { printf("REDUCE: command -> variableDeclaration\n"); }
            | SEMI { printf("REDUCE: command -> SEMI\n"); }
            ;

variableDeclaration : TYPE IDENT SEMI { printf("REDUCE: variableDeclaration -> TYPE IDENT SEMI\n"); }
                    | TYPE assignment { printf("REDUCE: variableDeclaration -> TYPE assignment\n"); };

method_call_expr: expression LPAR arguments RPAR { printf("REDUCE: method_call_expr -> expression LPAR arguments RPAR\n"); };

method_call: method_call_expr SEMI { printf("REDUCE: method_call -> method_call_expr SEMI\n"); };

returnStmt  : RETURN expression SEMI {printf("REDUCE: returnStmt -> RETURN expression SEMI\n");};

assignment  : lvalue ASSIGN expression SEMI { printf("REDUCE: assignment -> expression ASSIGN expression SEMI\n"); };

conditional : IF LPAR expression RPAR command { printf("REDUCE: conditional -> IF LPAR expression RPAR command\n"); }
            | IF LPAR expression RPAR command ELSE command { printf("REDUCE: conditional -> IF LPAR expression RPAR command ELSE command\n"); };

block       : LCURLY statement_list RCURLY { printf("REDUCE: block -> LCURLY statement_list RCURLY\n"); }
            ;

expression  : expression PLUS expression { printf("REDUCE: expression -> expression PLUS expression\n"); }
            | expression MINUS expression { printf("REDUCE: expression -> expression MINUS expression\n"); }
            | expression MULT expression { printf("REDUCE: expression -> expression MULT expression\n"); }
            | expression DIV expression { printf("REDUCE: expression -> expression DIV expression\n"); }
            | expression REST expression { printf("REDUCE: expression -> expression REST expression\n"); }

            | expression POINT IDENT { printf("REDUCE: expression -> expression POINT IDENT\n"); }
            | lvalue { printf("REDUCE: expression -> expression POINT IDENT\n"); }

            /* Operadores booleanos e de comparação agora estão aqui */
            | expression EQUAL expression { printf("REDUCE: expression -> expression EQUAL expression\n"); }
            | expression TEQUAL expression { printf("REDUCE: expression -> expression TEQUAL expression\n"); }
            | expression DIFF expression { printf("REDUCE: expression -> expression DIFF expression\n"); }
            | expression LESS expression { printf("REDUCE: expression -> expression LESS expression\n"); }
            | expression MORE expression { printf("REDUCE: expression -> expression MORE expression\n"); }
            | expression LEQ expression { printf("REDUCE: expression -> expression LEQ expression\n"); }
            | expression MEQ expression { printf("REDUCE: expression -> expression MEQ expression\n"); }
            | expression AND expression { printf("REDUCE: expression -> expression AND expression\n"); }
            | expression OR expression { printf("REDUCE: expression -> expression OR expression\n"); }
            | NOT expression { printf("REDUCE: expression -> NOT expression\n"); }

            | LPAR expression RPAR { printf("REDUCE: expression -> LPAR expression RPAR\n"); }
            | method_call_expr { printf("REDUCE: expression -> method_call_expr\n"); }
            | variable { printf("REDUCE: expression -> variable\n"); }
            | TRUE { printf("REDUCE: expression -> TRUE\n"); }
            | FALSE { printf("REDUCE: expression -> FALSE\n"); }
            | LPAR arguments RPAR ARROW expression { printf("REDUCE: expression -> LPAR arguments RPAR ARROW expression\n"); }
            | function_expression { printf("REDUCE: expression -> function_expression\n"); }
            | object_literal { printf("REDUCE: expression -> object_literal\n"); }
            | array_literal { printf("REDUCE: expression -> array_literal\n"); }
            ;                

lvalue: IDENT { printf("REDUCE: lvalue -> IDENT\n"); }
      | lvalue POINT IDENT { printf("REDUCE: lvalue -> expression POINT IDENT\n"); }
      ;

variable: NUMBER
        | FLOAT
        | STRING_LITERAL
        | STRING_SINGLE_QUOTE
        | template_literal
        ;

template_literal: TEMPLATE_START template_body TEMPLATE_END 
    { printf("REDUCE: template_literal -> `...`\n"); }
    ;

template_body: %empty 
    { /* O corpo pode ser vazio */ }
    | template_body template_part
    { /* Constrói o corpo pedaço por pedaço */ }
    ;

template_part: TEMPLATE_CHUNK { printf("REDUCE: template_part -> TEMPLATE_CHUNK\n"); }
    | TEMPLATE_EXPR_START expression RCURLY {printf("REDUCE: template_part -> ${expression}\n");
        go_to_template_state();};



object_literal: LCURLY property_list_opt RCURLY
    { printf("REDUCE: object_literal -> { ... }\n"); }
    ;

property_list_opt: %empty
                 | property_list
                 ;

property_list: property
             | property_list COMMA property
             ;

property: lvalue COLON expression { printf("REDUCE: property -> key : value\n"); }
        | variable COLON expression { printf("REDUCE: property -> key : value\n"); }
    ;

array_literal: LBRACKET argument_list_opt RBRACKET
    { printf("REDUCE: array_literal -> [ ... ]\n"); }
    ;

%%

int main (void){
    yydebug = 1;
    yyparse();
}

void yyerror(const char* error){
    printf("Error: %s on line %d\n", error, yylineno);
}