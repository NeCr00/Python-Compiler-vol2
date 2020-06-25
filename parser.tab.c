/* A Bison parser, made by GNU Bison 3.6.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "parser.y"

#include <cstdio>
#include <iostream>
#include <string.h>
// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *s);


static const char* black   = "\033[0;30m";
static const char* red     = "\033[0;31m";
static const char* green   = "\033[0;32m";
static const char* yellow  = "\033[0;33m";
static const char* blue    = "\033[0;34m";
static const char* magenta = "\033[0;35m";
static const char* cyan    = "\033[0;36m";
static const char* white   = "\033[0;37m";
static const char* fg      = "\033[0;39m";

// --- variables ---

#define VARSIZE 255
#define VARNAMESIZE 255

typedef struct {
    char *name;
    double value;
} variable;

int var_used = 0;
variable var[VARSIZE];
double get_value(char *name);
int set_value(char *name, double value);

int it = 0;

#line 111 "parser.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    TOK_INDENT = 258,              /* TOK_INDENT  */
    TOK_DEDENT = 259,              /* TOK_DEDENT  */
    INTNUM = 260,                  /* INTNUM  */
    TRUE = 261,                    /* TRUE  */
    FALSE = 262,                   /* FALSE  */
    VAR = 263,                     /* VAR  */
    STRING = 264,                  /* STRING  */
    IF = 265,                      /* IF  */
    THEN = 266,                    /* THEN  */
    ELSE = 267,                    /* ELSE  */
    PRINT = 268,                   /* PRINT  */
    ASSIGN = 269,                  /* ASSIGN  */
    FROM = 270,                    /* FROM  */
    AS = 271,                      /* AS  */
    DOT = 272,                     /* DOT  */
    INIT = 273,                    /* INIT  */
    LAMBDA = 274,                  /* LAMBDA  */
    TOK_EQ = 275,                  /* TOK_EQ  */
    TOK_NE = 276,                  /* TOK_NE  */
    TOK_GE = 277,                  /* TOK_GE  */
    TOK_LE = 278,                  /* TOK_LE  */
    TOK_GT = 279,                  /* TOK_GT  */
    TOK_LT = 280,                  /* TOK_LT  */
    COMMA = 281,                   /* COMMA  */
    ELIF = 282,                    /* ELIF  */
    FOR = 283,                     /* FOR  */
    DEF = 284,                     /* DEF  */
    CLASS = 285,                   /* CLASS  */
    TOK_PLUS = 286,                /* TOK_PLUS  */
    TOK_MINUS = 287,               /* TOK_MINUS  */
    TOK_MUL = 288,                 /* TOK_MUL  */
    TOK_DIV = 289,                 /* TOK_DIV  */
    TOK_L_P = 290,                 /* TOK_L_P  */
    TOK_R_P = 291,                 /* TOK_R_P  */
    IN = 292,                      /* IN  */
    RANGE = 293,                   /* RANGE  */
    IMPORT = 294,                  /* IMPORT  */
    TOK_L_BRA = 295,               /* TOK_L_BRA  */
    TOK_R_BRA = 296                /* TOK_R_BRA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 42 "parser.y"

    int   int_value;
    char  *string;

#line 207 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_INDENT = 3,                 /* TOK_INDENT  */
  YYSYMBOL_TOK_DEDENT = 4,                 /* TOK_DEDENT  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_TRUE = 6,                       /* TRUE  */
  YYSYMBOL_FALSE = 7,                      /* FALSE  */
  YYSYMBOL_VAR = 8,                        /* VAR  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_THEN = 11,                      /* THEN  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_PRINT = 13,                     /* PRINT  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_FROM = 15,                      /* FROM  */
  YYSYMBOL_AS = 16,                        /* AS  */
  YYSYMBOL_DOT = 17,                       /* DOT  */
  YYSYMBOL_INIT = 18,                      /* INIT  */
  YYSYMBOL_LAMBDA = 19,                    /* LAMBDA  */
  YYSYMBOL_TOK_EQ = 20,                    /* TOK_EQ  */
  YYSYMBOL_TOK_NE = 21,                    /* TOK_NE  */
  YYSYMBOL_TOK_GE = 22,                    /* TOK_GE  */
  YYSYMBOL_TOK_LE = 23,                    /* TOK_LE  */
  YYSYMBOL_TOK_GT = 24,                    /* TOK_GT  */
  YYSYMBOL_TOK_LT = 25,                    /* TOK_LT  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_ELIF = 27,                      /* ELIF  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_DEF = 29,                       /* DEF  */
  YYSYMBOL_CLASS = 30,                     /* CLASS  */
  YYSYMBOL_TOK_PLUS = 31,                  /* TOK_PLUS  */
  YYSYMBOL_TOK_MINUS = 32,                 /* TOK_MINUS  */
  YYSYMBOL_TOK_MUL = 33,                   /* TOK_MUL  */
  YYSYMBOL_TOK_DIV = 34,                   /* TOK_DIV  */
  YYSYMBOL_TOK_L_P = 35,                   /* TOK_L_P  */
  YYSYMBOL_TOK_R_P = 36,                   /* TOK_R_P  */
  YYSYMBOL_IN = 37,                        /* IN  */
  YYSYMBOL_RANGE = 38,                     /* RANGE  */
  YYSYMBOL_IMPORT = 39,                    /* IMPORT  */
  YYSYMBOL_TOK_L_BRA = 40,                 /* TOK_L_BRA  */
  YYSYMBOL_TOK_R_BRA = 41,                 /* TOK_R_BRA  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_statements = 44,                /* statements  */
  YYSYMBOL_statement = 45,                 /* statement  */
  YYSYMBOL_print_stm = 46,                 /* print_stm  */
  YYSYMBOL_assign_stm = 47,                /* assign_stm  */
  YYSYMBOL_call = 48,                      /* call  */
  YYSYMBOL_target = 49,                    /* target  */
  YYSYMBOL_function_stmt = 50,             /* function_stmt  */
  YYSYMBOL_parameter_list = 51,            /* parameter_list  */
  YYSYMBOL_parameter = 52,                 /* parameter  */
  YYSYMBOL_function_name = 53,             /* function_name  */
  YYSYMBOL_classdef = 54,                  /* classdef  */
  YYSYMBOL_classname = 55,                 /* classname  */
  YYSYMBOL_import_stmt = 56,               /* import_stmt  */
  YYSYMBOL_module = 57,                    /* module  */
  YYSYMBOL_relative_module = 58,           /* relative_module  */
  YYSYMBOL_dots = 59,                      /* dots  */
  YYSYMBOL_modules = 60,                   /* modules  */
  YYSYMBOL_name = 61,                      /* name  */
  YYSYMBOL_if_stmt = 62,                   /* if_stmt  */
  YYSYMBOL_elif_stmt = 63,                 /* elif_stmt  */
  YYSYMBOL_for_stmt = 64,                  /* for_stmt  */
  YYSYMBOL_for_target_list = 65,           /* for_target_list  */
  YYSYMBOL_for_target = 66,                /* for_target  */
  YYSYMBOL_dict_display = 67,              /* dict_display  */
  YYSYMBOL_key_datum_list = 68,            /* key_datum_list  */
  YYSYMBOL_key_datums = 69,                /* key_datums  */
  YYSYMBOL_key_datum = 70,                 /* key_datum  */
  YYSYMBOL_expr_string = 71,               /* expr_string  */
  YYSYMBOL_lambda = 72,                    /* lambda  */
  YYSYMBOL_lam_parameters = 73,            /* lam_parameters  */
  YYSYMBOL_codeblock = 74,                 /* codeblock  */
  YYSYMBOL_expr_list = 75,                 /* expr_list  */
  YYSYMBOL_expr = 76,                      /* expr  */
  YYSYMBOL_term = 77,                      /* term  */
  YYSYMBOL_factor = 78,                    /* factor  */
  YYSYMBOL_cond = 79,                      /* cond  */
  YYSYMBOL_relative_var = 80,              /* relative_var  */
  YYSYMBOL_string = 81,                    /* string  */
  YYSYMBOL_indent = 82,                    /* indent  */
  YYSYMBOL_dedent = 83                     /* dedent  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    60,    63,    64,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    84,    85,    86,    90,
      91,    92,    93,    98,   100,   102,   104,   108,   109,   113,
     114,   117,   119,   120,   121,   124,   125,   128,   129,   132,
     136,   142,   143,   144,   145,   146,   147,   150,   151,   154,
     155,   156,   159,   160,   162,   163,   164,   165,   169,   173,
     174,   175,   179,   180,   183,   184,   188,   189,   190,   193,
     194,   198,   199,   202,   203,   204,   205,   208,   209,   212,
     215,   216,   219,   220,   224,   225,   226,   227,   228,   233,
     237,   238,   242,   243,   244,   248,   249,   250,   254,   255,
     256,   257,   258,   259,   260,   266,   267,   268,   269,   270,
     271,   272,   273,   280,   281,   284,   291,   299
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
  "\"end of file\"", "error", "\"invalid token\"", "TOK_INDENT",
  "TOK_DEDENT", "INTNUM", "TRUE", "FALSE", "VAR", "STRING", "IF", "THEN",
  "ELSE", "PRINT", "ASSIGN", "FROM", "AS", "DOT", "INIT", "LAMBDA",
  "TOK_EQ", "TOK_NE", "TOK_GE", "TOK_LE", "TOK_GT", "TOK_LT", "COMMA",
  "ELIF", "FOR", "DEF", "CLASS", "TOK_PLUS", "TOK_MINUS", "TOK_MUL",
  "TOK_DIV", "TOK_L_P", "TOK_R_P", "IN", "RANGE", "IMPORT", "TOK_L_BRA",
  "TOK_R_BRA", "$accept", "program", "statements", "statement",
  "print_stm", "assign_stm", "call", "target", "function_stmt",
  "parameter_list", "parameter", "function_name", "classdef", "classname",
  "import_stmt", "module", "relative_module", "dots", "modules", "name",
  "if_stmt", "elif_stmt", "for_stmt", "for_target_list", "for_target",
  "dict_display", "key_datum_list", "key_datums", "key_datum",
  "expr_string", "lambda", "lam_parameters", "codeblock", "expr_list",
  "expr", "term", "factor", "cond", "relative_var", "string", "indent",
  "dedent", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
#endif

#define YYPACT_NINF (-106)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-114)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     164,  -106,  -106,  -106,    -4,   204,    54,   120,    21,    11,
      48,     8,   226,     7,   113,    20,   164,  -106,  -106,  -106,
    -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,  -106,    -2,
      44,    78,  -106,    19,    76,   204,   264,    17,  -106,   179,
      -2,  -106,  -106,  -106,    88,    51,   144,  -106,    76,   226,
      38,    19,  -106,    11,    31,  -106,  -106,  -106,   107,  -106,
     135,   205,   154,    61,    32,  -106,   123,   140,   162,    44,
    -106,  -106,  -106,    34,   170,   190,   226,   226,   226,   226,
     226,   181,   247,   155,   226,   226,   226,   226,   226,   226,
     187,   165,   154,   192,  -106,    88,    44,   226,   194,    65,
      11,   200,   210,   187,  -106,   109,   154,   154,   154,   201,
    -106,   179,   202,   179,  -106,    10,  -106,  -106,    -2,  -106,
     164,  -106,  -106,    71,    44,    78,    78,  -106,  -106,  -106,
    -106,    44,    44,    44,    44,    44,    44,   186,  -106,  -106,
     213,    44,    76,    19,  -106,  -106,   185,    39,   111,   231,
      73,   230,    78,  -106,   154,  -106,   217,    87,   154,  -106,
     179,  -106,   216,   128,  -106,   204,    40,   154,   226,   187,
     187,   240,   238,   245,  -106,   201,   154,   159,  -106,  -106,
      91,  -106,  -106,   243,   244,   204,  -106,   103,  -106,  -106,
    -106,   230,   187,  -106,   114,   154,  -106,   187,   187,   246,
     248,  -106,  -106,  -106,  -106,   187,   187,  -106,  -106
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    98,   100,   101,   102,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     3,     5,     8,    14,
      13,     0,    12,    11,    10,     7,     9,   104,    15,     6,
      91,    92,    95,   103,   102,     0,   111,     0,   115,     0,
      16,    18,    58,    52,    49,     0,    51,    48,    85,     0,
       0,    86,    69,     0,     0,    66,    37,    38,     0,    40,
       0,     0,     0,    41,     0,    71,     0,    73,     0,    80,
      81,     1,     4,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    50,    82,     0,     0,     0,
      68,     0,    31,     0,    99,    56,     0,     0,     0,    43,
      72,    74,    75,     0,   116,     0,    22,    20,    19,    21,
       0,    28,    23,     0,    90,    93,    94,    96,    97,   114,
     112,   105,   106,   107,   108,   109,   110,    59,    17,    47,
      45,    83,    87,    88,    70,    67,     0,     0,    35,     0,
       0,    33,    34,    39,     0,    42,     0,    56,     0,    77,
      76,    79,     0,     0,    24,     0,    60,     0,     0,     0,
       0,     0,     0,     0,    57,    44,     0,    54,    78,    25,
       0,   117,    89,     0,     0,     0,    46,     0,    64,    30,
      35,    32,     0,    36,    57,     0,    26,     0,     0,     0,
       0,    29,    55,    62,    61,     0,     0,    63,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,   138,   -14,  -106,  -106,  -106,   189,  -106,  -106,
      89,  -106,  -106,  -106,  -106,    -8,  -106,  -106,   -60,   -81,
    -106,  -106,  -106,   211,   163,  -106,  -106,  -106,  -105,   152,
     203,  -106,   -82,    -3,    -5,   -55,   102,   -34,     4,    12,
    -106,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    21,    22,   150,
     151,    58,    23,    60,    24,    44,    45,    46,    64,    47,
      25,   166,    26,    54,    55,    27,    66,   112,    67,    68,
      28,    50,   117,    29,    30,    31,    32,    37,    33,    70,
     120,   182
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    83,    72,    40,   109,    63,   159,    61,   137,    69,
     -27,   139,    51,   -27,    73,    42,    59,    74,    41,    52,
      71,   153,   125,   126,    76,   155,   156,    74,    90,    48,
      82,   -27,    49,    62,    61,    75,    81,   114,    95,     1,
       2,     3,     4,    38,    96,   162,    53,   152,   107,    97,
     169,    91,   184,     8,   105,   178,    56,   100,   108,     1,
       2,     3,    34,    38,    98,    76,    57,   185,   101,    12,
     118,   124,   123,   174,    14,    77,    78,   106,    92,   131,
     132,   133,   134,   135,   136,   119,   186,   188,   189,    39,
      93,   100,   141,  -113,    14,   194,   175,    76,   147,   171,
     157,   144,   143,   176,    92,    92,    69,   164,    69,   172,
     201,    79,    80,   -54,   202,   203,   204,    76,     1,     2,
       3,    34,    38,   207,   208,   154,    92,   196,    42,    76,
     -55,   183,   181,     1,     2,     3,     4,    43,     5,   200,
     -55,     6,   102,     7,  -102,  -102,   103,     8,    12,    72,
     177,   199,    42,    14,    65,    69,     9,    10,    11,   180,
      36,    94,    42,    12,   110,   187,   111,    13,    14,     1,
       2,     3,     4,   113,     5,   195,    92,     6,   121,     7,
      36,   127,   128,     8,     1,     2,     3,    34,    38,   129,
     114,   130,     9,    10,    11,     1,     2,     3,    34,    12,
     140,   138,   142,    13,    14,     1,     2,     3,    34,     1,
       2,     3,    34,   165,    12,     1,     2,     3,   148,    14,
     168,     1,     2,     3,    34,    12,   122,   158,   160,   167,
      14,     1,     2,     3,    34,    12,    77,    78,   146,    35,
      14,   104,   170,    62,    14,    12,   149,   173,   190,   192,
      14,    12,   179,   193,   197,   198,    14,   205,   163,   206,
     191,    12,   115,   145,    99,   161,    14,    84,    85,    86,
      87,    88,    89,     0,     0,     0,   116,     0,    77,    78,
       0,     0,     0,   104,    84,    85,    86,    87,    88,    89,
       0,     0,     0,     0,     0,    77,    78
};

static const yytype_int16 yycheck[] =
{
       5,    35,    16,     6,    64,    13,   111,    12,    90,    14,
      14,    92,     8,    17,    14,     8,     8,    17,     6,     8,
       0,   103,    77,    78,    26,   106,   107,    17,    11,     8,
      35,    35,    11,    26,    39,    35,    17,     3,    46,     5,
       6,     7,     8,     9,    49,    35,    35,   102,    16,    11,
      11,    39,    12,    19,    62,   160,     8,    26,    26,     5,
       6,     7,     8,     9,    26,    26,    18,    27,    37,    35,
      73,    76,    75,   154,    40,    31,    32,    16,    17,    84,
      85,    86,    87,    88,    89,    73,   167,   169,   170,    35,
      39,    26,    97,    17,    40,   176,   156,    26,   101,    26,
     108,    36,    98,    16,    17,    17,   111,    36,   113,    36,
     192,    33,    34,    26,   195,   197,   198,    26,     5,     6,
       7,     8,     9,   205,   206,    16,    17,    36,     8,    26,
      16,   165,     4,     5,     6,     7,     8,    17,    10,    36,
      26,    13,    35,    15,    33,    34,    11,    19,    35,   163,
     158,   185,     8,    40,    41,   160,    28,    29,    30,   162,
     165,    17,     8,    35,    41,   168,    26,    39,    40,     5,
       6,     7,     8,    11,    10,    16,    17,    13,     8,    15,
     185,    79,    80,    19,     5,     6,     7,     8,     9,     8,
       3,    36,    28,    29,    30,     5,     6,     7,     8,    35,
       8,    36,     8,    39,    40,     5,     6,     7,     8,     5,
       6,     7,     8,    27,    35,     5,     6,     7,     8,    40,
      35,     5,     6,     7,     8,    35,    36,    26,    26,    16,
      40,     5,     6,     7,     8,    35,    31,    32,    38,    35,
      40,    36,    11,    26,    40,    35,    36,    17,     8,    11,
      40,    35,    36,     8,    11,    11,    40,    11,   120,    11,
     171,    35,    73,   100,    53,   113,    40,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    73,    -1,    31,    32,
      -1,    -1,    -1,    36,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,    10,    13,    15,    19,    28,
      29,    30,    35,    39,    40,    43,    44,    45,    46,    47,
      48,    49,    50,    54,    56,    62,    64,    67,    72,    75,
      76,    77,    78,    80,     8,    35,    76,    79,     9,    35,
      75,    81,     8,    17,    57,    58,    59,    61,     8,    11,
      73,    80,     8,    35,    65,    66,     8,    18,    53,     8,
      55,    76,    26,    57,    60,    41,    68,    70,    71,    76,
      81,     0,    45,    14,    17,    35,    26,    31,    32,    33,
      34,    17,    76,    79,    20,    21,    22,    23,    24,    25,
      11,    81,    17,    39,    17,    57,    76,    11,    26,    65,
      26,    37,    35,    11,    36,    57,    16,    16,    26,    60,
      41,    26,    69,    11,     3,    49,    72,    74,    75,    81,
      82,     8,    36,    75,    76,    77,    77,    78,    78,     8,
      36,    76,    76,    76,    76,    76,    76,    74,    36,    61,
       8,    76,     8,    80,    36,    66,    38,    75,     8,    36,
      51,    52,    77,    74,    16,    61,    61,    57,    26,    70,
      26,    71,    35,    44,    36,    27,    63,    16,    35,    11,
      11,    26,    36,    17,    61,    60,    16,    57,    70,    36,
      75,     4,    83,    79,    12,    27,    61,    75,    74,    74,
       8,    52,    11,     8,    61,    16,    36,    11,    11,    79,
      36,    74,    61,    74,    74,    11,    11,    74,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    51,    51,    51,    52,    52,    53,    53,    54,
      55,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    58,    59,    59,    60,    60,    60,    60,    61,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    68,    68,    69,    69,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    74,
      75,    75,    76,    76,    76,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    82,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     3,
       3,     3,     3,     3,     4,     5,     6,     1,     3,     7,
       6,     0,     3,     1,     1,     1,     3,     1,     1,     4,
       1,     2,     4,     3,     5,     4,     6,     3,     1,     1,
       2,     1,     1,     2,     3,     5,     2,     4,     1,     4,
       5,     8,     4,     5,     6,     9,     1,     3,     2,     1,
       3,     2,     3,     1,     2,     2,     3,     2,     3,     3,
       1,     1,     3,     4,     0,     1,     1,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     1,     3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
    goto yyexhaustedlab;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4:
#line 63 "parser.y"
                           { (yyval.int_value) = it = (yyvsp[0].int_value); }
#line 1554 "parser.tab.c"
    break;

  case 5:
#line 64 "parser.y"
                           { (yyval.int_value) = it = (yyvsp[0].int_value); }
#line 1560 "parser.tab.c"
    break;

  case 6:
#line 69 "parser.y"
                           { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1566 "parser.tab.c"
    break;

  case 9:
#line 72 "parser.y"
                            { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1572 "parser.tab.c"
    break;

  case 16:
#line 84 "parser.y"
                              { printf(">> %d\n", (yyvsp[0].int_value)); }
#line 1578 "parser.tab.c"
    break;

  case 17:
#line 85 "parser.y"
                                           { printf(">> %s\n", (yyvsp[-1].string)); }
#line 1584 "parser.tab.c"
    break;

  case 18:
#line 86 "parser.y"
                             { printf(">> %s\n", (yyvsp[0].string)); }
#line 1590 "parser.tab.c"
    break;

  case 19:
#line 90 "parser.y"
                                  { set_value((yyvsp[-2].string), (yyvsp[0].int_value)); (yyval.int_value) = (yyvsp[0].int_value); }
#line 1596 "parser.tab.c"
    break;

  case 20:
#line 91 "parser.y"
                               { set_value((yyvsp[-2].string), (yyvsp[0].int_value)); (yyval.int_value) = (yyvsp[0].int_value); }
#line 1602 "parser.tab.c"
    break;

  case 27:
#line 108 "parser.y"
                           { (yyval.string) = (yyvsp[0].string); }
#line 1608 "parser.tab.c"
    break;

  case 28:
#line 109 "parser.y"
                           { (yyval.string) = (yyvsp[-2].string); }
#line 1614 "parser.tab.c"
    break;

  case 64:
#line 183 "parser.y"
                                                        { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1620 "parser.tab.c"
    break;

  case 65:
#line 184 "parser.y"
                                                                                { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1626 "parser.tab.c"
    break;

  case 89:
#line 233 "parser.y"
                               { (yyval.int_value) = (yyvsp[-1].int_value); }
#line 1632 "parser.tab.c"
    break;

  case 90:
#line 237 "parser.y"
                             { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1638 "parser.tab.c"
    break;

  case 91:
#line 238 "parser.y"
                             { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1644 "parser.tab.c"
    break;

  case 92:
#line 242 "parser.y"
                            { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1650 "parser.tab.c"
    break;

  case 93:
#line 243 "parser.y"
                            { (yyval.int_value) = (yyvsp[-2].int_value) + (yyvsp[0].int_value); }
#line 1656 "parser.tab.c"
    break;

  case 94:
#line 244 "parser.y"
                            { (yyval.int_value) = (yyvsp[-2].int_value) - (yyvsp[0].int_value); }
#line 1662 "parser.tab.c"
    break;

  case 95:
#line 248 "parser.y"
                            { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1668 "parser.tab.c"
    break;

  case 96:
#line 249 "parser.y"
                            { (yyval.int_value) = (yyvsp[-2].int_value) * (yyvsp[0].int_value); }
#line 1674 "parser.tab.c"
    break;

  case 97:
#line 250 "parser.y"
                            { (yyval.int_value) = (yyvsp[-2].int_value) / (yyvsp[0].int_value); }
#line 1680 "parser.tab.c"
    break;

  case 98:
#line 254 "parser.y"
                            { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1686 "parser.tab.c"
    break;

  case 99:
#line 255 "parser.y"
                            { (yyval.int_value) = (yyvsp[-1].int_value); }
#line 1692 "parser.tab.c"
    break;

  case 100:
#line 256 "parser.y"
                            { (yyval.int_value) = 1; }
#line 1698 "parser.tab.c"
    break;

  case 101:
#line 257 "parser.y"
                            { (yyval.int_value) = 0; }
#line 1704 "parser.tab.c"
    break;

  case 102:
#line 258 "parser.y"
                            { (yyval.int_value) = get_value((yyvsp[0].string)); }
#line 1710 "parser.tab.c"
    break;

  case 105:
#line 266 "parser.y"
                              { (yyval.int_value) = ((yyvsp[-2].int_value) == (yyvsp[0].int_value)); }
#line 1716 "parser.tab.c"
    break;

  case 106:
#line 267 "parser.y"
                              { (yyval.int_value) = ((yyvsp[-2].int_value) != (yyvsp[0].int_value)); }
#line 1722 "parser.tab.c"
    break;

  case 107:
#line 268 "parser.y"
                              { (yyval.int_value) = ((yyvsp[-2].int_value) >= (yyvsp[0].int_value)); }
#line 1728 "parser.tab.c"
    break;

  case 108:
#line 269 "parser.y"
                              { (yyval.int_value) = ((yyvsp[-2].int_value) <= (yyvsp[0].int_value)); }
#line 1734 "parser.tab.c"
    break;

  case 109:
#line 270 "parser.y"
                              { (yyval.int_value) = ((yyvsp[-2].int_value) > (yyvsp[0].int_value)); }
#line 1740 "parser.tab.c"
    break;

  case 110:
#line 271 "parser.y"
                              { (yyval.int_value) = ((yyvsp[-2].int_value) < (yyvsp[0].int_value)); }
#line 1746 "parser.tab.c"
    break;

  case 111:
#line 272 "parser.y"
                              { (yyval.int_value) = (yyvsp[0].int_value); }
#line 1752 "parser.tab.c"
    break;

  case 112:
#line 273 "parser.y"
                              { (yyval.int_value) = (yyvsp[-1].int_value); }
#line 1758 "parser.tab.c"
    break;

  case 115:
#line 284 "parser.y"
            { (yyval.string) = (yyvsp[0].string); }
#line 1764 "parser.tab.c"
    break;

  case 116:
#line 292 "parser.y"
        {
            FILE *debug = fopen("/dev/null", "w");
            fprintf(debug, "%sindent%s(%d:%d-%d)\n",
                green, fg, (yylsp[0]).first_line, (yylsp[0]).first_column, (yylsp[0]).last_column);
        }
#line 1774 "parser.tab.c"
    break;

  case 117:
#line 300 "parser.y"
        {
            FILE *debug = fopen("/dev/null", "w");
            fprintf(debug, "%sdedent%s(%d:%d-%d)\n",
                green, fg, (yylsp[0]).first_line, (yylsp[0]).first_column, (yylsp[0]).last_column);
        }
#line 1784 "parser.tab.c"
    break;


#line 1788 "parser.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 307 "parser.y"


const char* g_current_filename = "stdin";

int main(int argc, char *argv[])
{
    yyin = stdin;
#if YYDEBUG
    yydebug = 1;
#endif

    if (argc == 2) {
        yyin = fopen(argv[1], "r");
        g_current_filename = argv[1];
        if (!yyin) {
            perror(argv[1]);
            return 1;
        }
    }

    do {
        yyparse();
    } while (!feof(yyin));
}

void yyerror(const char *s)
{
    fprintf(stderr, "%s:%d:%d-%d: syntax error: %s\n",
        g_current_filename, yylloc.first_line,
        yylloc.first_column, yylloc.last_column, s);
    exit(-1);
}

int search_variable(char *name)
{
    for (int i = 0; i < var_used; i++) {
        if (!strcmp(var[i].name, name)) { return i; }
    }
    return -1;
}

int set_value(char *name, double value)
{
    int i = search_variable(name);
    if (i == -1) {
        var[var_used].name = strdup(name);
        var[var_used].value = value;
        var_used++;
    } else {
        var[i].value = value;
    }
    return 0;
}

double get_value(char *name)
{
    int i = search_variable(name);
    if (i != -1) { return var[i].value; }
    fprintf(stderr, "[-] %s is not definded\n", name);
    return 0.0;
}
