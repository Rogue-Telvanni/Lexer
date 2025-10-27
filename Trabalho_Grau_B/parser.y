%{
    #include <stdio.h>

    int yylex();
    void yyerror(const char* error);
%}

%token FLOAT
%token NUMBER
%token KEY_WORD
%token FUNC
%token ASSING
%token DELIMITER
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

%%

int main (void){
    yyparse();
}

void yyerror(const char* error){
    printf("Error: %s\n", error);
}