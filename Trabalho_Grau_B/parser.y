%{
  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  extern int yylineno;
%}

%token FLOAT
%token NUMBER
%token KEY_WORD
%token FUNC
%token ASSING
%token LPAR
%token RPAR
%token LCURLY
%token RCURLY
%token LBRACKET
%token RBRACKET
%token SEMI
%token COMMA
%token OPERATORS
%token POINT
%token IDENT
%token WHITESPACE
%token COMMENT
%token STRING_LITERAL
%token STRING_SINGLE_QUOTE
%token STRING_BACKTICK_TEMPLATE_LITERAL

%start program

%%

program: %empty

function : FUNC IDENT LPAR RPAR LCURLY RCURLY {printf("program -> FUNC IDENT %s LPAR RPAR LCURLY RCURLY\n", $2);}

variable: IDENT
        | NUMBER

%%

int main (void){
    yyparse();
}

void yyerror(const char* error){
    printf("Error: %s on line %d\n", error, yylineno);
}