%{
    #include <stdio.h>
    #include "parser.tab.h"

    void go_to_template_state();
    void go_to_initial_state();
%}

%x TEMPLATE

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

{FUNCTION} { return FUNC; }

{TYPE} {return TYPE; }

{ASSIGN} { return ASSIGN; }

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

"true" { return TRUE; }

"false" { return FALSE; }

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

{IDENTIFIER} { return IDENT; }

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

void go_to_template_state() {
    BEGIN(TEMPLATE);
}

void go_to_initial_state() {
    BEGIN(INITIAL);
}