/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sym.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "header.c"
	FILE *yyin;
	
	#define YYSTYPE YACC
	int yylex();
	char* type;
	int err = 0;
	FILE* fp;
	
	int scope = 0;
	

	AST* ast;
	TREE* nptr=NULL;

	TREE* newnode(char*,TREE*,TREE*,TREE*,TREE*);
	TREE* newleaf(char*,char*);
	void display(TREE*);
	void yyerror(char* s);
	void printBT(char* prefix, TREE* node, int isLeft);
	

#line 93 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_CLASS = 258,
    T_PUBLIC = 259,
    T_PRIVATE = 260,
    T_STATIC = 261,
    T_FINAL = 262,
    T_VOID = 263,
    T_INT = 264,
    T_CHAR = 265,
    T_DOUBLE = 266,
    T_IF = 267,
    T_ELSE = 268,
    T_NEW = 269,
    T_INC = 270,
    T_DEC = 271,
    T_LOGOR = 272,
    T_LOGAND = 273,
    T_OR = 274,
    T_AND = 275,
    T_EQ = 276,
    T_NEQ = 277,
    T_GTEQ = 278,
    T_LTEQ = 279,
    T_ADD = 280,
    T_SUB = 281,
    T_MUL = 282,
    T_DIV = 283,
    T_GT = 284,
    T_LT = 285,
    T_XOR = 286,
    T_MOD = 287,
    T_LS = 288,
    T_RS = 289,
    T_NUM = 290,
    T_ID = 291,
    T_STRING = 292,
    T_ARGS = 293,
    T_PRINT = 294,
    T_FOR = 295,
    T_MAIN = 296,
    T_ASSGN = 297,
    T_MULASSGN = 298,
    T_DIVASSGN = 299,
    T_MODASSGN = 300,
    T_ADDASSGN = 301,
    T_SUBASSGN = 302,
    T_ANDASSGN = 303,
    T_XORASSGN = 304,
    T_ORASSGN = 305
  };
#endif
/* Tokens.  */
#define T_CLASS 258
#define T_PUBLIC 259
#define T_PRIVATE 260
#define T_STATIC 261
#define T_FINAL 262
#define T_VOID 263
#define T_INT 264
#define T_CHAR 265
#define T_DOUBLE 266
#define T_IF 267
#define T_ELSE 268
#define T_NEW 269
#define T_INC 270
#define T_DEC 271
#define T_LOGOR 272
#define T_LOGAND 273
#define T_OR 274
#define T_AND 275
#define T_EQ 276
#define T_NEQ 277
#define T_GTEQ 278
#define T_LTEQ 279
#define T_ADD 280
#define T_SUB 281
#define T_MUL 282
#define T_DIV 283
#define T_GT 284
#define T_LT 285
#define T_XOR 286
#define T_MOD 287
#define T_LS 288
#define T_RS 289
#define T_NUM 290
#define T_ID 291
#define T_STRING 292
#define T_ARGS 293
#define T_PRINT 294
#define T_FOR 295
#define T_MAIN 296
#define T_ASSGN 297
#define T_MULASSGN 298
#define T_DIVASSGN 299
#define T_MODASSGN 300
#define T_ADDASSGN 301
#define T_SUBASSGN 302
#define T_ANDASSGN 303
#define T_XORASSGN 304
#define T_ORASSGN 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 244 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   235

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    56,     2,     2,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    31,    33,    35,    36,    38,    39,    41,
      42,    43,    44,    45,    46,    48,    49,    51,    52,    54,
      56,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      68,    69,    71,    72,    73,    74,    75,    78,    79,    84,
      85,    86,    88,    90,    91,    93,    94,    96,    97,    99,
     100,   102,   104,   105,   106,   108,   109,   111,   113,   114,
     115,   116,   117,   119,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   131,   132,   134,   135,   137,   138,   139,
     141,   142,   143,   144,   145,   147,   148,   149,   151,   152,
     153,   154,   156,   157,   158
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CLASS", "T_PUBLIC", "T_PRIVATE",
  "T_STATIC", "T_FINAL", "T_VOID", "T_INT", "T_CHAR", "T_DOUBLE", "T_IF",
  "T_ELSE", "T_NEW", "T_INC", "T_DEC", "T_LOGOR", "T_LOGAND", "T_OR",
  "T_AND", "T_EQ", "T_NEQ", "T_GTEQ", "T_LTEQ", "T_ADD", "T_SUB", "T_MUL",
  "T_DIV", "T_GT", "T_LT", "T_XOR", "T_MOD", "T_LS", "T_RS", "T_NUM",
  "T_ID", "T_STRING", "T_ARGS", "T_PRINT", "T_FOR", "T_MAIN", "T_ASSGN",
  "T_MULASSGN", "T_DIVASSGN", "T_MODASSGN", "T_ADDASSGN", "T_SUBASSGN",
  "T_ANDASSGN", "T_XORASSGN", "T_ORASSGN", "'{'", "'}'", "'('", "'['",
  "']'", "')'", "';'", "','", "$accept", "START", "Method_declaration",
  "MODIFIER", "W1", "W2", "S", "ASSGN", "DECLR", "IF", "ELSE", "FOR",
  "INIT", "UNREXPR", "Variable_declaration", "X", "Assignment1",
  "Array_declaration", "B", "BB", "BNUM", "Array_initialisation", "K", "V",
  "R", "Type", "Assignment", "Assignment_operator", "LOGICALOREXPR",
  "LOGICALANDEXPR", "EQUALITYEXPR", "RELEXPR", "ADDEXPR", "MULTEXPR",
  "Expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   123,   125,    40,    91,    93,    41,    59,    44
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -42

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      82,   -72,   -72,    21,    44,    53,   -72,    37,   -72,   -72,
      26,    82,    27,    34,   -72,   -72,   -72,   -72,   -72,   -72,
      42,    50,    34,    36,    58,   103,   109,    97,    84,   106,
     126,   126,   -72,   -72,   150,   126,    98,   147,   148,   193,
     156,   151,   -72,   138,   -72,   122,   -72,   192,   194,    85,
      46,    92,    -4,   124,   126,   -72,   -72,    45,     5,   -72,
     -72,    84,    84,   159,    84,    84,    84,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   160,   126,   -27,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   -72,   -72,   126,     9,    94,   154,   -72,
     126,   -72,   138,   -72,   -72,   -72,    84,   -72,   161,   -72,
      34,   -72,     0,   -72,   162,   -72,   163,   -72,   126,   142,
     -72,   -72,   194,    85,    46,    46,    92,    92,    92,    92,
      -4,    -4,   -72,   -72,   -72,   192,   165,     4,    -8,   107,
     -26,   166,    84,   167,   170,     0,   -72,   -12,    76,   168,
     138,    84,   -72,   169,   139,    69,    96,     1,   -72,   -72,
     158,   -72,   -72,   -72,   -72,   -72,   -72,   126,   171,   -72,
     -72,   172,   -72,   173,   100,   -72,   -72,   164,   192,   -72,
     -72,   -72,   -72,   174,   167,   -72,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     6,     0,     0,     8,     1,     0,     7,     4,
       0,     0,     0,     0,     2,    62,    58,    60,    59,    61,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,    93,    94,     0,     0,     0,     0,     0,    21,
       0,     0,    17,    18,    16,     0,    15,    36,    74,    76,
      79,    84,    87,    91,     0,    32,    33,     0,     0,    91,
       3,    14,    14,     0,    14,    14,    14,    64,    67,    68,
      72,    65,    66,    69,    71,    70,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,     0,     0,     0,     0,    30,
       0,    31,     0,    92,    10,     9,    14,    11,     0,    13,
       0,    55,     0,    51,    52,    56,    46,    43,     0,     0,
      38,    44,    73,    75,    77,    78,    83,    82,    81,    80,
      85,    86,    88,    89,    90,    63,     0,     0,     0,     0,
      41,     0,    14,     0,     0,     0,    45,    41,    94,    41,
       0,    14,    22,     0,    91,     0,     0,     0,    20,    12,
       0,    54,    57,    53,    37,    40,    39,     0,     0,    29,
      26,     0,    23,     0,     0,    49,    50,     0,    42,    19,
      27,    25,    24,     0,    47,    28,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   203,   -72,   -72,   -54,   -72,   -72,   -72,
     -72,   -72,   -72,   -11,   175,    49,   -72,   -72,   -49,    40,
     -72,   -72,   -71,   -72,   -72,    -9,   176,   -42,   -29,   155,
     146,   117,   105,   113,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    12,     4,     5,     9,    36,    37,    38,    39,
      64,    40,    98,    41,    42,   120,   149,    43,    78,   161,
     177,    44,   113,   114,   115,    45,    46,    95,    47,    48,
      49,    50,    51,    52,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    76,    55,    56,    20,    80,    58,   104,   105,    80,
     107,   108,   109,    23,   110,   118,   118,    79,    80,    30,
      31,     6,    80,    90,    91,    96,    80,    77,    92,   102,
     121,   119,   119,    53,    53,   111,    53,    53,    53,    32,
      33,   144,    15,    16,    17,    18,   119,     7,   100,   155,
     117,   112,   141,    15,    16,    17,    18,    35,   174,     8,
     152,   103,   132,   133,   134,   136,   135,   146,   138,    84,
      85,    19,   140,    10,   163,    86,    87,    11,    53,    14,
      32,    33,    19,    21,    30,    31,     1,     2,   159,   147,
      24,   150,    15,    16,    17,    18,    29,   168,    35,    30,
      31,   143,    97,    22,    32,    33,    82,    83,   167,   154,
     157,    30,    31,    25,    53,    30,    31,    88,    89,    32,
      33,    19,    35,    53,    34,   170,   153,   154,   154,    32,
      33,    32,    33,   -41,   119,    32,    33,    35,   178,    93,
      94,    26,    32,    33,   171,   173,   154,    35,    28,    35,
      60,   137,   172,    35,    93,    94,   182,    32,    33,    54,
      35,    32,    33,   183,   156,    27,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    35,    77,    32,   148,    35,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   126,
     127,   128,   129,   175,   176,    35,   164,   165,   166,   124,
     125,   130,   131,    57,    61,    62,    63,    65,    66,    80,
     106,   139,    81,   142,    13,   116,   151,    77,   158,   184,
     145,   160,   162,   179,   186,   169,   119,   123,   180,   181,
     185,     0,    99,   101,     0,   122
};

static const yytype_int16 yycheck[] =
{
      28,    43,    30,    31,    13,    17,    35,    61,    62,    17,
      64,    65,    66,    22,    14,    42,    42,    45,    17,    15,
      16,     0,    17,    27,    28,    54,    17,    54,    32,    57,
      79,    58,    58,    61,    62,    35,    64,    65,    66,    35,
      36,   112,     8,     9,    10,    11,    58,     3,    57,    57,
      78,    51,   106,     8,     9,    10,    11,    53,    57,     6,
      56,    56,    90,    91,    92,    56,    95,   116,    97,    23,
      24,    37,   100,    36,   145,    29,    30,    51,   106,    52,
      35,    36,    37,    41,    15,    16,     4,     5,   142,   118,
      54,   119,     8,     9,    10,    11,    12,   151,    53,    15,
      16,   110,    57,    53,    35,    36,    21,    22,   150,   137,
     139,    15,    16,    55,   142,    15,    16,    25,    26,    35,
      36,    37,    53,   151,    40,    56,   137,   155,   156,    35,
      36,    35,    36,    57,    58,    35,    36,    53,   167,    15,
      16,    38,    35,    36,   155,   156,   174,    53,    51,    53,
      52,    57,    56,    53,    15,    16,    56,    35,    36,    53,
      53,    35,    36,   174,    57,    56,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    53,    54,    35,    36,    53,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    84,
      85,    86,    87,    35,    36,    53,   147,   148,   149,    82,
      83,    88,    89,    53,    57,    57,    13,    51,    57,    17,
      51,    57,    18,    52,    11,    55,    51,    54,    52,    55,
      58,    54,    52,    52,   184,    56,    58,    81,    56,    56,
      56,    -1,    57,    57,    -1,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,    60,    62,    63,     0,     3,     6,    64,
      36,    51,    61,    62,    52,     8,     9,    10,    11,    37,
      84,    41,    53,    84,    54,    55,    38,    56,    51,    12,
      15,    16,    35,    36,    40,    53,    65,    66,    67,    68,
      70,    72,    73,    76,    80,    84,    85,    87,    88,    89,
      90,    91,    92,    93,    53,    93,    93,    53,    87,    93,
      52,    57,    57,    13,    69,    51,    57,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    86,    54,    77,    93,
      17,    18,    21,    22,    23,    24,    29,    30,    25,    26,
      27,    28,    32,    15,    16,    86,    87,    57,    71,    73,
      84,    85,    93,    56,    65,    65,    51,    65,    65,    65,
      14,    35,    51,    81,    82,    83,    55,    93,    42,    58,
      74,    77,    88,    89,    90,    90,    91,    91,    91,    91,
      92,    92,    93,    93,    93,    87,    56,    57,    87,    57,
      93,    65,    52,    84,    81,    58,    77,    87,    36,    75,
      93,    51,    56,    72,    93,    57,    57,    87,    52,    65,
      54,    78,    52,    81,    74,    74,    74,    86,    65,    56,
      56,    72,    56,    72,    57,    35,    36,    79,    87,    52,
      56,    56,    56,    72,    55,    56,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    62,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    66,    66,    67,    67,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    72,    73,    73,    74,
      74,    74,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    81,    81,    81,    82,    82,    83,    84,    84,
      84,    84,    84,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      90,    90,    90,    90,    90,    91,    91,    91,    92,    92,
      92,    92,    93,    93,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,    12,     2,     1,     1,     1,     0,     3,
       3,     3,     5,     3,     0,     1,     1,     1,     1,     7,
       4,     0,     5,     6,     7,     7,     6,     7,     8,     6,
       1,     1,     2,     2,     2,     2,     1,     5,     3,     3,
       3,     0,     3,     3,     3,     3,     2,     3,     4,     1,
       1,     3,     1,     3,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 29 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("CLASS DECLARATION",(yyvsp[-5]).ptr,newleaf("classname",(yyvsp[-5]).v),(yyvsp[-1]).ptr,nptr);ast->root = (yyval).ptr;}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("METHOD DECLARATION",(yyvsp[-11]).ptr,(yyvsp[-10]).ptr,(yyvsp[-7]).ptr,(yyvsp[-1]).ptr);}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("modifier",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("access modifier",(yyvsp[0]).v);}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 36 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("access modifier",(yyvsp[0]).v);}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 38 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("access modifier",(yyvsp[0]).v);}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 39 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 41 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("DECLARATION",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 42 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("INITIALIZATION",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 43 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("IF ELSE STATEMNET",(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 44 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR LOOP",(yyvsp[-4]).ptr,(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 45 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("STATEMENT",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 48 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("ASSIGNMENT STATEMENT",(yyvsp[0]).ptr,nptr,nptr,nptr);}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 49 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("ARRAY INITIALISATION STATEMENT",(yyvsp[0]).ptr,nptr,nptr,nptr);}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 51 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("VARIABLE DECLARATION",(yyvsp[0]).ptr,nptr,nptr,nptr);}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 52 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("ARRAY DECLARATION STATEMENT",(yyvsp[0]).ptr,nptr,nptr,nptr);}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 54 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("IF STATEMENT",(yyvsp[-4]).ptr,(yyvsp[-1]).ptr,nptr,nptr);}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 56 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("ELSE STATEMENT",(yyvsp[-1]).ptr,nptr,nptr,nptr);}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 57 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 59 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR CONDITION",nptr,nptr,nptr,nptr);}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 60 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR CONDITION",(yyvsp[-3]).ptr,nptr,nptr,nptr);}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 61 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR CONDITION",(yyvsp[-4]).ptr,(yyvsp[-2]).ptr,nptr,nptr);}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 62 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR CONDITION",(yyvsp[-4]).ptr,nptr,(yyvsp[-1]).ptr,nptr);}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 63 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR CONDITION",nptr,(yyvsp[-2]).ptr,nptr,nptr);}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 64 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR CONDITION",nptr,(yyvsp[-3]).ptr,(yyvsp[-1]).ptr,nptr);}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 65 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR CONDITION",(yyvsp[-5]).ptr,(yyvsp[-3]).ptr,(yyvsp[-1]).ptr,nptr);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 66 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("FOR CONDITION",nptr,nptr,(yyvsp[-1]).ptr,nptr);}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 68 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 69 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 71 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("UNARY OPERATION",newleaf("increment",(yyvsp[-1]).v),(yyvsp[0]).ptr,nptr,nptr);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 72 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("UNARY OPERATION",newleaf("increment",(yyvsp[-1]).v),(yyvsp[0]).ptr,nptr,nptr);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 73 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("UNARY OPERATION",(yyvsp[-1]).ptr,newleaf("increment",(yyvsp[0]).v),nptr,nptr);}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 74 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("UNARY OPERATION",(yyvsp[-1]).ptr,newleaf("increment",(yyvsp[0]).v),nptr,nptr);}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 78 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("variable initialisation",(yyvsp[-4]).ptr,(yyvsp[-3]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 79 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("variable declaration",(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 84 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("declaration continued",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 85 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("declaration continued",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 86 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 88 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode((yyvsp[-1]).v,(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 90 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("array declaration",(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 91 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("array declaration",(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 93 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("bracket",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 94 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 96 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-1]).ptr;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 97 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("bracket",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 99 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("num",(yyvsp[0]).v);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 100 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("id",(yyvsp[0]).v);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 102 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode((yyvsp[-1]).v,(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 104 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 105 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(",",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 106 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("new",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 108 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("num",(yyvsp[0]).v);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 109 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 111 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-1]).ptr;}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 113 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 114 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 115 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 116 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 117 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 119 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode((yyvsp[-1]).v,(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 121 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 122 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 123 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 124 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 125 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 126 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 127 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 128 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 129 "sym.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 131 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 132 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 134 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 135 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 137 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 138 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 139 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 141 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 142 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 143 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 144 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 145 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 147 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 148 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 149 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 151 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 152 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 153 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(strdup((yyvsp[-1]).v),(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 154 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 156 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-1]).ptr;}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 157 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("num",(yyvsp[0]).v);}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 158 "sym.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("id",(yyvsp[0]).v);}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2009 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 160 "sym.y" /* yacc.c:1906  */

void yyerror(char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
	fp = fopen("AST.txt", "w");
	ast = (AST*)malloc(sizeof(AST));
	ast->root = NULL;
	yyin = fopen(argv[1], "r");
	if(!yyparse())
	{
		
		printf("Parsing succesful\n");
		printf("AST generated\n");

		fprintf(fp,"Abstract Syntax Tree\n");
		
		printBT("",ast->root,0);
		fprintf(fp,"\n");
		fclose(fp);
		return 0;
	}
	else
	{
		printf("Unsuccessful\n");
	}
	return 0;
}


TREE* newnode(char* o,TREE* c1,TREE* c2,TREE* c3,TREE* c4)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr= strdup(o);
	temp->value = strdup("N/A");
	temp->c1 = c1;
	temp->c2 = c2;
	temp->c3 = c3;
	temp->c4 = c4;
	return temp;
}

TREE* newleaf(char* o, char* v)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr = strdup(o);
	temp->value = strdup(v);
	temp->c1 = NULL;
	temp->c2 = NULL;
	temp->c3 = NULL;
	temp->c4 = NULL;
	return temp;
}

void display(TREE* r)
{	
	
	if(r==NULL)
		return;
	if(r->c1==NULL && r->c2==NULL && r->c3==NULL)
	{
		printf("(");
		printf("%s\t%s)\n",r->opr,r->value);
	}
	else
		printf("%s\n",r->opr);
	display(r->c1);
	display(r->c2);
	display(r->c3);
	display(r->c4);
}

void printBT(char* prefix, TREE* node, int isLeft)
{	
	
	if(node==NULL)
		return;
    if( node != NULL)
    {
       fprintf(fp,"%s",prefix);

       	if(isLeft==0)
       		fprintf(fp,"└──");
       	else
       		fprintf(fp,"├──");
      if(node->c1==NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)		
		fprintf(fp,"(%s, %s)\n",node->opr,node->value);
	else
		fprintf(fp,"%s\n",node->opr);
        char new_prefix[1000];
       	if(isLeft==0)
		{
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"    ");
       	}
       	else
   		{
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"│   ");
       	}
     if(node->c1!=NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 0);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}	
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4!=NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 1);
        printBT(new_prefix, node->c4, 0);
        return;
	}	   
  } 	
}

