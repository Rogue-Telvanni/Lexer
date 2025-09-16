%{
#include <stdio.h>
%}

DIGIT [0-9]
INTEGER {DIGIT}+
FLOAT {DIGIT}+\.{DIGIT}+
IDENTIFIER [a-zA-Z_][a-zA-Z0-9_]*
WHITESPACE [ \t\r\n]+
COMMENT "//"[^\r\n]*
OPERATORS "+"|"-"|"*"|"/"|"=="|"!="|"<"|">"|"<="|">="
ASSIGN "="
KEY_WORDS "if"|"else"|"while"|"for"|"let"|"var"
STRING_LITERAL \"[^\"]*\"

%%

{KEY_WORDS} {
    printf("Matched keyword: %s\n", yytext);
}

{ASSIGN} {
    printf("Matched Assign: %s\n", yytext);
}

{OPERATORS} {
    printf("Matched Operator: %s\n", yytext);
}

{IDENTIFIER} {
    printf("Matched Identifier: %s\n", yytext);
}

{WHITESPACE} {
    printf("Matched White Space\n");
}

{COMMENT} {
    printf("Matched Comment: %s\n", yytext);
}

{FLOAT} {
    printf("Matched Float: %s\n", yytext);
    /* Here you can convert the string to a double */
    double value = atof(yytext);
    printf("Converted to double: %f\n", value);
}

{INTEGER} {
    printf("Matched Integer: %s\n", yytext);
}

{STRING_LITERAL} {
    printf("Matched String: %s\n", yytext);
}

. {
    fprintf(stderr, "Lexical Error: Unexpected character '%s' on line %d\n", yytext, yylineno);
    exit(1);
}

%%

int main( int argc, char **argv ) {
    ++argv, --argc;  /* skip over program name */
    if ( argc > 0 ) {
            yyin = fopen( argv[0], "r" );
    } else {
            yyin = stdin;
    }
    yylex();

    if (yyin != stdin) {
        fclose(yyin);
    }
}