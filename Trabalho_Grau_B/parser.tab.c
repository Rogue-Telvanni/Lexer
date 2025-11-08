/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  extern int yylineno;
  extern int yydebug;

  extern void go_to_template_state();
  extern void go_to_initial_state();

#line 83 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FLOAT = 3,                      /* FLOAT  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_FUNC = 5,                       /* FUNC  */
  YYSYMBOL_ASSIGN = 6,                     /* ASSIGN  */
  YYSYMBOL_COLON = 7,                      /* COLON  */
  YYSYMBOL_LPAR = 8,                       /* LPAR  */
  YYSYMBOL_RPAR = 9,                       /* RPAR  */
  YYSYMBOL_LCURLY = 10,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 11,                    /* RCURLY  */
  YYSYMBOL_LBRACKET = 12,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 13,                  /* RBRACKET  */
  YYSYMBOL_SEMI = 14,                      /* SEMI  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_OPERATORS = 19,                 /* OPERATORS  */
  YYSYMBOL_POINT = 20,                     /* POINT  */
  YYSYMBOL_IDENT = 21,                     /* IDENT  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_MINUS = 23,                     /* MINUS  */
  YYSYMBOL_MULT = 24,                      /* MULT  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_EQUAL = 26,                     /* EQUAL  */
  YYSYMBOL_TEQUAL = 27,                    /* TEQUAL  */
  YYSYMBOL_DIFF = 28,                      /* DIFF  */
  YYSYMBOL_LESS = 29,                      /* LESS  */
  YYSYMBOL_MORE = 30,                      /* MORE  */
  YYSYMBOL_LEQ = 31,                       /* LEQ  */
  YYSYMBOL_MEQ = 32,                       /* MEQ  */
  YYSYMBOL_REST = 33,                      /* REST  */
  YYSYMBOL_TRUE = 34,                      /* TRUE  */
  YYSYMBOL_FALSE = 35,                     /* FALSE  */
  YYSYMBOL_AND = 36,                       /* AND  */
  YYSYMBOL_OR = 37,                        /* OR  */
  YYSYMBOL_NOT = 38,                       /* NOT  */
  YYSYMBOL_TYPE = 39,                      /* TYPE  */
  YYSYMBOL_WHITESPACE = 40,                /* WHITESPACE  */
  YYSYMBOL_COMMENT = 41,                   /* COMMENT  */
  YYSYMBOL_ARROW = 42,                     /* ARROW  */
  YYSYMBOL_STRING_LITERAL = 43,            /* STRING_LITERAL  */
  YYSYMBOL_STRING_SINGLE_QUOTE = 44,       /* STRING_SINGLE_QUOTE  */
  YYSYMBOL_TEMPLATE_START = 45,            /* TEMPLATE_START  */
  YYSYMBOL_TEMPLATE_END = 46,              /* TEMPLATE_END  */
  YYSYMBOL_TEMPLATE_EXPR_START = 47,       /* TEMPLATE_EXPR_START  */
  YYSYMBOL_TEMPLATE_CHUNK = 48,            /* TEMPLATE_CHUNK  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_statement_list = 51,            /* statement_list  */
  YYSYMBOL_statement = 52,                 /* statement  */
  YYSYMBOL_function = 53,                  /* function  */
  YYSYMBOL_function_expression = 54,       /* function_expression  */
  YYSYMBOL_arguments = 55,                 /* arguments  */
  YYSYMBOL_argument_list_opt = 56,         /* argument_list_opt  */
  YYSYMBOL_argument_list = 57,             /* argument_list  */
  YYSYMBOL_command = 58,                   /* command  */
  YYSYMBOL_variableDeclaration = 59,       /* variableDeclaration  */
  YYSYMBOL_method_call_expr = 60,          /* method_call_expr  */
  YYSYMBOL_method_call = 61,               /* method_call  */
  YYSYMBOL_returnStmt = 62,                /* returnStmt  */
  YYSYMBOL_assignment = 63,                /* assignment  */
  YYSYMBOL_conditional = 64,               /* conditional  */
  YYSYMBOL_block = 65,                     /* block  */
  YYSYMBOL_expression = 66,                /* expression  */
  YYSYMBOL_lvalue = 67,                    /* lvalue  */
  YYSYMBOL_variable = 68,                  /* variable  */
  YYSYMBOL_template_literal = 69,          /* template_literal  */
  YYSYMBOL_template_body = 70,             /* template_body  */
  YYSYMBOL_template_part = 71,             /* template_part  */
  YYSYMBOL_array_literal = 72              /* array_literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   552

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  134

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    84,    85,    89,    90,    93,    95,    96,
      99,   103,   104,   108,   109,   112,   113,   114,   115,   116,
     117,   118,   121,   122,   124,   126,   128,   130,   132,   133,
     135,   138,   139,   140,   141,   142,   144,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   170,   171,   174,   175,
     176,   177,   178,   182,   186,   188,   192,   193,   213
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "FLOAT", "NUMBER",
  "FUNC", "ASSIGN", "COLON", "LPAR", "RPAR", "LCURLY", "RCURLY",
  "LBRACKET", "RBRACKET", "SEMI", "COMMA", "RETURN", "IF", "ELSE",
  "OPERATORS", "POINT", "IDENT", "PLUS", "MINUS", "MULT", "DIV", "EQUAL",
  "TEQUAL", "DIFF", "LESS", "MORE", "LEQ", "MEQ", "REST", "TRUE", "FALSE",
  "AND", "OR", "NOT", "TYPE", "WHITESPACE", "COMMENT", "ARROW",
  "STRING_LITERAL", "STRING_SINGLE_QUOTE", "TEMPLATE_START",
  "TEMPLATE_END", "TEMPLATE_EXPR_START", "TEMPLATE_CHUNK", "$accept",
  "program", "statement_list", "statement", "function",
  "function_expression", "arguments", "argument_list_opt", "argument_list",
  "command", "variableDeclaration", "method_call_expr", "method_call",
  "returnStmt", "assignment", "conditional", "block", "expression",
  "lvalue", "variable", "template_literal", "template_body",
  "template_part", "array_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-10)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -104,     6,   249,  -104,  -104,  -104,    10,   292,  -104,   292,
    -104,   292,     3,  -104,  -104,  -104,   292,   -12,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,    26,  -104,  -104,  -104,
    -104,  -104,   425,     2,  -104,  -104,  -104,   292,     8,    33,
      17,  -104,    27,  -104,    62,    -3,   133,    37,   425,   320,
     292,    -6,    38,  -104,     2,     1,  -104,   292,    30,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,    52,    65,   292,    68,    36,   292,
    -104,  -104,  -104,  -104,   346,  -104,  -104,   292,  -104,  -104,
      70,  -104,   503,   503,    -6,    -6,     5,   425,     5,   298,
     298,   298,   298,    -6,   477,   451,   372,  -104,    71,    87,
     292,   292,   425,   264,   399,  -104,  -104,  -104,    90,    88,
      12,    83,  -104,   148,  -104,    92,   264,  -104,   191,  -104,
    -104,   515,   206,  -104
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,    59,    58,     0,    11,     3,    11,
      21,     0,     0,    56,    51,    52,     0,     0,    60,    61,
      64,     4,     5,    54,     6,    20,    48,    17,    18,    15,
      16,    19,     0,    50,    49,    62,    55,    11,     0,     0,
       0,    10,    12,    48,    13,    50,     0,     0,    13,     0,
       0,    46,    56,    23,     0,     0,    25,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
      47,    30,    68,    26,     0,    22,    63,     0,    66,    65,
       0,    36,    31,    32,    33,    34,    37,    38,    39,    40,
      41,    42,    43,    35,    44,    45,     0,    57,     0,     0,
      11,     0,    14,     0,     0,    24,    27,     3,     0,     0,
      53,    28,    67,     0,     3,     0,     0,     8,     0,     3,
      29,     7,     0,     9
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -104,  -104,    11,  -104,  -104,  -104,   -33,    94,  -104,  -103,
    -104,    -1,  -104,  -104,    63,  -104,  -104,    -4,    -2,  -104,
    -104,  -104,  -104,  -104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    21,    22,    23,    40,    41,    42,    24,
      25,    43,    27,    28,    29,    30,    31,    32,    45,    34,
      35,    55,    89,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    26,    57,    44,    75,    48,     3,    49,    73,    52,
     121,    50,    51,    57,    58,    54,    76,    74,    37,    46,
      57,    64,    74,   130,    90,    58,    78,    59,    60,    61,
      62,    38,    64,    48,    66,    67,    68,    69,    70,    64,
      56,    37,    79,   109,    33,    26,    84,    86,    87,    88,
      82,    91,    85,    48,    77,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      57,    80,    48,   107,   108,   112,   110,   119,   111,   115,
      53,   117,    58,   114,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   118,   125,    71,    72,
     124,   126,   129,    47,     0,     0,    48,   120,     0,     0,
       0,    33,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    26,     0,    33,    26,    33,    26,   123,     0,
      33,    26,     0,     0,     0,   128,     4,     5,     6,     0,
     132,     7,     0,     8,    81,     9,     0,    10,     0,    11,
      12,     4,     5,     6,    13,     0,     7,     0,     8,   127,
       9,     0,    10,     0,    11,    12,     0,    14,    15,    13,
       0,    16,    17,     0,     0,     0,    18,    19,    20,     0,
       0,     0,    14,    15,     0,     0,    16,    17,     0,     0,
       0,    18,    19,    20,     4,     5,     6,     0,     0,     7,
       0,     8,   131,     9,     0,    10,     0,    11,    12,     4,
       5,     6,    13,     0,     7,     0,     8,   133,     9,     0,
      10,     0,    11,    12,     0,    14,    15,    13,     0,    16,
      17,     0,     0,     0,    18,    19,    20,     0,     0,     0,
      14,    15,     0,     0,    16,    17,     0,     0,     0,    18,
      19,    20,     4,     5,     6,     0,     0,     7,     0,     8,
       0,     9,     0,    10,     0,    11,    12,     4,     5,    39,
      13,     0,     7,     0,     8,     0,     9,     0,    10,     0,
      11,    12,     0,    14,    15,    13,     0,    16,    17,     0,
       0,     0,    18,    19,    20,     4,     5,    39,    14,    15,
       7,     0,    16,    17,     9,     0,    57,    18,    19,    20,
       0,     0,     0,    13,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,    64,    14,    15,    57,     0,
      16,    70,     0,     0,    83,    18,    19,    20,     0,     0,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    57,   113,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      57,     0,    71,    72,     0,     0,   116,     0,     0,     0,
       0,     0,    58,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,    57,    71,    72,
     122,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    57,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    57,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    57,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,    61,    62,     0,
      64,     0,     0,     0,     0,    -9,    70,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,
       0,    -9,    -9
};

static const yytype_int16 yycheck[] =
{
       2,     2,     8,     7,    37,     9,     0,    11,     6,    21,
     113,     8,    16,     8,    20,    17,     8,    20,     8,     8,
       8,    27,    20,   126,    57,    20,     9,    22,    23,    24,
      25,    21,    27,    37,    29,    30,    31,    32,    33,    27,
      14,     8,    15,    76,    46,    46,    50,    46,    47,    48,
      13,    21,    14,    57,    21,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       8,     9,    76,    21,     9,    79,     8,   110,    42,     9,
      17,    10,    20,    87,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     9,     9,    36,    37,
      10,    18,    10,     9,    -1,    -1,   110,   111,    -1,    -1,
      -1,   113,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   123,    -1,   126,   126,   128,   128,   117,    -1,
     132,   132,    -1,    -1,    -1,   124,     3,     4,     5,    -1,
     129,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
      17,     3,     4,     5,    21,    -1,     8,    -1,    10,    11,
      12,    -1,    14,    -1,    16,    17,    -1,    34,    35,    21,
      -1,    38,    39,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    -1,    34,    35,    -1,    -1,    38,    39,    -1,    -1,
      -1,    43,    44,    45,     3,     4,     5,    -1,    -1,     8,
      -1,    10,    11,    12,    -1,    14,    -1,    16,    17,     3,
       4,     5,    21,    -1,     8,    -1,    10,    11,    12,    -1,
      14,    -1,    16,    17,    -1,    34,    35,    21,    -1,    38,
      39,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    -1,
      34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,
      44,    45,     3,     4,     5,    -1,    -1,     8,    -1,    10,
      -1,    12,    -1,    14,    -1,    16,    17,     3,     4,     5,
      21,    -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,
      16,    17,    -1,    34,    35,    21,    -1,    38,    39,    -1,
      -1,    -1,    43,    44,    45,     3,     4,     5,    34,    35,
       8,    -1,    38,    39,    12,    -1,     8,    43,    44,    45,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23,    24,    25,    -1,    27,    34,    35,     8,    -1,
      38,    33,    -1,    -1,    14,    43,    44,    45,    -1,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       8,    -1,    36,    37,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,     8,    36,    37,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     8,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     8,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     8,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,    -1,
      27,    -1,    -1,    -1,    -1,    20,    33,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     0,     3,     4,     5,     8,    10,    12,
      14,    16,    17,    21,    34,    35,    38,    39,    43,    44,
      45,    52,    53,    54,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    72,     8,    21,     5,
      55,    56,    57,    60,    66,    67,    51,    56,    66,    66,
       8,    66,    21,    63,    67,    70,    14,     8,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    36,    37,     6,    20,    55,     8,    21,     9,    15,
       9,    11,    13,    14,    66,    14,    46,    47,    48,    71,
      55,    21,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    21,     9,    55,
       8,    42,    66,     9,    66,     9,    14,    10,     9,    55,
      66,    58,    11,    51,    10,     9,    18,    11,    51,    10,
      58,    11,    51,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    54,    54,
      55,    56,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    60,    61,    62,    63,    64,    64,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    69,    70,    70,    71,    71,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     8,     7,     8,
       1,     0,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     4,     2,     3,     4,     5,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     1,     1,
       1,     1,     1,     5,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     0,     2,     1,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7: /* function: FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY  */
#line 93 "parser.y"
                                                                       { printf("REDUCE: function -> FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY\n"); }
#line 1316 "parser.tab.c"
    break;

  case 8: /* function_expression: FUNC LPAR arguments RPAR LCURLY statement_list RCURLY  */
#line 95 "parser.y"
                                                                           { printf("REDUCE: function_expression -> (anonymous)\n"); }
#line 1322 "parser.tab.c"
    break;

  case 9: /* function_expression: FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY  */
#line 96 "parser.y"
                                                                { printf("REDUCE: function_expression -> (named)\n"); }
#line 1328 "parser.tab.c"
    break;

  case 10: /* arguments: argument_list_opt  */
#line 99 "parser.y"
                             { printf("REDUCE: arguments -> argument_list_opt\n"); }
#line 1334 "parser.tab.c"
    break;

  case 11: /* argument_list_opt: %empty  */
#line 103 "parser.y"
                          { printf("REDUCE: argument_list_opt -> empty\n"); }
#line 1340 "parser.tab.c"
    break;

  case 12: /* argument_list_opt: argument_list  */
#line 104 "parser.y"
                                 { printf("REDUCE: argument_list_opt -> argument_list\n"); }
#line 1346 "parser.tab.c"
    break;

  case 13: /* argument_list: expression  */
#line 108 "parser.y"
                          { printf("REDUCE: argument_list -> expression\n"); }
#line 1352 "parser.tab.c"
    break;

  case 14: /* argument_list: argument_list COMMA expression  */
#line 109 "parser.y"
                                              { printf("REDUCE: argument_list -> argument_list COMMA expression\n"); }
#line 1358 "parser.tab.c"
    break;

  case 15: /* command: assignment  */
#line 112 "parser.y"
                         { printf("REDUCE: command -> assignment\n"); }
#line 1364 "parser.tab.c"
    break;

  case 16: /* command: conditional  */
#line 113 "parser.y"
                          { printf("REDUCE: command -> conditional\n"); }
#line 1370 "parser.tab.c"
    break;

  case 17: /* command: method_call  */
#line 114 "parser.y"
                          { printf("REDUCE: command -> method_call\n"); }
#line 1376 "parser.tab.c"
    break;

  case 18: /* command: returnStmt  */
#line 115 "parser.y"
                         { printf("REDUCE: command -> returnStmt\n"); }
#line 1382 "parser.tab.c"
    break;

  case 19: /* command: block  */
#line 116 "parser.y"
                    { printf("REDUCE: command -> block\n"); }
#line 1388 "parser.tab.c"
    break;

  case 20: /* command: variableDeclaration  */
#line 117 "parser.y"
                                  { printf("REDUCE: command -> variableDeclaration\n"); }
#line 1394 "parser.tab.c"
    break;

  case 21: /* command: SEMI  */
#line 118 "parser.y"
                   { printf("REDUCE: command -> SEMI\n"); }
#line 1400 "parser.tab.c"
    break;

  case 22: /* variableDeclaration: TYPE IDENT SEMI  */
#line 121 "parser.y"
                                      { printf("REDUCE: variableDeclaration -> TYPE IDENT SEMI\n"); }
#line 1406 "parser.tab.c"
    break;

  case 23: /* variableDeclaration: TYPE assignment  */
#line 122 "parser.y"
                                      { printf("REDUCE: variableDeclaration -> TYPE assignment\n"); }
#line 1412 "parser.tab.c"
    break;

  case 24: /* method_call_expr: expression LPAR arguments RPAR  */
#line 124 "parser.y"
                                                 { printf("REDUCE: method_call_expr -> expression LPAR arguments RPAR\n"); }
#line 1418 "parser.tab.c"
    break;

  case 25: /* method_call: method_call_expr SEMI  */
#line 126 "parser.y"
                                   { printf("REDUCE: method_call -> method_call_expr SEMI\n"); }
#line 1424 "parser.tab.c"
    break;

  case 26: /* returnStmt: RETURN expression SEMI  */
#line 128 "parser.y"
                                     {printf("REDUCE: returnStmt -> RETURN expression SEMI\n");}
#line 1430 "parser.tab.c"
    break;

  case 27: /* assignment: lvalue ASSIGN expression SEMI  */
#line 130 "parser.y"
                                            { printf("REDUCE: assignment -> lvalue ASSIGN expression SEMI\n"); }
#line 1436 "parser.tab.c"
    break;

  case 28: /* conditional: IF LPAR expression RPAR command  */
#line 132 "parser.y"
                                              { printf("REDUCE: conditional -> IF LPAR expression RPAR command\n"); }
#line 1442 "parser.tab.c"
    break;

  case 29: /* conditional: IF LPAR expression RPAR command ELSE command  */
#line 133 "parser.y"
                                                           { printf("REDUCE: conditional -> IF LPAR expression RPAR command ELSE command\n"); }
#line 1448 "parser.tab.c"
    break;

  case 30: /* block: LCURLY statement_list RCURLY  */
#line 135 "parser.y"
                                           { printf("REDUCE: block -> LCURLY statement_list RCURLY\n"); }
#line 1454 "parser.tab.c"
    break;

  case 31: /* expression: expression PLUS expression  */
#line 138 "parser.y"
                                         { printf("REDUCE: expression -> expression PLUS expression\n"); }
#line 1460 "parser.tab.c"
    break;

  case 32: /* expression: expression MINUS expression  */
#line 139 "parser.y"
                                          { printf("REDUCE: expression -> expression MINUS expression\n"); }
#line 1466 "parser.tab.c"
    break;

  case 33: /* expression: expression MULT expression  */
#line 140 "parser.y"
                                         { printf("REDUCE: expression -> expression MULT expression\n"); }
#line 1472 "parser.tab.c"
    break;

  case 34: /* expression: expression DIV expression  */
#line 141 "parser.y"
                                        { printf("REDUCE: expression -> expression DIV expression\n"); }
#line 1478 "parser.tab.c"
    break;

  case 35: /* expression: expression REST expression  */
#line 142 "parser.y"
                                         { printf("REDUCE: expression -> expression REST expression\n"); }
#line 1484 "parser.tab.c"
    break;

  case 36: /* expression: expression POINT IDENT  */
#line 144 "parser.y"
                                     { printf("REDUCE: expression -> expression POINT IDENT\n"); }
#line 1490 "parser.tab.c"
    break;

  case 37: /* expression: expression EQUAL expression  */
#line 147 "parser.y"
                                          { printf("REDUCE: expression -> expression EQUAL expression\n"); }
#line 1496 "parser.tab.c"
    break;

  case 38: /* expression: expression TEQUAL expression  */
#line 148 "parser.y"
                                           { printf("REDUCE: expression -> expression TEQUAL expression\n"); }
#line 1502 "parser.tab.c"
    break;

  case 39: /* expression: expression DIFF expression  */
#line 149 "parser.y"
                                         { printf("REDUCE: expression -> expression DIFF expression\n"); }
#line 1508 "parser.tab.c"
    break;

  case 40: /* expression: expression LESS expression  */
#line 150 "parser.y"
                                         { printf("REDUCE: expression -> expression LESS expression\n"); }
#line 1514 "parser.tab.c"
    break;

  case 41: /* expression: expression MORE expression  */
#line 151 "parser.y"
                                         { printf("REDUCE: expression -> expression MORE expression\n"); }
#line 1520 "parser.tab.c"
    break;

  case 42: /* expression: expression LEQ expression  */
#line 152 "parser.y"
                                        { printf("REDUCE: expression -> expression LEQ expression\n"); }
#line 1526 "parser.tab.c"
    break;

  case 43: /* expression: expression MEQ expression  */
#line 153 "parser.y"
                                        { printf("REDUCE: expression -> expression MEQ expression\n"); }
#line 1532 "parser.tab.c"
    break;

  case 44: /* expression: expression AND expression  */
#line 154 "parser.y"
                                        { printf("REDUCE: expression -> expression AND expression\n"); }
#line 1538 "parser.tab.c"
    break;

  case 45: /* expression: expression OR expression  */
#line 155 "parser.y"
                                       { printf("REDUCE: expression -> expression OR expression\n"); }
#line 1544 "parser.tab.c"
    break;

  case 46: /* expression: NOT expression  */
#line 156 "parser.y"
                             { printf("REDUCE: expression -> NOT expression\n"); }
#line 1550 "parser.tab.c"
    break;

  case 47: /* expression: LPAR expression RPAR  */
#line 158 "parser.y"
                                   { printf("REDUCE: expression -> LPAR expression RPAR\n"); }
#line 1556 "parser.tab.c"
    break;

  case 48: /* expression: method_call_expr  */
#line 159 "parser.y"
                               { printf("REDUCE: expression -> method_call_expr\n"); }
#line 1562 "parser.tab.c"
    break;

  case 49: /* expression: variable  */
#line 160 "parser.y"
                       { printf("REDUCE: expression -> variable\n"); }
#line 1568 "parser.tab.c"
    break;

  case 50: /* expression: lvalue  */
#line 161 "parser.y"
                     { printf("REDUCE: expression -> lvalue\n"); }
#line 1574 "parser.tab.c"
    break;

  case 51: /* expression: TRUE  */
#line 162 "parser.y"
                   { printf("REDUCE: expression -> TRUE\n"); }
#line 1580 "parser.tab.c"
    break;

  case 52: /* expression: FALSE  */
#line 163 "parser.y"
                    { printf("REDUCE: expression -> FALSE\n"); }
#line 1586 "parser.tab.c"
    break;

  case 53: /* expression: LPAR arguments RPAR ARROW expression  */
#line 164 "parser.y"
                                                   { printf("REDUCE: expression -> LPAR arguments RPAR ARROW expression\n"); }
#line 1592 "parser.tab.c"
    break;

  case 54: /* expression: function_expression  */
#line 165 "parser.y"
                                  { printf("REDUCE: expression -> function_expression\n"); }
#line 1598 "parser.tab.c"
    break;

  case 55: /* expression: array_literal  */
#line 166 "parser.y"
                            { printf("REDUCE: expression -> array_literal\n"); }
#line 1604 "parser.tab.c"
    break;

  case 56: /* lvalue: IDENT  */
#line 170 "parser.y"
              { printf("REDUCE: lvalue -> IDENT\n"); }
#line 1610 "parser.tab.c"
    break;

  case 57: /* lvalue: lvalue POINT IDENT  */
#line 171 "parser.y"
                           { printf("REDUCE: lvalue -> lvalue POINT IDENT\n"); }
#line 1616 "parser.tab.c"
    break;

  case 58: /* variable: NUMBER  */
#line 174 "parser.y"
                 { printf("REDUCE: variable -> NUMBER\n"); }
#line 1622 "parser.tab.c"
    break;

  case 59: /* variable: FLOAT  */
#line 175 "parser.y"
                { printf("REDUCE: variable -> FLOAT\n"); }
#line 1628 "parser.tab.c"
    break;

  case 60: /* variable: STRING_LITERAL  */
#line 176 "parser.y"
                         { printf("REDUCE: variable -> STRING_LITERAL\n"); }
#line 1634 "parser.tab.c"
    break;

  case 61: /* variable: STRING_SINGLE_QUOTE  */
#line 177 "parser.y"
                              { printf("REDUCE: variable -> STRING_SINGLE_QUOTE\n"); }
#line 1640 "parser.tab.c"
    break;

  case 62: /* variable: template_literal  */
#line 178 "parser.y"
                           { printf("REDUCE: variable -> template_literal\n"); }
#line 1646 "parser.tab.c"
    break;

  case 63: /* template_literal: TEMPLATE_START template_body TEMPLATE_END  */
#line 183 "parser.y"
    { printf("REDUCE: template_literal -> `...`\n"); }
#line 1652 "parser.tab.c"
    break;

  case 64: /* template_body: %empty  */
#line 187 "parser.y"
    { /* O corpo pode ser vazio */ }
#line 1658 "parser.tab.c"
    break;

  case 65: /* template_body: template_body template_part  */
#line 189 "parser.y"
    { /* Constrói o corpo pedaço por pedaço */ }
#line 1664 "parser.tab.c"
    break;

  case 66: /* template_part: TEMPLATE_CHUNK  */
#line 192 "parser.y"
                              { printf("REDUCE: template_part -> TEMPLATE_CHUNK\n"); }
#line 1670 "parser.tab.c"
    break;

  case 67: /* template_part: TEMPLATE_EXPR_START expression RCURLY  */
#line 193 "parser.y"
                                            {printf("REDUCE: template_part -> ${expression}\n");
        go_to_template_state();}
#line 1677 "parser.tab.c"
    break;

  case 68: /* array_literal: LBRACKET argument_list_opt RBRACKET  */
#line 214 "parser.y"
    { printf("REDUCE: array_literal -> [ ... ]\n"); }
#line 1683 "parser.tab.c"
    break;


#line 1687 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 217 "parser.y"


int main (void){
    yydebug = 1;
    yyparse();
}

void yyerror(const char* error){
    printf("Error: %s on line %d\n", error, yylineno);
}
