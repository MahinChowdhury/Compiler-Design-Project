
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "mahin.y"

	#include<math.h>
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>

	int yyparse();
	int yylex();
	int yyerror();

	int switchdone = 0;
	int switchvar;

    int varIdx;
    int ptr = 0;
	int isInt;

	struct varStruct{
		char* vname;
		char* type;
		int ival;
		float fval;
		char* cvar;
	} vars[50];

	int find(char* s){
		int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(vars[i].vname,s) == 0) return i;
        }
        return -1;
	}

	void add(char* name,char* type, int ival, float fval, char* cvar){
		vars[ptr].vname = strdup(name);
		vars[ptr].type = strdup(type);
		vars[ptr].ival = ival;
		vars[ptr].fval = fval;
		vars[ptr].cvar = strdup(cvar);
		ptr++;
	}



/* Line 189 of yacc.c  */
#line 118 "mahin.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUM = 259,
     DECI = 260,
     STR = 261,
     INT = 262,
     FLOAT = 263,
     CHAR = 264,
     IFX = 265,
     ELSEIF = 266,
     ELSE = 267,
     GE = 268,
     LE = 269,
     GT = 270,
     LT = 271,
     MINUS = 272,
     PLUS = 273,
     DIV = 274,
     MULT = 275,
     MAIN = 276,
     PB = 277,
     PE = 278,
     BB = 279,
     BE = 280,
     SM = 281,
     CM = 282,
     ASGN = 283,
     IS_PRIME = 284,
     PRINTVAR = 285,
     PRINTSTR = 286,
     PRINTLN = 287,
     IF = 288,
     FOR = 289,
     INC = 290,
     DEC = 291,
     TO = 292,
     SWITCH = 293,
     DEFAULT = 294,
     COL = 295,
     FUNC = 296,
     EQU = 297,
     NEQU = 298,
     SIN = 299,
     EXP = 300,
     GCD = 301,
     MIN = 302,
     MAX = 303,
     SH = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 45 "mahin.y"

  char* text;
  int num;
  double val;



/* Line 214 of yacc.c  */
#line 211 "mahin.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 223 "mahin.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   525

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    15,    18,    21,    24,
      27,    30,    33,    36,    39,    41,    43,    45,    49,    52,
      54,    58,    62,    66,    71,    77,    82,    88,    96,   104,
     112,   120,   126,   128,   130,   134,   138,   142,   146,   150,
     154,   158,   162,   166,   170,   174,   182,   188,   197,   209,
     221,   229,   231,   232,   239,   246,   254,   263,   267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    21,    24,    52,    25,    -1,    -1,    53,
      52,    -1,    60,    52,    -1,    61,    52,    -1,    62,    52,
      -1,    63,    52,    -1,    59,    52,    -1,    58,    52,    -1,
      57,    52,    -1,    66,    52,    -1,    54,    55,    -1,     7,
      -1,     8,    -1,     9,    -1,    56,    27,    55,    -1,    56,
      26,    -1,     3,    -1,     3,    28,     4,    -1,     3,    28,
       5,    -1,     3,    28,     6,    -1,     3,    28,    60,    26,
      -1,    30,    22,     3,    23,    26,    -1,    32,    22,    23,
      26,    -1,    31,    22,     6,    23,    26,    -1,    46,    22,
      60,    27,    60,    23,    26,    -1,    48,    22,    60,    27,
      60,    23,    26,    -1,    47,    22,    60,    27,    60,    23,
      26,    -1,    45,    22,    60,    45,    60,    23,    26,    -1,
      29,    22,    60,    23,    26,    -1,     4,    -1,     3,    -1,
      60,    18,    60,    -1,    60,    17,    60,    -1,    60,    20,
      60,    -1,    60,    19,    60,    -1,    60,    16,    60,    -1,
      60,    15,    60,    -1,    60,    14,    60,    -1,    60,    13,
      60,    -1,    60,    42,    60,    -1,    60,    43,    60,    -1,
      22,    60,    23,    -1,    33,    22,    60,    23,    24,    52,
      25,    -1,    61,    12,    24,    52,    25,    -1,    61,    11,
      22,    60,    23,    24,    52,    25,    -1,    34,    22,    60,
      37,    60,    35,    60,    23,    24,    52,    25,    -1,    34,
      22,    60,    37,    60,    36,    60,    23,    24,    52,    25,
      -1,    38,    22,    64,    23,    24,    65,    25,    -1,    60,
      -1,    -1,    65,    60,    40,    24,    52,    25,    -1,    65,
      39,    40,    24,    52,    25,    -1,    41,     3,    22,    23,
      24,    52,    25,    -1,    41,     3,    22,    67,    23,    24,
      52,    25,    -1,     3,    27,    67,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    90,    92,    93,    94,    96,    97,    99,
     126,   144,   170,   201,   220,   233,   237,   248,   258,   265,
     272,   282,   304,   305,   320,   322,   324,   326,   337,   339,
     341,   343,   345,   347,   349,   360,   370,   374,   391,   406,
     428,   431,   439,   442,   449,   464,   467,   472,   473
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "DECI", "STR", "INT",
  "FLOAT", "CHAR", "IFX", "ELSEIF", "ELSE", "GE", "LE", "GT", "LT",
  "MINUS", "PLUS", "DIV", "MULT", "MAIN", "PB", "PE", "BB", "BE", "SM",
  "CM", "ASGN", "IS_PRIME", "PRINTVAR", "PRINTSTR", "PRINTLN", "IF", "FOR",
  "INC", "DEC", "TO", "SWITCH", "DEFAULT", "COL", "FUNC", "EQU", "NEQU",
  "SIN", "EXP", "GCD", "MIN", "MAX", "SH", "$accept", "program",
  "statement", "declare", "TYPE", "variables", "variable", "assign",
  "print", "libFunction", "expression", "ifelse", "forloop", "switchstmt",
  "expswitch", "switchinside", "function", "para", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    53,    54,    54,    54,    55,    55,    56,
      56,    56,    56,    57,    58,    58,    58,    59,    59,    59,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    61,    62,    62,
      63,    64,    65,    65,    65,    66,    66,    67,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     3,     2,     1,
       3,     3,     3,     4,     5,     4,     5,     7,     7,     7,
       7,     5,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     7,     5,     8,    11,    11,
       7,     1,     0,     6,     6,     7,     8,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,    33,    32,    14,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       4,    19,    13,     0,    11,    10,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       6,     7,     8,    12,     0,    44,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
      18,     0,    41,    40,    39,    38,    35,    34,    37,    36,
      42,    43,     0,     3,    23,     0,     0,     0,    25,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,    20,
      21,    22,    17,     0,     0,    31,    24,    26,     3,     0,
      52,     0,     3,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,    57,     0,     3,     0,     0,     0,
       0,     3,    45,     0,     0,    50,     0,     0,    55,     0,
      30,    27,    29,    28,     0,     0,     0,     0,     0,    56,
      47,     3,     3,     3,     3,     0,     0,     0,     0,    48,
      49,    54,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    23,    24,    25,    52,    53,    26,    27,    28,
      29,    30,    31,    32,    83,   143,    33,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -25
static const yytype_int16 yypact[] =
{
     -20,    -5,    33,   240,   -25,    16,   -25,   -25,   -25,   -25,
      14,    30,    34,    59,    60,    61,    62,    63,    77,    64,
      65,    66,    69,    67,   240,    90,   240,   240,   240,   148,
     194,   240,   240,   240,    14,   -25,   116,    14,    91,    89,
      75,    14,    14,    14,    81,    14,    14,    14,    14,   -25,
     -25,    71,   -25,   -15,   -25,   -25,   -25,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,   -25,    83,    82,
     -25,   -25,   -25,   -25,   195,   -25,   237,    84,    86,    85,
     276,   287,   482,    96,    17,     8,   295,   326,   343,    25,
     -25,    90,    58,    58,    58,    58,    -4,    -4,    12,    12,
     482,   482,    14,   240,   -25,    87,    88,    94,   -25,    97,
      14,    99,    98,   100,   103,    14,    14,    14,    14,   -25,
     -25,   -25,   -25,   358,   112,   -25,   -25,   -25,   240,    54,
     -25,   109,   240,   104,   374,   389,   405,   420,   114,   -25,
     115,    14,    14,    10,   -25,   119,   240,   120,   127,   128,
     134,   240,   -25,   436,   451,   -25,   105,   467,   -25,   144,
     -25,   -25,   -25,   -25,   146,   149,   150,   151,   152,   -25,
     -25,   240,   240,   240,   240,   147,   158,   159,   160,   -25,
     -25,   -25,   -25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -24,   -25,   -25,   101,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,    56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      50,     1,    54,    55,    56,    67,    70,    71,    72,    73,
      36,    90,    91,    35,     6,    63,    64,    35,     6,     3,
     112,    57,    58,    59,    60,    61,    62,    63,    64,   119,
     120,   121,    10,     4,    74,   155,    10,    76,    65,    66,
     113,    80,    81,    82,    34,    85,    86,    87,    88,   156,
      65,    66,    37,   115,    65,    66,    38,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    57,    58,    59,
      60,    61,    62,    63,    64,    61,    62,    63,    64,   124,
      44,    39,    40,    41,    42,    43,    45,    46,    47,   141,
     142,    48,    49,    51,    77,    78,    65,    66,    79,    89,
      65,    66,   123,    84,   140,   102,   103,   106,   145,   107,
     129,   108,   112,   125,   126,   134,   135,   136,   137,   111,
     127,   128,   159,   130,   132,   131,   133,   164,   146,    57,
      58,    59,    60,    61,    62,    63,    64,   139,   151,    75,
     152,   153,   154,   157,   158,   167,   160,   175,   176,   177,
     178,     5,     6,   161,   162,     7,     8,     9,    65,    66,
     163,    57,    58,    59,    60,    61,    62,    63,    64,   169,
      10,   170,   179,   171,   172,   173,   174,    11,    12,    13,
      14,    15,    16,   180,   181,   182,    17,   144,     0,    18,
      65,    66,   122,    19,    20,    21,    22,     5,     6,     0,
       0,     7,     8,     9,     0,    68,    69,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    10,     0,     0,     0,
       0,   104,     0,    11,    12,    13,    14,    15,    16,     0,
       0,     0,    17,     0,     0,    18,     0,    65,    66,    19,
      20,    21,    22,     5,     6,     0,     0,     7,     8,     9,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
     105,     0,    10,     0,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,     0,     0,     0,    17,    65,
      66,    18,     0,     0,     0,    19,    20,    21,    22,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,   109,
      57,    58,    59,    60,    61,    62,    63,    64,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,    65,    66,
       0,     0,   116,     0,   110,     0,     0,     0,     0,    65,
      66,     0,     0,     0,     0,     0,     0,    65,    66,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,   117,     0,     0,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,    65,    66,
     118,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,   138,     0,     0,     0,    65,    66,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,   147,     0,     0,
      65,    66,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,   148,     0,     0,     0,    65,    66,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,   149,     0,
       0,    65,    66,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,   150,     0,     0,     0,    65,    66,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,   165,
       0,     0,    65,    66,    57,    58,    59,    60,    61,    62,
      63,    64,     0,     0,   166,     0,     0,     0,    65,    66,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,   168,     0,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66
};

static const yytype_int16 yycheck[] =
{
      24,    21,    26,    27,    28,    29,    30,    31,    32,    33,
      10,    26,    27,     3,     4,    19,    20,     3,     4,    24,
       3,    13,    14,    15,    16,    17,    18,    19,    20,     4,
       5,     6,    22,     0,    34,    25,    22,    37,    42,    43,
      23,    41,    42,    43,    28,    45,    46,    47,    48,    39,
      42,    43,    22,    45,    42,    43,    22,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    13,    14,    15,
      16,    17,    18,    19,    20,    17,    18,    19,    20,   103,
       3,    22,    22,    22,    22,    22,    22,    22,    22,    35,
      36,    22,    25,     3,     3,     6,    42,    43,    23,    28,
      42,    43,   102,    22,   128,    22,    24,    23,   132,    23,
     110,    26,     3,    26,    26,   115,   116,   117,   118,    23,
      26,    24,   146,    24,    24,    27,    23,   151,    24,    13,
      14,    15,    16,    17,    18,    19,    20,    25,    24,    23,
      25,   141,   142,   143,    25,    40,    26,   171,   172,   173,
     174,     3,     4,    26,    26,     7,     8,     9,    42,    43,
      26,    13,    14,    15,    16,    17,    18,    19,    20,    25,
      22,    25,    25,    24,    24,    24,    24,    29,    30,    31,
      32,    33,    34,    25,    25,    25,    38,   131,    -1,    41,
      42,    43,    91,    45,    46,    47,    48,     3,     4,    -1,
      -1,     7,     8,     9,    -1,    11,    12,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    22,    -1,    -1,    -1,
      -1,    26,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    42,    43,    45,
      46,    47,    48,     3,     4,    -1,    -1,     7,     8,     9,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    38,    42,
      43,    41,    -1,    -1,    -1,    45,    46,    47,    48,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      13,    14,    15,    16,    17,    18,    19,    20,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    42,    43,
      -1,    -1,    27,    -1,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    42,    43,
      27,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    42,    43,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      42,    43,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    42,    43,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    42,    43,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    42,    43,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    42,    43,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    42,    43,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    51,    24,     0,     3,     4,     7,     8,     9,
      22,    29,    30,    31,    32,    33,    34,    38,    41,    45,
      46,    47,    48,    52,    53,    54,    57,    58,    59,    60,
      61,    62,    63,    66,    28,     3,    60,    22,    22,    22,
      22,    22,    22,    22,     3,    22,    22,    22,    22,    25,
      52,     3,    55,    56,    52,    52,    52,    13,    14,    15,
      16,    17,    18,    19,    20,    42,    43,    52,    11,    12,
      52,    52,    52,    52,    60,    23,    60,     3,     6,    23,
      60,    60,    60,    64,    22,    60,    60,    60,    60,    28,
      26,    27,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    22,    24,    26,    23,    23,    23,    26,    23,
      37,    23,     3,    23,    67,    45,    27,    27,    27,     4,
       5,     6,    55,    60,    52,    26,    26,    26,    24,    60,
      24,    27,    24,    23,    60,    60,    60,    60,    23,    25,
      52,    35,    36,    65,    67,    52,    24,    23,    23,    23,
      23,    24,    25,    60,    60,    25,    39,    60,    25,    52,
      26,    26,    26,    26,    52,    23,    23,    40,    40,    25,
      25,    24,    24,    24,    24,    52,    52,    52,    52,    25,
      25,    25,    25
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 75 "mahin.y"
    {printf("\n===> Entire Program Executed Successfully\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 92 "mahin.y"
    {isInt=1;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 93 "mahin.y"
    {isInt=0;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 94 "mahin.y"
    {isInt=-1;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 100 "mahin.y"
    {
    int idx = find((yyvsp[(1) - (1)].text));

    if (idx != -1)
    {
        printf("Declared\n");
    }
    else
    {
        if (isInt == 1)
        {
            printf("Declared Int : (%s)\n",(yyvsp[(1) - (1)].text));
            add((yyvsp[(1) - (1)].text), "int", 0, 0.0, "");
        }
        else if (isInt == 0)
        {
            printf("Declared Float: (%s)\n",(yyvsp[(1) - (1)].text));
            add((yyvsp[(1) - (1)].text), "float", 0, 0.0, "");
        }
        else
        {
            printf("Declared String: (%s)\n",(yyvsp[(1) - (1)].text));
            add((yyvsp[(1) - (1)].text), "char", 0, 0.0, "");
        }
    }
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 126 "mahin.y"
    {
	if(find((yyvsp[(1) - (3)].text))!=-1){
		printf("Declared\n");
	}
	else{
		if(isInt==1){
			printf("Declared Int : (%s) and Assigned Int Value : (%d)\n",(yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].num));
			add((yyvsp[(1) - (3)].text),"int",(yyvsp[(3) - (3)].num),0.0,"");
		}
		else if(isInt==0){
			printf("Declared Float : (%s) and Assigned Int Value : (%d)\n",(yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].num));
			add((yyvsp[(1) - (3)].text),"float",0,(yyvsp[(3) - (3)].num),"");
		}
		else{
			printf("type error : Mismatch\n");
		}
	}
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 145 "mahin.y"
    {

    if (find((yyvsp[(1) - (3)].text)) != -1)
    {
        printf("Declared\n");
    }
    else
    {
        if (isInt == 1)
        {
			printf("Declared Int : (%s) and Assigned Float Value : (%f)\n",(yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].val));
            add((yyvsp[(1) - (3)].text), "int", (yyvsp[(3) - (3)].val), 0.0, "");
        }
        else if (isInt == 0)
        {	
			printf("Declared Float : (%s) and Assigned Float Value : (%f)\n",(yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].val));
            add((yyvsp[(1) - (3)].text), "float", 0, (yyvsp[(3) - (3)].val), "");
        }
        else
        {
            printf("type error : Mismatch\n");
        }
    }
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 170 "mahin.y"
    {
	if (find((yyvsp[(1) - (3)].text)) != -1)
    {
        printf("Declared\n");
    }
    else
    {
        if (isInt == 1)
        {
			printf("type error : Mismatch\n");
        }
        else if (isInt == 0)
        {	
			printf("type error : Mismatch\n");
        }
        else
        {
            printf("Declared String : (%s) and Assigned String Value : ");

			printf(" %s\n",(yyvsp[(3) - (3)].text));

            add((yyvsp[(1) - (3)].text), "string", 0, 0, (yyvsp[(3) - (3)].text));
        }
    }
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 202 "mahin.y"
    {
		int idx = find((yyvsp[(1) - (4)].text));
		
		if(idx == -1) {
			printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(1) - (4)].text));
		}
		else{
			printf("\nAssigned Value : ");
			if(!strcmp(vars[idx].type,"char")) {}
			else if(!strcmp(vars[idx].type,"float")) {vars[idx].fval = (yyvsp[(3) - (4)].num);printf("%f\n",(yyvsp[(3) - (4)].num));}
			else {vars[idx].ival = (yyvsp[(3) - (4)].num);printf("%d\n",(yyvsp[(3) - (4)].num));}
		}
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 221 "mahin.y"
    {
                        int idx = find((yyvsp[(3) - (5)].text));
						if(idx==-1){
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(3) - (5)].text));
						}
						else{
                            if(!strcmp(vars[idx].type,"char")) printf("%s\n",vars[idx].cvar);
                            else if(!strcmp(vars[idx].type,"float")) printf("%f\n",vars[idx].fval);
                            else printf("%d\n",vars[idx].ival);
						}
					;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 234 "mahin.y"
    {
			printf("\n");
		;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 238 "mahin.y"
    {
	printf("%s\n",(yyvsp[(3) - (5)].text));
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 249 "mahin.y"
    {
					int a = (yyvsp[(3) - (7)].num),b=(yyvsp[(5) - (7)].num);
					while(a != b){
						if(a > b)	a -= b;
						else b -= a;
					}

					printf("\nGCD is : %d\n",a);
				;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 259 "mahin.y"
    {
					int a = (yyvsp[(3) - (7)].num),b=(yyvsp[(5) - (7)].num);

					if(a > b) printf("\nMaximum value : %d\n",a);
					else printf("\nMaximum value : %d\n",b);
                ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 266 "mahin.y"
    {
					int a=(yyvsp[(3) - (7)].num),b=(yyvsp[(5) - (7)].num);

					if(a < b) printf("\nMinimum value : %d\n",a);
					else printf("\nMinimum value : %d\n",b);
                ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 273 "mahin.y"
    {
                    int n=(yyvsp[(3) - (7)].num),m=(yyvsp[(5) - (7)].num);
					int value = 1;

					while(m){
						value *= n;
						m--;
					}
                ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 283 "mahin.y"
    {   
                    int n = (yyvsp[(3) - (5)].num);

                    int flag = 1,i;

                    for(i=2 ; i*i<=n ; i++){
                        if(n%i==0) {
                            flag = 0;
                            break;
                        }
                    }

                    if(flag) printf("\n%d is a prime number\n",n);
                    else printf("\n%d not a prime number\n",n);
                ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 304 "mahin.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 306 "mahin.y"
    {
						int idx = find((yyvsp[(1) - (1)].text));
						if(idx==-1){
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(1) - (1)].text));
						}
						else{
							if(!strcmp(vars[idx].type,"int")) (yyval.num) = vars[idx].ival;
                            else if(!strcmp(vars[idx].type,"float")) (yyval.num) = vars[idx].fval;
							else{
								//String
							}
						}

				 	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 321 "mahin.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 323 "mahin.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 325 "mahin.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 327 "mahin.y"
    {
						if((yyvsp[(3) - (3)].num)) {
 							(yyval.num) = (yyvsp[(1) - (3)].num) / (yyvsp[(3) - (3)].num);
							}
				  		else {
							(yyval.num) = 0;
							printf("\nRuntime Error: division by zero\t");
							exit(-1);
				  		} 
					;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 338 "mahin.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) < (yyvsp[(3) - (3)].num); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 340 "mahin.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) > (yyvsp[(3) - (3)].num); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 342 "mahin.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) <= (yyvsp[(3) - (3)].num); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 344 "mahin.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) >= (yyvsp[(3) - (3)].num); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 346 "mahin.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) == (yyvsp[(3) - (3)].num); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 348 "mahin.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) != (yyvsp[(3) - (3)].num); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 350 "mahin.y"
    {(yyval.num) = (yyvsp[(2) - (3)].num);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 361 "mahin.y"
    {
    printf("\nIF condition found\n");
    int res = (yyvsp[(3) - (7)].num);
    if(res == 1) {
        printf("If condition is true.\n");
    } else {
        printf("If condition is false.\n");
    }
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 371 "mahin.y"
    {
    printf("\nELSE condition found\n");
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 375 "mahin.y"
    {
    printf("\nElse If condition found\n");
    int res = (yyvsp[(4) - (8)].num);
    if(res == 1) {
        printf("Else If condition is true.\n");
    } else {
        printf("Else If condition is false.\n");
    }
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 392 "mahin.y"
    {
                        printf("\n===>For Loop Incement Working Successfully\n");
						int st = (yyvsp[(3) - (11)].num);
						int ed = (yyvsp[(5) - (11)].num);
						int dif = (yyvsp[(7) - (11)].num);
						int cnt = 0;
						int k = 0;
						for(k = st; k <= ed; k += dif){
                            printf("%d\n",k);
							cnt++;
						}	
						printf("===>Loop executed %d times\n",cnt);
					;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 406 "mahin.y"
    {
            {
                        printf("\n===>For Loop Decrement Working Successfully\n");
						int st = (yyvsp[(3) - (11)].num);
						int ed = (yyvsp[(5) - (11)].num);
						int dif = (yyvsp[(7) - (11)].num);
						int cnt = 0;
						int k = 0;
						for(k = st; k >= ed; k -= dif){
                            printf("%d\n",k);
							cnt++;
						}	
						printf("===>Loop executed %d times\n",cnt);
					} 
        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 432 "mahin.y"
    {
			switchdone = 0;
			switchvar = (yyvsp[(1) - (1)].num);
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 439 "mahin.y"
    {
			printf("\nSwitch Case found.\n");
		;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 443 "mahin.y"
    {
			if ((yyvsp[(2) - (6)].num) == switchvar && switchdone == 0) {
				switchdone = 1;
				printf("Executed %d block case!\n", (yyvsp[(2) - (6)].num));
			}
		;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 450 "mahin.y"
    {
			if (switchdone == 0) {
				printf("\nDefault block case executed!\n");
			}
		;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 464 "mahin.y"
    {
	printf("\nFunction without parameters\n");
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 467 "mahin.y"
    {
	printf("\nFunction with parameters\n");
;}
    break;



/* Line 1455 of yacc.c  */
#line 2148 "mahin.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 478 "mahin.y"



int yyerror(char *s){
	printf( "%s\n", s);
}

int yywrap()
{
	return 1;
}


int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();
}
