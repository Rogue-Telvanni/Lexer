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
KEY_WORDS "if"|"else"|"while"|"for"|"let"|"var"


%%

{KEY_WORDS} {
        printf("Matched keyword: %s\n", yytext);
}

{INTEGER} {
	printf("Macth Integer: %s\n", yytext);
}

{FLOAT} {
	printf("Macth Float: %s\n", yytext);
}

{IDENTIFIER} {
	printf("Macth Identifier: %s\n", yytext);
}

{WHITESPACE} {
	printf("Match White Space\n");
}

{COMMENT} {
	printf("Match Comment %s\n", yytext);
}


{OPERATORS} {
	printf("Match Operators %s\n", yytext);
}

.         {
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