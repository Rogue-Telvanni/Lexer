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
%token WHITESPACE
%token COMMENT
%token STRING_LITERAL
%token STRING_SINGLE_QUOTE
%token STRING_BACKTICK_TEMPLATE_LITERAL

%start program

%%

program: %empty

function : FUNC IDENT LPAR arguments RPAR LCURLY RCURLY {printf("program -> FUNC IDENT %s LPAR RPAR LCURLY RCURLY\n", $2);}

arguments   : argument arguments {}
argument    : IDENT {}
            : COMMA IDENT
            | %empty

returnStmt : RETURN expression SEMI {print("return expresion %s", $2);}

expression  : expression PLUS expression     # addExpr
            | expression MULT expression     # mulExpr
            | expression REST expression
            | LPAR expression RPAR           # parExpr
            | methodCall                     # methodCallExpr
            | variable                       # intExpr
            | booleanExpression              # boolExpr ; // Unificação aqui

variable: IDENT
        | NUMBER

%%

int main (void){
    yyparse();
}

void yyerror(const char* error){
    printf("Error: %s on line %d\n", error, yylineno);
}