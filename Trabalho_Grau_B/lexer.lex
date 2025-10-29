%{
    #include <stdio.h>
    #include "parser.tab.h"
%}

DIGIT [0-9]
INTEGER {DIGIT}+
FLOAT {DIGIT}+\.{DIGIT}+
IDENTIFIER [a-zA-Z_][a-zA-Z0-9_]*
WHITESPACE [ \t\r\n]+
COMMENT "//"[^\r\n]*
ASSIGN "="|":"
LOOP "while"|"for"
TYPE "let"|"var"|"const"
STRING_LITERAL \"[^\"]*\"
STRING_SINGLE_QUOTE '[^']*'
STRING_BACKTICK_TEMPLATE_LITERAL `[^`]*`
FUNCTION "function"

%%

{FLOAT} { return FLOAT; }

{INTEGER} { return NUMBER; }

{KEY_WORDS} { return KEY_WORD; }

{FUNCTION} { return FUNC; }

{ASSIGN} { return ASSING; }

"(" { return LPAR; }

")" { return RPAR; }

"{" { return LCURLY; }

"}" { return RCURLY; }

"[" { return LBRACKET; }

"]" { return RBRACKET; }

";" { return SEMI; }

"return" { return RETURN; }

"if" { return IF; }

"else" { return ELSE; }

"," { return COMMA; }


"+"     { return PLUS; }
"-"     { return MINUS; }
"*"     { return MULT; }
"/"     { return DIV; }
"=="    { return EQUAL; }
"!="    { return DIFF; }
"<"     { return LESS; }
">"     { return MORE; }
"<="    { return LEQ; }
">="    { return MEQ; }
"%"     { return REST; }

"." { return POINT; }

{IDENTIFIER} { return IDENT; }

{WHITESPACE} { /*ignora*/ }

{COMMENT} { /*ignora*/ }

{STRING_LITERAL} { return STRING_LITERAL; }

{STRING_SINGLE_QUOTE} { return STRING_SINGLE_QUOTE; }

{STRING_BACKTICK_TEMPLATE_LITERAL} { return STRING_BACKTICK_TEMPLATE_LITERAL; }

<<EOF>> {
    printf("End of file found");
    yyterminate();
}

. {
    fprintf(stderr, "Lexical Error: Unexpected character '%s' on line %d\n", yytext, yylineno);
    exit(1);
}

%%

int yywrap(void) {
    return 1;
}