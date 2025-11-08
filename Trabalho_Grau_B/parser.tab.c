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
  YYSYMBOL_object_literal = 72,            /* object_literal  */
  YYSYMBOL_property_list_opt = 73,         /* property_list_opt  */
  YYSYMBOL_property_list = 74,             /* property_list  */
  YYSYMBOL_property = 75,                  /* property  */
  YYSYMBOL_array_literal = 76              /* array_literal  */
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
#define YYLAST   513

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

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
       0,    82,    82,    85,    86,    90,    91,    94,    96,    99,
     103,   104,   108,   109,   112,   113,   114,   115,   116,   117,
     118,   121,   122,   124,   126,   128,   130,   132,   133,   135,
     138,   139,   140,   141,   142,   144,   145,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   170,   171,   174,   175,
     176,   177,   178,   181,   185,   187,   191,   192,   197,   201,
     202,   205,   206,   209,   210,   213
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
  "template_part", "object_literal", "property_list_opt", "property_list",
  "property", "array_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -89,     7,   208,   -89,   -89,   -89,    11,    17,    13,    17,
     -89,    17,    -6,   -89,   -89,   -89,    17,   -13,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,    16,   -89,   -89,   -89,
     -89,   -89,   384,     4,   -89,   -89,   -89,   -89,    17,    27,
      41,    13,     3,   -89,    38,   -89,    84,    34,   135,    21,
      56,    53,    50,   -89,    54,   384,   279,    17,     6,    69,
     -89,     4,    -3,   -89,    17,    63,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    67,    85,    17,    55,    17,   -89,   -89,    17,    17,
     -89,    13,   -89,   -89,   305,   -89,   -89,    17,   -89,   -89,
      86,   -89,   249,   249,     6,     6,   462,   384,   462,   480,
     480,   480,   480,     6,   436,   410,   331,   -89,    88,    87,
      17,   384,   384,   384,   -89,   251,   358,   -89,   -89,   -89,
      90,    15,    83,   -89,   150,   -89,   251,   -89,   193,   -89,
     -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,    59,    58,     0,    10,     3,    10,
      20,     0,     0,    56,    50,    51,     0,     0,    60,    61,
      64,     4,     5,    53,     6,    19,    48,    16,    17,    14,
      15,    18,     0,    36,    49,    62,    54,    55,    10,     0,
       0,    69,     0,     9,    11,    48,    12,    36,     0,     0,
       0,     0,    70,    71,     0,    12,     0,     0,    46,    56,
      22,     0,     0,    24,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,    47,    29,     0,     0,
      68,     0,    75,    25,     0,    21,    63,     0,    66,    65,
       0,    35,    30,    31,    32,    33,    37,    38,    39,    40,
      41,    42,    43,    34,    44,    45,     0,    57,     0,     0,
       0,    13,    73,    74,    72,     0,     0,    23,    26,     3,
       0,    52,    27,    67,     0,     3,     0,     8,     0,    28,
       7
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,    -4,   -89,   -89,   -89,   -33,    93,   -89,   -88,
     -89,    -1,   -89,   -89,   101,   -89,   -89,     2,    -2,    -5,
     -89,   -89,   -89,   -89,   -89,   -89,    12,   -89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    21,    22,    23,    42,    43,    44,    24,
      25,    45,    27,    28,    29,    30,    31,    32,    47,    34,
      35,    62,    99,    36,    51,    52,    53,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      33,    26,    57,    50,    48,    82,    49,     3,    59,    46,
      80,    55,    84,    56,    64,    61,     4,     5,    58,    38,
       4,     5,    40,    64,    81,     7,    65,    41,    88,     9,
      63,   100,    39,    71,    13,    83,    50,   132,    13,    49,
      55,    81,    71,    96,    97,    98,    33,    26,   139,    38,
     119,    14,    15,    85,    81,    16,    18,    19,    20,    94,
      18,    19,    20,    89,    90,    91,    55,    92,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    95,   101,    55,    50,   121,   117,    49,
     122,   123,    64,    86,   118,   127,   130,   120,   129,   126,
     135,   136,    54,   124,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    60,     0,
      78,    79,   131,    33,    26,   134,     0,     0,     0,     0,
       0,   138,    33,    26,    33,    26,    33,    26,     4,     5,
       6,     0,     0,     7,     0,     8,    87,     9,     0,    10,
       0,    11,    12,     4,     5,     6,    13,     0,     7,     0,
       8,   137,     9,     0,    10,     0,    11,    12,     0,    14,
      15,    13,     0,    16,    17,     0,     0,     0,    18,    19,
      20,     0,     0,     0,    14,    15,     0,     0,    16,    17,
       0,     0,     0,    18,    19,    20,     4,     5,     6,     0,
       0,     7,     0,     8,   140,     9,     0,    10,     0,    11,
      12,     4,     5,     6,    13,     0,     7,     0,     8,     0,
       9,     0,    10,     0,    11,    12,     0,    14,    15,    13,
       0,    16,    17,     0,     0,     0,    18,    19,    20,     0,
       0,     0,    14,    15,     0,     0,    16,    17,     0,     0,
       0,    18,    19,    20,     4,     5,    40,    64,     0,     7,
       0,     8,     0,     9,     0,    10,     0,    11,    12,    65,
       0,     0,    13,    68,    69,     0,    71,     0,     0,     0,
       0,     0,    77,     0,     0,    14,    15,    64,     0,    16,
      17,     0,     0,    93,    18,    19,    20,     0,     0,    65,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    64,   125,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    64,
       0,    78,    79,     0,     0,   128,     0,     0,     0,     0,
       0,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    64,    78,    79,   133,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    64,     0,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    64,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    64,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,    66,    67,    68,    69,    64,    71,
       0,    73,    74,    75,    76,    77,     0,     0,     0,     0,
      65,     0,    66,    67,    68,    69,     0,    71,     0,     0,
       0,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
       2,     2,     8,     8,     8,    38,     8,     0,    21,     7,
       6,     9,     9,    11,     8,    17,     3,     4,    16,     8,
       3,     4,     5,     8,    20,     8,    20,    10,     7,    12,
      14,    64,    21,    27,    21,     8,    41,   125,    21,    41,
      38,    20,    27,    46,    47,    48,    48,    48,   136,     8,
      83,    34,    35,    15,    20,    38,    43,    44,    45,    57,
      43,    44,    45,     7,    11,    15,    64,    13,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    14,    21,    83,    91,    85,    21,    91,
      88,    89,     8,     9,     9,     9,     9,    42,    10,    97,
      10,    18,     9,    91,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    17,    -1,
      36,    37,   120,   125,   125,   129,    -1,    -1,    -1,    -1,
      -1,   135,   134,   134,   136,   136,   138,   138,     3,     4,
       5,    -1,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      -1,    16,    17,     3,     4,     5,    21,    -1,     8,    -1,
      10,    11,    12,    -1,    14,    -1,    16,    17,    -1,    34,
      35,    21,    -1,    38,    39,    -1,    -1,    -1,    43,    44,
      45,    -1,    -1,    -1,    34,    35,    -1,    -1,    38,    39,
      -1,    -1,    -1,    43,    44,    45,     3,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
      17,     3,     4,     5,    21,    -1,     8,    -1,    10,    -1,
      12,    -1,    14,    -1,    16,    17,    -1,    34,    35,    21,
      -1,    38,    39,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    -1,    34,    35,    -1,    -1,    38,    39,    -1,    -1,
      -1,    43,    44,    45,     3,     4,     5,     8,    -1,     8,
      -1,    10,    -1,    12,    -1,    14,    -1,    16,    17,    20,
      -1,    -1,    21,    24,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    34,    35,     8,    -1,    38,
      39,    -1,    -1,    14,    43,    44,    45,    -1,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     8,     9,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     8,
      -1,    36,    37,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,     8,    36,    37,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     8,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     8,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     8,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    23,    24,    25,     8,    27,
      -1,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      20,    -1,    22,    23,    24,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     0,     3,     4,     5,     8,    10,    12,
      14,    16,    17,    21,    34,    35,    38,    39,    43,    44,
      45,    52,    53,    54,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    72,    76,     8,    21,
       5,    10,    55,    56,    57,    60,    66,    67,    51,    67,
      68,    73,    74,    75,    56,    66,    66,     8,    66,    21,
      63,    67,    70,    14,     8,    20,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    36,    37,
       6,    20,    55,     8,     9,    15,     9,    11,     7,     7,
      11,    15,    13,    14,    66,    14,    46,    47,    48,    71,
      55,    21,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    21,     9,    55,
      42,    66,    66,    66,    75,     9,    66,     9,    14,    10,
       9,    66,    58,    11,    51,    10,    18,    11,    51,    58,
      11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    54,    55,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    60,    61,    62,    63,    64,    64,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    69,    70,    70,    71,    71,    72,    73,
      73,    74,    74,    75,    75,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     8,     7,     1,
       0,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     4,     2,     3,     4,     5,     7,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     1,     1,
       1,     1,     5,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     0,     2,     1,     3,     3,     0,
       1,     1,     3,     3,     3,     3
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
#line 94 "parser.y"
                                                                       { printf("REDUCE: function -> FUNC IDENT LPAR arguments RPAR LCURLY statement_list RCURLY\n"); }
#line 1319 "parser.tab.c"
    break;

  case 8: /* function_expression: FUNC LPAR arguments RPAR LCURLY statement_list RCURLY  */
#line 96 "parser.y"
                                                                           { printf("REDUCE: function_expression -> (anonymous)\n"); }
#line 1325 "parser.tab.c"
    break;

  case 9: /* arguments: argument_list_opt  */
#line 99 "parser.y"
                             { printf("REDUCE: arguments -> argument_list_opt\n"); }
#line 1331 "parser.tab.c"
    break;

  case 10: /* argument_list_opt: %empty  */
#line 103 "parser.y"
                          { printf("REDUCE: argument_list_opt -> empty\n"); }
#line 1337 "parser.tab.c"
    break;

  case 11: /* argument_list_opt: argument_list  */
#line 104 "parser.y"
                                 { printf("REDUCE: argument_list_opt -> argument_list\n"); }
#line 1343 "parser.tab.c"
    break;

  case 12: /* argument_list: expression  */
#line 108 "parser.y"
                          { printf("REDUCE: argument_list -> expression\n"); }
#line 1349 "parser.tab.c"
    break;

  case 13: /* argument_list: argument_list COMMA expression  */
#line 109 "parser.y"
                                              { printf("REDUCE: argument_list -> argument_list COMMA expression\n"); }
#line 1355 "parser.tab.c"
    break;

  case 14: /* command: assignment  */
#line 112 "parser.y"
                         { printf("REDUCE: command -> assignment\n"); }
#line 1361 "parser.tab.c"
    break;

  case 15: /* command: conditional  */
#line 113 "parser.y"
                          { printf("REDUCE: command -> conditional\n"); }
#line 1367 "parser.tab.c"
    break;

  case 16: /* command: method_call  */
#line 114 "parser.y"
                          { printf("REDUCE: command -> method_call\n"); }
#line 1373 "parser.tab.c"
    break;

  case 17: /* command: returnStmt  */
#line 115 "parser.y"
                         { printf("REDUCE: command -> returnStmt\n"); }
#line 1379 "parser.tab.c"
    break;

  case 18: /* command: block  */
#line 116 "parser.y"
                    { printf("REDUCE: command -> block\n"); }
#line 1385 "parser.tab.c"
    break;

  case 19: /* command: variableDeclaration  */
#line 117 "parser.y"
                                  { printf("REDUCE: command -> variableDeclaration\n"); }
#line 1391 "parser.tab.c"
    break;

  case 20: /* command: SEMI  */
#line 118 "parser.y"
                   { printf("REDUCE: command -> SEMI\n"); }
#line 1397 "parser.tab.c"
    break;

  case 21: /* variableDeclaration: TYPE IDENT SEMI  */
#line 121 "parser.y"
                                      { printf("REDUCE: variableDeclaration -> TYPE IDENT SEMI\n"); }
#line 1403 "parser.tab.c"
    break;

  case 22: /* variableDeclaration: TYPE assignment  */
#line 122 "parser.y"
                                      { printf("REDUCE: variableDeclaration -> TYPE assignment\n"); }
#line 1409 "parser.tab.c"
    break;

  case 23: /* method_call_expr: expression LPAR arguments RPAR  */
#line 124 "parser.y"
                                                 { printf("REDUCE: method_call_expr -> expression LPAR arguments RPAR\n"); }
#line 1415 "parser.tab.c"
    break;

  case 24: /* method_call: method_call_expr SEMI  */
#line 126 "parser.y"
                                   { printf("REDUCE: method_call -> method_call_expr SEMI\n"); }
#line 1421 "parser.tab.c"
    break;

  case 25: /* returnStmt: RETURN expression SEMI  */
#line 128 "parser.y"
                                     {printf("REDUCE: returnStmt -> RETURN expression SEMI\n");}
#line 1427 "parser.tab.c"
    break;

  case 26: /* assignment: lvalue ASSIGN expression SEMI  */
#line 130 "parser.y"
                                            { printf("REDUCE: assignment -> expression ASSIGN expression SEMI\n"); }
#line 1433 "parser.tab.c"
    break;

  case 27: /* conditional: IF LPAR expression RPAR command  */
#line 132 "parser.y"
                                              { printf("REDUCE: conditional -> IF LPAR expression RPAR command\n"); }
#line 1439 "parser.tab.c"
    break;

  case 28: /* conditional: IF LPAR expression RPAR command ELSE command  */
#line 133 "parser.y"
                                                           { printf("REDUCE: conditional -> IF LPAR expression RPAR command ELSE command\n"); }
#line 1445 "parser.tab.c"
    break;

  case 29: /* block: LCURLY statement_list RCURLY  */
#line 135 "parser.y"
                                           { printf("REDUCE: block -> LCURLY statement_list RCURLY\n"); }
#line 1451 "parser.tab.c"
    break;

  case 30: /* expression: expression PLUS expression  */
#line 138 "parser.y"
                                         { printf("REDUCE: expression -> expression PLUS expression\n"); }
#line 1457 "parser.tab.c"
    break;

  case 31: /* expression: expression MINUS expression  */
#line 139 "parser.y"
                                          { printf("REDUCE: expression -> expression MINUS expression\n"); }
#line 1463 "parser.tab.c"
    break;

  case 32: /* expression: expression MULT expression  */
#line 140 "parser.y"
                                         { printf("REDUCE: expression -> expression MULT expression\n"); }
#line 1469 "parser.tab.c"
    break;

  case 33: /* expression: expression DIV expression  */
#line 141 "parser.y"
                                        { printf("REDUCE: expression -> expression DIV expression\n"); }
#line 1475 "parser.tab.c"
    break;

  case 34: /* expression: expression REST expression  */
#line 142 "parser.y"
                                         { printf("REDUCE: expression -> expression REST expression\n"); }
#line 1481 "parser.tab.c"
    break;

  case 35: /* expression: expression POINT IDENT  */
#line 144 "parser.y"
                                     { printf("REDUCE: expression -> expression POINT IDENT\n"); }
#line 1487 "parser.tab.c"
    break;

  case 36: /* expression: lvalue  */
#line 145 "parser.y"
                     { printf("REDUCE: expression -> expression POINT IDENT\n"); }
#line 1493 "parser.tab.c"
    break;

  case 37: /* expression: expression EQUAL expression  */
#line 148 "parser.y"
                                          { printf("REDUCE: expression -> expression EQUAL expression\n"); }
#line 1499 "parser.tab.c"
    break;

  case 38: /* expression: expression TEQUAL expression  */
#line 149 "parser.y"
                                           { printf("REDUCE: expression -> expression TEQUAL expression\n"); }
#line 1505 "parser.tab.c"
    break;

  case 39: /* expression: expression DIFF expression  */
#line 150 "parser.y"
                                         { printf("REDUCE: expression -> expression DIFF expression\n"); }
#line 1511 "parser.tab.c"
    break;

  case 40: /* expression: expression LESS expression  */
#line 151 "parser.y"
                                         { printf("REDUCE: expression -> expression LESS expression\n"); }
#line 1517 "parser.tab.c"
    break;

  case 41: /* expression: expression MORE expression  */
#line 152 "parser.y"
                                         { printf("REDUCE: expression -> expression MORE expression\n"); }
#line 1523 "parser.tab.c"
    break;

  case 42: /* expression: expression LEQ expression  */
#line 153 "parser.y"
                                        { printf("REDUCE: expression -> expression LEQ expression\n"); }
#line 1529 "parser.tab.c"
    break;

  case 43: /* expression: expression MEQ expression  */
#line 154 "parser.y"
                                        { printf("REDUCE: expression -> expression MEQ expression\n"); }
#line 1535 "parser.tab.c"
    break;

  case 44: /* expression: expression AND expression  */
#line 155 "parser.y"
                                        { printf("REDUCE: expression -> expression AND expression\n"); }
#line 1541 "parser.tab.c"
    break;

  case 45: /* expression: expression OR expression  */
#line 156 "parser.y"
                                       { printf("REDUCE: expression -> expression OR expression\n"); }
#line 1547 "parser.tab.c"
    break;

  case 46: /* expression: NOT expression  */
#line 157 "parser.y"
                             { printf("REDUCE: expression -> NOT expression\n"); }
#line 1553 "parser.tab.c"
    break;

  case 47: /* expression: LPAR expression RPAR  */
#line 159 "parser.y"
                                   { printf("REDUCE: expression -> LPAR expression RPAR\n"); }
#line 1559 "parser.tab.c"
    break;

  case 48: /* expression: method_call_expr  */
#line 160 "parser.y"
                               { printf("REDUCE: expression -> method_call_expr\n"); }
#line 1565 "parser.tab.c"
    break;

  case 49: /* expression: variable  */
#line 161 "parser.y"
                       { printf("REDUCE: expression -> variable\n"); }
#line 1571 "parser.tab.c"
    break;

  case 50: /* expression: TRUE  */
#line 162 "parser.y"
                   { printf("REDUCE: expression -> TRUE\n"); }
#line 1577 "parser.tab.c"
    break;

  case 51: /* expression: FALSE  */
#line 163 "parser.y"
                    { printf("REDUCE: expression -> FALSE\n"); }
#line 1583 "parser.tab.c"
    break;

  case 52: /* expression: LPAR arguments RPAR ARROW expression  */
#line 164 "parser.y"
                                                   { printf("REDUCE: expression -> LPAR arguments RPAR ARROW expression\n"); }
#line 1589 "parser.tab.c"
    break;

  case 53: /* expression: function_expression  */
#line 165 "parser.y"
                                  { printf("REDUCE: expression -> function_expression\n"); }
#line 1595 "parser.tab.c"
    break;

  case 54: /* expression: object_literal  */
#line 166 "parser.y"
                             { printf("REDUCE: expression -> object_literal\n"); }
#line 1601 "parser.tab.c"
    break;

  case 55: /* expression: array_literal  */
#line 167 "parser.y"
                            { printf("REDUCE: expression -> array_literal\n"); }
#line 1607 "parser.tab.c"
    break;

  case 56: /* lvalue: IDENT  */
#line 170 "parser.y"
              { printf("REDUCE: lvalue -> IDENT\n"); }
#line 1613 "parser.tab.c"
    break;

  case 57: /* lvalue: lvalue POINT IDENT  */
#line 171 "parser.y"
                           { printf("REDUCE: lvalue -> expression POINT IDENT\n"); }
#line 1619 "parser.tab.c"
    break;

  case 63: /* template_literal: TEMPLATE_START template_body TEMPLATE_END  */
#line 182 "parser.y"
    { printf("REDUCE: template_literal -> `...`\n"); }
#line 1625 "parser.tab.c"
    break;

  case 64: /* template_body: %empty  */
#line 186 "parser.y"
    { /* O corpo pode ser vazio */ }
#line 1631 "parser.tab.c"
    break;

  case 65: /* template_body: template_body template_part  */
#line 188 "parser.y"
    { /* Constrói o corpo pedaço por pedaço */ }
#line 1637 "parser.tab.c"
    break;

  case 66: /* template_part: TEMPLATE_CHUNK  */
#line 191 "parser.y"
                              { printf("REDUCE: template_part -> TEMPLATE_CHUNK\n"); }
#line 1643 "parser.tab.c"
    break;

  case 67: /* template_part: TEMPLATE_EXPR_START expression RCURLY  */
#line 192 "parser.y"
                                            {printf("REDUCE: template_part -> ${expression}\n");
        go_to_template_state();}
#line 1650 "parser.tab.c"
    break;

  case 68: /* object_literal: LCURLY property_list_opt RCURLY  */
#line 198 "parser.y"
    { printf("REDUCE: object_literal -> { ... }\n"); }
#line 1656 "parser.tab.c"
    break;

  case 73: /* property: lvalue COLON expression  */
#line 209 "parser.y"
                                  { printf("REDUCE: property -> key : value\n"); }
#line 1662 "parser.tab.c"
    break;

  case 74: /* property: variable COLON expression  */
#line 210 "parser.y"
                                    { printf("REDUCE: property -> key : value\n"); }
#line 1668 "parser.tab.c"
    break;

  case 75: /* array_literal: LBRACKET argument_list_opt RBRACKET  */
#line 214 "parser.y"
    { printf("REDUCE: array_literal -> [ ... ]\n"); }
#line 1674 "parser.tab.c"
    break;


#line 1678 "parser.tab.c"

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
