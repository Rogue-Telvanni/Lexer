%{
  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  extern int yylineno;
  extern int yydebug;
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
%token TEQUAL
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
%token TYPE
%token WHITESPACE
%token COMMENT
%token ARROW
%token STRING_LITERAL
%token STRING_SINGLE_QUOTE
%token STRING_BACKTICK_TEMPLATE_LITERAL


/* declaração de qual lado deve iniciar a leitura*/
%right ASSIGN
%left OR
%left AND
%left EQUAL DIFF
%left LESS MORE LEQ MEQ
%left PLUS MINUS
%left MULT DIV REST
%right NOT
%left POINT
%right ARROW 

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

function : FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY { printf("REDUCE: function -> FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY\n"); }
arguments: argument_list_opt { printf("REDUCE: arguments -> argument_list_opt\n"); }
         ;

/* "argument_list_opt" significa "lista de argumentos opcional" (pode ser vazia) */
argument_list_opt: %empty { printf("REDUCE: argument_list_opt -> empty\n"); }
                 | argument_list { printf("REDUCE: argument_list_opt -> argument_list\n"); }
                 ;

/* "argument_list" é a lista em si (uma ou mais expressões) */
argument_list: expression { printf("REDUCE: argument_list -> expression\n"); }
             | argument_list COMMA expression { printf("REDUCE: argument_list -> argument_list COMMA expression\n"); }
             ;

command     : assignment { printf("REDUCE: command -> assignment\n"); }
            | conditional { printf("REDUCE: command -> conditional\n"); }
            | method_call { printf("REDUCE: command -> method_call\n"); }
            | returnStmt { printf("REDUCE: command -> returnStmt\n"); }
            | block { printf("REDUCE: command -> block\n"); }
            | variableDeclaration { printf("REDUCE: command -> variableDeclaration\n"); }
            | SEMI { printf("REDUCE: command -> SEMI\n"); }
            ;

variableDeclaration : TYPE IDENT SEMI { printf("REDUCE: variableDeclaration -> TYPE IDENT SEMI\n"); }
                    | TYPE assignment { printf("REDUCE: variableDeclaration -> TYPE assignment\n"); };

method_call_expr: expression LPAR arguments RPAR { printf("REDUCE: method_call_expr -> expression LPAR arguments RPAR\n"); };

method_call: method_call_expr SEMI { printf("REDUCE: method_call -> method_call_expr SEMI\n"); };

returnStmt  : RETURN expression SEMI {printf("REDUCE: returnStmt -> RETURN expression SEMI\n");};

assignment  : expression ASSIGN expression SEMI { printf("REDUCE: assignment -> expression ASSIGN expression SEMI\n"); };

conditional : IF LPAR expression RPAR command { printf("REDUCE: conditional -> IF LPAR expression RPAR command\n"); }
            | IF LPAR expression RPAR command ELSE command { printf("REDUCE: conditional -> IF LPAR expression RPAR command ELSE command\n"); };

block       : LCURLY statement_list RCURLY { printf("REDUCE: block -> LCURLY statement_list RCURLY\n"); }
            ;

expression  : expression PLUS expression { printf("REDUCE: expression -> expression PLUS expression\n"); }
            | expression MINUS expression { printf("REDUCE: expression -> expression MINUS expression\n"); }
            | expression MULT expression { printf("REDUCE: expression -> expression MULT expression\n"); }
            | expression DIV expression { printf("REDUCE: expression -> expression DIV expression\n"); }
            | expression REST expression { printf("REDUCE: expression -> expression REST expression\n"); }

            | expression POINT IDENT { printf("REDUCE: expression -> expression POINT IDENT\n"); }

            /* Operadores booleanos e de comparação agora estão aqui */
            | expression EQUAL expression { printf("REDUCE: expression -> expression EQUAL expression\n"); }
            | expression TEQUAL expression { printf("REDUCE: expression -> expression TEQUAL expression\n"); }
            | expression DIFF expression { printf("REDUCE: expression -> expression DIFF expression\n"); }
            | expression LESS expression { printf("REDUCE: expression -> expression LESS expression\n"); }
            | expression MORE expression { printf("REDUCE: expression -> expression MORE expression\n"); }
            | expression LEQ expression { printf("REDUCE: expression -> expression LEQ expression\n"); }
            | expression MEQ expression { printf("REDUCE: expression -> expression MEQ expression\n"); }
            | expression AND expression { printf("REDUCE: expression -> expression AND expression\n"); }
            | expression OR expression { printf("REDUCE: expression -> expression OR expression\n"); }
            | NOT expression { printf("REDUCE: expression -> NOT expression\n"); }

            | LPAR expression RPAR { printf("REDUCE: expression -> LPAR expression RPAR\n"); }
            | method_call_expr { printf("REDUCE: expression -> method_call_expr\n"); }
            | variable { printf("REDUCE: expression -> variable\n"); }
            | TRUE { printf("REDUCE: expression -> TRUE\n"); }
            | FALSE { printf("REDUCE: expression -> FALSE\n"); }
            | LPAR arguments RPAR ARROW expression { printf("REDUCE: expression -> LPAR arguments RPAR ARROW expression\n"); }
            ;                

variable: IDENT
        | NUMBER
        | FLOAT
        | STRING_LITERAL
        | STRING_SINGLE_QUOTE
        | STRING_BACKTICK_TEMPLATE_LITERAL
        ;

%%

int main (void){
    yydebug = 1;
    yyparse();
}

void yyerror(const char* error){
    printf("Error: %s on line %d\n", error, yylineno);
}