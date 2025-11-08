/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    FLOAT = 258,                   /* FLOAT  */
    NUMBER = 259,                  /* NUMBER  */
    FUNC = 260,                    /* FUNC  */
    ASSIGN = 261,                  /* ASSIGN  */
    COLON = 262,                   /* COLON  */
    LPAR = 263,                    /* LPAR  */
    RPAR = 264,                    /* RPAR  */
    LCURLY = 265,                  /* LCURLY  */
    RCURLY = 266,                  /* RCURLY  */
    LBRACKET = 267,                /* LBRACKET  */
    RBRACKET = 268,                /* RBRACKET  */
    SEMI = 269,                    /* SEMI  */
    COMMA = 270,                   /* COMMA  */
    RETURN = 271,                  /* RETURN  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    OPERATORS = 274,               /* OPERATORS  */
    POINT = 275,                   /* POINT  */
    IDENT = 276,                   /* IDENT  */
    PLUS = 277,                    /* PLUS  */
    MINUS = 278,                   /* MINUS  */
    MULT = 279,                    /* MULT  */
    DIV = 280,                     /* DIV  */
    EQUAL = 281,                   /* EQUAL  */
    TEQUAL = 282,                  /* TEQUAL  */
    DIFF = 283,                    /* DIFF  */
    LESS = 284,                    /* LESS  */
    MORE = 285,                    /* MORE  */
    LEQ = 286,                     /* LEQ  */
    MEQ = 287,                     /* MEQ  */
    REST = 288,                    /* REST  */
    TRUE = 289,                    /* TRUE  */
    FALSE = 290,                   /* FALSE  */
    AND = 291,                     /* AND  */
    OR = 292,                      /* OR  */
    NOT = 293,                     /* NOT  */
    TYPE = 294,                    /* TYPE  */
    WHITESPACE = 295,              /* WHITESPACE  */
    COMMENT = 296,                 /* COMMENT  */
    ARROW = 297,                   /* ARROW  */
    STRING_LITERAL = 298,          /* STRING_LITERAL  */
    STRING_SINGLE_QUOTE = 299,     /* STRING_SINGLE_QUOTE  */
    TEMPLATE_START = 300,          /* TEMPLATE_START  */
    TEMPLATE_END = 301,            /* TEMPLATE_END  */
    TEMPLATE_EXPR_START = 302,     /* TEMPLATE_EXPR_START  */
    TEMPLATE_CHUNK = 303           /* TEMPLATE_CHUNK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
