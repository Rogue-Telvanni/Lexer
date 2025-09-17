%{
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For strtod
#include <errno.h> // For checking errors
%}

DIGIT [0-9]
INTEGER {DIGIT}+
FLOAT {DIGIT}+\.{DIGIT}+
IDENTIFIER [a-zA-Z_][a-zA-Z0-9_]*
WHITESPACE [ \t\r\n]+
COMMENT "//"[^\r\n]*
OPERATORS "+"|"-"|"*"|"/"|"=="|"!="|"<"|">"|"<="|">="|"%"
ASSIGN "="|":"
KEY_WORDS "if"|"else"|"while"|"for"|"let"|"var"|"const"
STRING_LITERAL \"[^\"]*\"
STRING_SINGLE_QUOTE '[^']*'
STRING_BACKTICK_TEMPLATE_LITERA `[^`]*`
DELIMITER "{"|"}"|"("|")"|"["|"]"|";"|","
FUNCTION "function"

%%

{FLOAT} {
    double value;
    char *endptr;

    // Reset errno to 0 before the call to distinguish between 0.0 and error
    errno = 0;
    
    // strtod converts the string pointed to by yytext to a double value
    value = strtod(yytext, &endptr);

    // Check for potential errors
    if (endptr == yytext) {
        // No conversion could be performed
        fprintf(stderr, "Error converting float: %s\n", yytext);
    } else if (errno == ERANGE) {
        // Value is out of the range of a double
        if (value == HUGE_VAL) {
            fprintf(stderr, "Error: Value %s is too large\n", yytext);
        } else if (value == -HUGE_VAL) {
            fprintf(stderr, "Error: Value %s is too small\n", yytext);
        } else {
            fprintf(stderr, "Error: Range error for %s\n", yytext);
        }
    } else {
        printf("Matched Float: %f\n", value);
    }
}

{INTEGER} {
    printf("Matched Integer: %s\n", yytext);
}

{KEY_WORDS} {
    printf("Matched keyword: %s\n", yytext);
}

{FUNCTION} {
    printf("Matched function: %s\n", yytext);
}

{ASSIGN} {
    printf("Matched Assign: %s\n", yytext);
}

{DELIMITER} {
    printf("Matched Delimiter: %s\n", yytext);
}

{OPERATORS} {
    printf("Matched Operator: %s\n", yytext);
}

"." {
    printf("Matched Point: %s\n", yytext);
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

{STRING_LITERAL} {
    printf("Matched String: %s\n", yytext);
}

{STRING_SINGLE_QUOTE} {
    printf("Matched Single Quote String: %s\n", yytext);

}

{STRING_BACKTICK_TEMPLATE_LITERA} {
    printf("Matched Template Literal: %s\n", yytext);

}

<<EOF>> {
    printf("End of file found");
    yyterminate();
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