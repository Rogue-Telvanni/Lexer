%{
  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  extern int yylineno;
%}

%token FLOAT
%token NUMBER
%token FUNC
%token ASSIGN
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
%token ASSIGN
%token WHITESPACE
%token COMMENT
%token STRING_LITERAL
%token STRING_SINGLE_QUOTE
%token STRING_BACKTICK_TEMPLATE_LITERAL


/* declaração de qual lado deve iniciar a leitura*/
%right ASSING
%left OR
%left AND
%left EQUAL DIFF
%left LESS MORE LEQ MEQ
%left PLUS MINUS
%left MULT DIV REST
%right NOT


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

function : FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY {printf("program -> FUNC IDENT %s LPAR RPAR LCURLY RCURLY\n", $2);};

arguments: argument_list_opt
         ;

/* "argument_list_opt" significa "lista de argumentos opcional" (pode ser vazia) */
argument_list_opt: %empty
                 | argument_list
                 ;

/* "argument_list" é a lista em si (uma ou mais expressões) */
argument_list: expression
             | argument_list COMMA expression
             ;

command     : assignment
            | conditional
            | method_call
            | returnStmt
            | block
            | SEMI
            ;

method_call_expr: IDENT LPAR arguments RPAR;

method_call: method_call_expr SEMI;

returnStmt  : RETURN expression SEMI {printf("return expresion %s", $2);};

assignment  : IDENT ASSING expression SEMI {};

conditional : IF LPAR expression RPAR command
            | IF LPAR expression RPAR command ELSE command;

block       : LCURLY statement_list RCURLY 
            ;

expression  : expression PLUS expression
            | expression MINUS expression
            | expression MULT expression
            | expression DIV expression
            | expression REST expression

            /* Operadores booleanos e de comparação agora estão aqui */
            | expression EQUAL expression
            | expression DIFF expression
            | expression LESS expression
            | expression MORE expression
            | expression LEQ expression
            | expression MEQ expression
            | expression AND expression
            | expression OR expression
            | NOT expression

            | LPAR expression RPAR
            | method_call_expr
            | variable
            | TRUE
            | FALSE
            ;                

variable: IDENT
        | NUMBER
        | FLOAT
        | STRING_LITERAL
        ;

%%

int main (void){
    yyparse();
}

void yyerror(const char* error){
    printf("Error: %s on line %d\n", error, yylineno);
}