%option yylineno
%{
    #include <stdio.h>
    #include "parser.tab.h"

    #define YY_USER_ACTION \
        yylloc.first_line = yylineno; \
        yylloc.first_column = yycolumn; \
        yylloc.last_line = yylineno; \
        yylloc.last_column = yycolumn + yyleng; \
        yycolumn += yyleng;
        int yycolumn = 1;


    void go_to_template_state();
    void go_to_initial_state();
%}

%x TEMPLATE

DIGIT [0-9]
INTEGER {DIGIT}+
FLOAT {DIGIT}+\.{DIGIT}+
IDENTIFIER [a-zA-Z_][a-zA-Z0-9_]*
WHITESPACE [ \t\r]+
COMMENT "//"[^\r\n]*
ASSIGN "="
COLON ":"
LOOP "while"|"for"
TYPE "let"|"var"|"const"
STRING_LITERAL \"[^\"]*\"
STRING_SINGLE_QUOTE '[^']*'
STRING_BACKTICK_TEMPLATE_LITERAL `[^`]*`
FUNCTION "function"


%%

{FLOAT} { 
    yylval.fval = strtod(yytext, NULL);
    return FLOAT; 
}

{INTEGER} { 
    yylval.ival = atoi(yytext);
    return INTEGER; 
}

{FUNCTION} { return FUNC; }

{TYPE} {return TYPE; }

{ASSIGN} { return ASSIGN; }

{COLON} { return COLON; }

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

"true" { yylval.ival = 1; return TRUE; }

"false" { yylval.ival = 0; return FALSE; }

"&&" { return AND; }

"||" {return OR; }

"," { return COMMA; }

"=>" { return ARROW; }


"+"     { return PLUS; }
"-"     { return MINUS; }
"*"     { return MULT; }
"/"     { return DIV; }
"==="    { return TEQUAL; }
"=="    { return EQUAL; }
"!="    { return DIFF; }
"<"     { return LESS; }
">"     { return MORE; }
"<="    { return LEQ; }
">="    { return MEQ; }
"%"     { return REST; }

"!"     { return NOT; }

"." { return POINT; }

{IDENTIFIER} { 
    yylval.sval = strdup(yytext);
    return IDENT; 
}

{WHITESPACE} { /*ignora*/ }

{COMMENT} { /*ignora*/ }

{STRING_LITERAL} { return STRING_LITERAL; }

{STRING_SINGLE_QUOTE} { return STRING_SINGLE_QUOTE; }


"`" { 
    go_to_template_state();
    return TEMPLATE_START; 
}

<TEMPLATE>"${" { 
    go_to_initial_state();
    return TEMPLATE_EXPR_START; 
}

<TEMPLATE>"`" { 
    go_to_initial_state();
    return TEMPLATE_END; 
}

<TEMPLATE>(\\.|[^`$])+ { 
    return TEMPLATE_CHUNK; /* Retorna um "pedaço" de string */
}

"\n"  { yylineno++; yycolumn = 1; }

<<EOF>> {
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

void go_to_template_state() {
    BEGIN(TEMPLATE);
}

void go_to_initial_state() {
    BEGIN(INITIAL);
}