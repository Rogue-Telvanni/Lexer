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
    LPAR = 262,                    /* LPAR  */
    RPAR = 263,                    /* RPAR  */
    LCURLY = 264,                  /* LCURLY  */
    RCURLY = 265,                  /* RCURLY  */
    LBRACKET = 266,                /* LBRACKET  */
    RBRACKET = 267,                /* RBRACKET  */
    SEMI = 268,                    /* SEMI  */
    COMMA = 269,                   /* COMMA  */
    RETURN = 270,                  /* RETURN  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    OPERATORS = 273,               /* OPERATORS  */
    POINT = 274,                   /* POINT  */
    IDENT = 275,                   /* IDENT  */
    PLUS = 276,                    /* PLUS  */
    MINUS = 277,                   /* MINUS  */
    MULT = 278,                    /* MULT  */
    DIV = 279,                     /* DIV  */
    EQUAL = 280,                   /* EQUAL  */
    TEQUAL = 281,                  /* TEQUAL  */
    DIFF = 282,                    /* DIFF  */
    LESS = 283,                    /* LESS  */
    MORE = 284,                    /* MORE  */
    LEQ = 285,                     /* LEQ  */
    MEQ = 286,                     /* MEQ  */
    REST = 287,                    /* REST  */
    TRUE = 288,                    /* TRUE  */
    FALSE = 289,                   /* FALSE  */
    AND = 290,                     /* AND  */
    OR = 291,                      /* OR  */
    NOT = 292,                     /* NOT  */
    TYPE = 293,                    /* TYPE  */
    WHITESPACE = 294,              /* WHITESPACE  */
    COMMENT = 295,                 /* COMMENT  */
    STRING_LITERAL = 296,          /* STRING_LITERAL  */
    STRING_SINGLE_QUOTE = 297,     /* STRING_SINGLE_QUOTE  */
    STRING_BACKTICK_TEMPLATE_LITERAL = 298 /* STRING_BACKTICK_TEMPLATE_LITERAL  */
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
