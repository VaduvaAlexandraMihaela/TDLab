/* A Bison parser, made by GNU Bison 3.7.1.  */

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
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "htmlcompact.y"

#include <stdio.h>

#line 75 "htmlcompact.tab.c"

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

#include "htmlcompact.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_opena = 3,                      /* opena  */
  YYSYMBOL_closea = 4,                     /* closea  */
  YYSYMBOL_openabbr = 5,                   /* openabbr  */
  YYSYMBOL_closeabbr = 6,                  /* closeabbr  */
  YYSYMBOL_openacronym = 7,                /* openacronym  */
  YYSYMBOL_closeacronym = 8,               /* closeacronym  */
  YYSYMBOL_openaddress = 9,                /* openaddress  */
  YYSYMBOL_closeaddress = 10,              /* closeaddress  */
  YYSYMBOL_openapplet = 11,                /* openapplet  */
  YYSYMBOL_closeapplet = 12,               /* closeapplet  */
  YYSYMBOL_openarea = 13,                  /* openarea  */
  YYSYMBOL_closearea = 14,                 /* closearea  */
  YYSYMBOL_openb = 15,                     /* openb  */
  YYSYMBOL_closeb = 16,                    /* closeb  */
  YYSYMBOL_openbase = 17,                  /* openbase  */
  YYSYMBOL_closebase = 18,                 /* closebase  */
  YYSYMBOL_openbasefont = 19,              /* openbasefont  */
  YYSYMBOL_closebasefont = 20,             /* closebasefont  */
  YYSYMBOL_openbdo = 21,                   /* openbdo  */
  YYSYMBOL_closebdo = 22,                  /* closebdo  */
  YYSYMBOL_openbig = 23,                   /* openbig  */
  YYSYMBOL_closebig = 24,                  /* closebig  */
  YYSYMBOL_openblockquote = 25,            /* openblockquote  */
  YYSYMBOL_closeblockquote = 26,           /* closeblockquote  */
  YYSYMBOL_openbody = 27,                  /* openbody  */
  YYSYMBOL_closebody = 28,                 /* closebody  */
  YYSYMBOL_openbr = 29,                    /* openbr  */
  YYSYMBOL_closebr = 30,                   /* closebr  */
  YYSYMBOL_openbutton = 31,                /* openbutton  */
  YYSYMBOL_closebutton = 32,               /* closebutton  */
  YYSYMBOL_opencaption = 33,               /* opencaption  */
  YYSYMBOL_closecaption = 34,              /* closecaption  */
  YYSYMBOL_opencenter = 35,                /* opencenter  */
  YYSYMBOL_closecenter = 36,               /* closecenter  */
  YYSYMBOL_opencite = 37,                  /* opencite  */
  YYSYMBOL_closecite = 38,                 /* closecite  */
  YYSYMBOL_opencode = 39,                  /* opencode  */
  YYSYMBOL_closecode = 40,                 /* closecode  */
  YYSYMBOL_opencol = 41,                   /* opencol  */
  YYSYMBOL_closecol = 42,                  /* closecol  */
  YYSYMBOL_opencolgroup = 43,              /* opencolgroup  */
  YYSYMBOL_closecolgroup = 44,             /* closecolgroup  */
  YYSYMBOL_opendd = 45,                    /* opendd  */
  YYSYMBOL_closedd = 46,                   /* closedd  */
  YYSYMBOL_opendel = 47,                   /* opendel  */
  YYSYMBOL_closedel = 48,                  /* closedel  */
  YYSYMBOL_opendfn = 49,                   /* opendfn  */
  YYSYMBOL_closedfn = 50,                  /* closedfn  */
  YYSYMBOL_opendir = 51,                   /* opendir  */
  YYSYMBOL_closedir = 52,                  /* closedir  */
  YYSYMBOL_opendiv = 53,                   /* opendiv  */
  YYSYMBOL_closediv = 54,                  /* closediv  */
  YYSYMBOL_opendl = 55,                    /* opendl  */
  YYSYMBOL_closedl = 56,                   /* closedl  */
  YYSYMBOL_opendt = 57,                    /* opendt  */
  YYSYMBOL_closedt = 58,                   /* closedt  */
  YYSYMBOL_openem = 59,                    /* openem  */
  YYSYMBOL_closeem = 60,                   /* closeem  */
  YYSYMBOL_openfieldset = 61,              /* openfieldset  */
  YYSYMBOL_closefieldset = 62,             /* closefieldset  */
  YYSYMBOL_openfont = 63,                  /* openfont  */
  YYSYMBOL_closefont = 64,                 /* closefont  */
  YYSYMBOL_openform = 65,                  /* openform  */
  YYSYMBOL_closeform = 66,                 /* closeform  */
  YYSYMBOL_openframe = 67,                 /* openframe  */
  YYSYMBOL_closeframe = 68,                /* closeframe  */
  YYSYMBOL_openframeset = 69,              /* openframeset  */
  YYSYMBOL_closeframeset = 70,             /* closeframeset  */
  YYSYMBOL_openhead = 71,                  /* openhead  */
  YYSYMBOL_closehead = 72,                 /* closehead  */
  YYSYMBOL_openhn = 73,                    /* openhn  */
  YYSYMBOL_closehn = 74,                   /* closehn  */
  YYSYMBOL_openhr = 75,                    /* openhr  */
  YYSYMBOL_closehr = 76,                   /* closehr  */
  YYSYMBOL_openhtml = 77,                  /* openhtml  */
  YYSYMBOL_closehtml = 78,                 /* closehtml  */
  YYSYMBOL_openi = 79,                     /* openi  */
  YYSYMBOL_closei = 80,                    /* closei  */
  YYSYMBOL_openiframe = 81,                /* openiframe  */
  YYSYMBOL_closeiframe = 82,               /* closeiframe  */
  YYSYMBOL_openimg = 83,                   /* openimg  */
  YYSYMBOL_closeimg = 84,                  /* closeimg  */
  YYSYMBOL_openinput = 85,                 /* openinput  */
  YYSYMBOL_closeinput = 86,                /* closeinput  */
  YYSYMBOL_openins = 87,                   /* openins  */
  YYSYMBOL_closeins = 88,                  /* closeins  */
  YYSYMBOL_openisindex = 89,               /* openisindex  */
  YYSYMBOL_closeisindex = 90,              /* closeisindex  */
  YYSYMBOL_openkbd = 91,                   /* openkbd  */
  YYSYMBOL_closekbd = 92,                  /* closekbd  */
  YYSYMBOL_openlabel = 93,                 /* openlabel  */
  YYSYMBOL_closelabel = 94,                /* closelabel  */
  YYSYMBOL_openlegend = 95,                /* openlegend  */
  YYSYMBOL_closelegend = 96,               /* closelegend  */
  YYSYMBOL_openli = 97,                    /* openli  */
  YYSYMBOL_closeli = 98,                   /* closeli  */
  YYSYMBOL_openlink = 99,                  /* openlink  */
  YYSYMBOL_closelink = 100,                /* closelink  */
  YYSYMBOL_openlisting = 101,              /* openlisting  */
  YYSYMBOL_closelisting = 102,             /* closelisting  */
  YYSYMBOL_openmap = 103,                  /* openmap  */
  YYSYMBOL_closemap = 104,                 /* closemap  */
  YYSYMBOL_openmenu = 105,                 /* openmenu  */
  YYSYMBOL_closemenu = 106,                /* closemenu  */
  YYSYMBOL_openmeta = 107,                 /* openmeta  */
  YYSYMBOL_closemeta = 108,                /* closemeta  */
  YYSYMBOL_opennextid = 109,               /* opennextid  */
  YYSYMBOL_closenextid = 110,              /* closenextid  */
  YYSYMBOL_opennoframes = 111,             /* opennoframes  */
  YYSYMBOL_closenoframes = 112,            /* closenoframes  */
  YYSYMBOL_opennoscript = 113,             /* opennoscript  */
  YYSYMBOL_closenoscript = 114,            /* closenoscript  */
  YYSYMBOL_openobject = 115,               /* openobject  */
  YYSYMBOL_closeobject = 116,              /* closeobject  */
  YYSYMBOL_openol = 117,                   /* openol  */
  YYSYMBOL_closeol = 118,                  /* closeol  */
  YYSYMBOL_openoptgroup = 119,             /* openoptgroup  */
  YYSYMBOL_closeoptgroup = 120,            /* closeoptgroup  */
  YYSYMBOL_openoption = 121,               /* openoption  */
  YYSYMBOL_closeoption = 122,              /* closeoption  */
  YYSYMBOL_openp = 123,                    /* openp  */
  YYSYMBOL_closep = 124,                   /* closep  */
  YYSYMBOL_openparam = 125,                /* openparam  */
  YYSYMBOL_closeparam = 126,               /* closeparam  */
  YYSYMBOL_openplaintext = 127,            /* openplaintext  */
  YYSYMBOL_closeplaintext = 128,           /* closeplaintext  */
  YYSYMBOL_openpre = 129,                  /* openpre  */
  YYSYMBOL_openq = 130,                    /* openq  */
  YYSYMBOL_closeq = 131,                   /* closeq  */
  YYSYMBOL_sopen = 132,                    /* sopen  */
  YYSYMBOL_sclose = 133,                   /* sclose  */
  YYSYMBOL_sampopen = 134,                 /* sampopen  */
  YYSYMBOL_sampclose = 135,                /* sampclose  */
  YYSYMBOL_scriptopen = 136,               /* scriptopen  */
  YYSYMBOL_scriptclose = 137,              /* scriptclose  */
  YYSYMBOL_selectopen = 138,               /* selectopen  */
  YYSYMBOL_selectclose = 139,              /* selectclose  */
  YYSYMBOL_smallopen = 140,                /* smallopen  */
  YYSYMBOL_smallclose = 141,               /* smallclose  */
  YYSYMBOL_spanopen = 142,                 /* spanopen  */
  YYSYMBOL_spanclose = 143,                /* spanclose  */
  YYSYMBOL_strikeopen = 144,               /* strikeopen  */
  YYSYMBOL_strikeclose = 145,              /* strikeclose  */
  YYSYMBOL_strongopen = 146,               /* strongopen  */
  YYSYMBOL_strongclose = 147,              /* strongclose  */
  YYSYMBOL_styleopen = 148,                /* styleopen  */
  YYSYMBOL_styleclose = 149,               /* styleclose  */
  YYSYMBOL_subopen = 150,                  /* subopen  */
  YYSYMBOL_subclose = 151,                 /* subclose  */
  YYSYMBOL_supopen = 152,                  /* supopen  */
  YYSYMBOL_supclose = 153,                 /* supclose  */
  YYSYMBOL_tableopen = 154,                /* tableopen  */
  YYSYMBOL_tableclose = 155,               /* tableclose  */
  YYSYMBOL_tbodyopen = 156,                /* tbodyopen  */
  YYSYMBOL_tbodyclose = 157,               /* tbodyclose  */
  YYSYMBOL_tdopen = 158,                   /* tdopen  */
  YYSYMBOL_tdclose = 159,                  /* tdclose  */
  YYSYMBOL_textareaopen = 160,             /* textareaopen  */
  YYSYMBOL_textareaclose = 161,            /* textareaclose  */
  YYSYMBOL_tfootopen = 162,                /* tfootopen  */
  YYSYMBOL_tfootclose = 163,               /* tfootclose  */
  YYSYMBOL_thopen = 164,                   /* thopen  */
  YYSYMBOL_thclose = 165,                  /* thclose  */
  YYSYMBOL_theadopen = 166,                /* theadopen  */
  YYSYMBOL_theadclose = 167,               /* theadclose  */
  YYSYMBOL_titleopen = 168,                /* titleopen  */
  YYSYMBOL_titleclose = 169,               /* titleclose  */
  YYSYMBOL_tropen = 170,                   /* tropen  */
  YYSYMBOL_trclose = 171,                  /* trclose  */
  YYSYMBOL_ttopen = 172,                   /* ttopen  */
  YYSYMBOL_ttclose = 173,                  /* ttclose  */
  YYSYMBOL_uopen = 174,                    /* uopen  */
  YYSYMBOL_uclose = 175,                   /* uclose  */
  YYSYMBOL_ulopen = 176,                   /* ulopen  */
  YYSYMBOL_ulclose = 177,                  /* ulclose  */
  YYSYMBOL_varopen = 178,                  /* varopen  */
  YYSYMBOL_varclose = 179,                 /* varclose  */
  YYSYMBOL_xmpopen = 180,                  /* xmpopen  */
  YYSYMBOL_xmpclose = 181,                 /* xmpclose  */
  YYSYMBOL_closepre = 182,                 /* closepre  */
  YYSYMBOL_NAME = 183,                     /* NAME  */
  YYSYMBOL_HREF = 184,                     /* HREF  */
  YYSYMBOL_REL = 185,                      /* REL  */
  YYSYMBOL_REV = 186,                      /* REV  */
  YYSYMBOL_METHODS = 187,                  /* METHODS  */
  YYSYMBOL_SHAPE = 188,                    /* SHAPE  */
  YYSYMBOL_COORDS = 189,                   /* COORDS  */
  YYSYMBOL_NOHREF = 190,                   /* NOHREF  */
  YYSYMBOL_SIZE = 191,                     /* SIZE  */
  YYSYMBOL_BGCOLOR = 192,                  /* BGCOLOR  */
  YYSYMBOL_BACKGROUND = 193,               /* BACKGROUND  */
  YYSYMBOL_TEXT = 194,                     /* TEXT  */
  YYSYMBOL_LINK = 195,                     /* LINK  */
  YYSYMBOL_VLINK = 196,                    /* VLINK  */
  YYSYMBOL_ALINK = 197,                    /* ALINK  */
  YYSYMBOL_CLEAR = 198,                    /* CLEAR  */
  YYSYMBOL_COMPACT = 199,                  /* COMPACT  */
  YYSYMBOL_ALIGN = 200,                    /* ALIGN  */
  YYSYMBOL_COLOR = 201,                    /* COLOR  */
  YYSYMBOL_ACTION = 202,                   /* ACTION  */
  YYSYMBOL_ENCTYPE = 203,                  /* ENCTYPE  */
  YYSYMBOL_WIDTH = 204,                    /* WIDTH  */
  YYSYMBOL_NOSHADE = 205,                  /* NOSHADE  */
  YYSYMBOL_VERSION = 206,                  /* VERSION  */
  YYSYMBOL_SRC = 207,                      /* SRC  */
  YYSYMBOL_HEIGHT = 208,                   /* HEIGHT  */
  YYSYMBOL_VSPACE = 209,                   /* VSPACE  */
  YYSYMBOL_ALT = 210,                      /* ALT  */
  YYSYMBOL_BORDER = 211,                   /* BORDER  */
  YYSYMBOL_USEMAP = 212,                   /* USEMAP  */
  YYSYMBOL_ISMAP = 213,                    /* ISMAP  */
  YYSYMBOL_TYPE = 214,                     /* TYPE  */
  YYSYMBOL_MAXLENGTH = 215,                /* MAXLENGTH  */
  YYSYMBOL_VALUE = 216,                    /* VALUE  */
  YYSYMBOL_CHECKED = 217,                  /* CHECKED  */
  YYSYMBOL_PROMPT = 218,                   /* PROMPT  */
  YYSYMBOL_URN = 219,                      /* URN  */
  YYSYMBOL_TITLE = 220,                    /* TITLE  */
  YYSYMBOL_ID = 221,                       /* ID  */
  YYSYMBOL_HTTP_EQUIV = 222,               /* HTTP_EQUIV  */
  YYSYMBOL_CONTENT = 223,                  /* CONTENT  */
  YYSYMBOL_N = 224,                        /* N  */
  YYSYMBOL_START = 225,                    /* START  */
  YYSYMBOL_SELECTED = 226,                 /* SELECTED  */
  YYSYMBOL_MULTIPLE = 227,                 /* MULTIPLE  */
  YYSYMBOL_CELLSPACING = 228,              /* CELLSPACING  */
  YYSYMBOL_CELLPADDING = 229,              /* CELLPADDING  */
  YYSYMBOL_ROWSPAN = 230,                  /* ROWSPAN  */
  YYSYMBOL_COLSPAN = 231,                  /* COLSPAN  */
  YYSYMBOL_NOWRAP = 232,                   /* NOWRAP  */
  YYSYMBOL_opens = 233,                    /* opens  */
  YYSYMBOL_closes = 234,                   /* closes  */
  YYSYMBOL_Content = 235,                  /* Content  */
  YYSYMBOL_YYACCEPT = 236,                 /* $accept  */
  YYSYMBOL_INIT = 237,                     /* INIT  */
  YYSYMBOL_HTML_TAG = 238                  /* HTML_TAG  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   29

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  236
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  3
/* YYNRULES -- Number of rules.  */
#define YYNRULES  4
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  10

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   490


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   244,   244,   248,   249
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
  "\"end of file\"", "error", "\"invalid token\"", "opena", "closea",
  "openabbr", "closeabbr", "openacronym", "closeacronym", "openaddress",
  "closeaddress", "openapplet", "closeapplet", "openarea", "closearea",
  "openb", "closeb", "openbase", "closebase", "openbasefont",
  "closebasefont", "openbdo", "closebdo", "openbig", "closebig",
  "openblockquote", "closeblockquote", "openbody", "closebody", "openbr",
  "closebr", "openbutton", "closebutton", "opencaption", "closecaption",
  "opencenter", "closecenter", "opencite", "closecite", "opencode",
  "closecode", "opencol", "closecol", "opencolgroup", "closecolgroup",
  "opendd", "closedd", "opendel", "closedel", "opendfn", "closedfn",
  "opendir", "closedir", "opendiv", "closediv", "opendl", "closedl",
  "opendt", "closedt", "openem", "closeem", "openfieldset",
  "closefieldset", "openfont", "closefont", "openform", "closeform",
  "openframe", "closeframe", "openframeset", "closeframeset", "openhead",
  "closehead", "openhn", "closehn", "openhr", "closehr", "openhtml",
  "closehtml", "openi", "closei", "openiframe", "closeiframe", "openimg",
  "closeimg", "openinput", "closeinput", "openins", "closeins",
  "openisindex", "closeisindex", "openkbd", "closekbd", "openlabel",
  "closelabel", "openlegend", "closelegend", "openli", "closeli",
  "openlink", "closelink", "openlisting", "closelisting", "openmap",
  "closemap", "openmenu", "closemenu", "openmeta", "closemeta",
  "opennextid", "closenextid", "opennoframes", "closenoframes",
  "opennoscript", "closenoscript", "openobject", "closeobject", "openol",
  "closeol", "openoptgroup", "closeoptgroup", "openoption", "closeoption",
  "openp", "closep", "openparam", "closeparam", "openplaintext",
  "closeplaintext", "openpre", "openq", "closeq", "sopen", "sclose",
  "sampopen", "sampclose", "scriptopen", "scriptclose", "selectopen",
  "selectclose", "smallopen", "smallclose", "spanopen", "spanclose",
  "strikeopen", "strikeclose", "strongopen", "strongclose", "styleopen",
  "styleclose", "subopen", "subclose", "supopen", "supclose", "tableopen",
  "tableclose", "tbodyopen", "tbodyclose", "tdopen", "tdclose",
  "textareaopen", "textareaclose", "tfootopen", "tfootclose", "thopen",
  "thclose", "theadopen", "theadclose", "titleopen", "titleclose",
  "tropen", "trclose", "ttopen", "ttclose", "uopen", "uclose", "ulopen",
  "ulclose", "varopen", "varclose", "xmpopen", "xmpclose", "closepre",
  "NAME", "HREF", "REL", "REV", "METHODS", "SHAPE", "COORDS", "NOHREF",
  "SIZE", "BGCOLOR", "BACKGROUND", "TEXT", "LINK", "VLINK", "ALINK",
  "CLEAR", "COMPACT", "ALIGN", "COLOR", "ACTION", "ENCTYPE", "WIDTH",
  "NOSHADE", "VERSION", "SRC", "HEIGHT", "VSPACE", "ALT", "BORDER",
  "USEMAP", "ISMAP", "TYPE", "MAXLENGTH", "VALUE", "CHECKED", "PROMPT",
  "URN", "TITLE", "ID", "HTTP_EQUIV", "CONTENT", "N", "START", "SELECTED",
  "MULTIPLE", "CELLSPACING", "CELLPADDING", "ROWSPAN", "COLSPAN", "NOWRAP",
  "opens", "closes", "Content", "$accept", "INIT", "HTML_TAG", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490
};
#endif

#define YYPACT_NINF (-233)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -76,  -206,     2,  -233,  -232,   -74,  -233,   -73,  -233,  -233
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     1,     0,     3,     4
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -233,  -233
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       4,     1,     6,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5
};

static const yytype_int16 yycheck[] =
{
     206,    77,     0,   235,    78,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,   237,   238,   206,   235,     0,   235,    78,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   236,   237,   238,   238
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     4
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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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

#line 1371 "htmlcompact.tab.c"

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
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 703 "htmlcompact.y"

void yyerror(const char *s) {
  cout << "EEW, parse error!  Message: " << s << endl;
  // exit:
  exit(-1);
}

