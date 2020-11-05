/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HTMLCOMPACT_TAB_H_INCLUDED
# define YY_YY_HTMLCOMPACT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    opena = 258,                   /* opena  */
    closea = 259,                  /* closea  */
    openabbr = 260,                /* openabbr  */
    closeabbr = 261,               /* closeabbr  */
    openacronym = 262,             /* openacronym  */
    closeacronym = 263,            /* closeacronym  */
    openaddress = 264,             /* openaddress  */
    closeaddress = 265,            /* closeaddress  */
    openapplet = 266,              /* openapplet  */
    closeapplet = 267,             /* closeapplet  */
    openarea = 268,                /* openarea  */
    closearea = 269,               /* closearea  */
    openb = 270,                   /* openb  */
    closeb = 271,                  /* closeb  */
    openbase = 272,                /* openbase  */
    closebase = 273,               /* closebase  */
    openbasefont = 274,            /* openbasefont  */
    closebasefont = 275,           /* closebasefont  */
    openbdo = 276,                 /* openbdo  */
    closebdo = 277,                /* closebdo  */
    openbig = 278,                 /* openbig  */
    closebig = 279,                /* closebig  */
    openblockquote = 280,          /* openblockquote  */
    closeblockquote = 281,         /* closeblockquote  */
    openbody = 282,                /* openbody  */
    closebody = 283,               /* closebody  */
    openbr = 284,                  /* openbr  */
    closebr = 285,                 /* closebr  */
    openbutton = 286,              /* openbutton  */
    closebutton = 287,             /* closebutton  */
    opencaption = 288,             /* opencaption  */
    closecaption = 289,            /* closecaption  */
    opencenter = 290,              /* opencenter  */
    closecenter = 291,             /* closecenter  */
    opencite = 292,                /* opencite  */
    closecite = 293,               /* closecite  */
    opencode = 294,                /* opencode  */
    closecode = 295,               /* closecode  */
    opencol = 296,                 /* opencol  */
    closecol = 297,                /* closecol  */
    opencolgroup = 298,            /* opencolgroup  */
    closecolgroup = 299,           /* closecolgroup  */
    opendd = 300,                  /* opendd  */
    closedd = 301,                 /* closedd  */
    opendel = 302,                 /* opendel  */
    closedel = 303,                /* closedel  */
    opendfn = 304,                 /* opendfn  */
    closedfn = 305,                /* closedfn  */
    opendir = 306,                 /* opendir  */
    closedir = 307,                /* closedir  */
    opendiv = 308,                 /* opendiv  */
    closediv = 309,                /* closediv  */
    opendl = 310,                  /* opendl  */
    closedl = 311,                 /* closedl  */
    opendt = 312,                  /* opendt  */
    closedt = 313,                 /* closedt  */
    openem = 314,                  /* openem  */
    closeem = 315,                 /* closeem  */
    openfieldset = 316,            /* openfieldset  */
    closefieldset = 317,           /* closefieldset  */
    openfont = 318,                /* openfont  */
    closefont = 319,               /* closefont  */
    openform = 320,                /* openform  */
    closeform = 321,               /* closeform  */
    openframe = 322,               /* openframe  */
    closeframe = 323,              /* closeframe  */
    openframeset = 324,            /* openframeset  */
    closeframeset = 325,           /* closeframeset  */
    openhead = 326,                /* openhead  */
    closehead = 327,               /* closehead  */
    openhn = 328,                  /* openhn  */
    closehn = 329,                 /* closehn  */
    openhr = 330,                  /* openhr  */
    closehr = 331,                 /* closehr  */
    openhtml = 332,                /* openhtml  */
    closehtml = 333,               /* closehtml  */
    openi = 334,                   /* openi  */
    closei = 335,                  /* closei  */
    openiframe = 336,              /* openiframe  */
    closeiframe = 337,             /* closeiframe  */
    openimg = 338,                 /* openimg  */
    closeimg = 339,                /* closeimg  */
    openinput = 340,               /* openinput  */
    closeinput = 341,              /* closeinput  */
    openins = 342,                 /* openins  */
    closeins = 343,                /* closeins  */
    openisindex = 344,             /* openisindex  */
    closeisindex = 345,            /* closeisindex  */
    openkbd = 346,                 /* openkbd  */
    closekbd = 347,                /* closekbd  */
    openlabel = 348,               /* openlabel  */
    closelabel = 349,              /* closelabel  */
    openlegend = 350,              /* openlegend  */
    closelegend = 351,             /* closelegend  */
    openli = 352,                  /* openli  */
    closeli = 353,                 /* closeli  */
    openlink = 354,                /* openlink  */
    closelink = 355,               /* closelink  */
    openlisting = 356,             /* openlisting  */
    closelisting = 357,            /* closelisting  */
    openmap = 358,                 /* openmap  */
    closemap = 359,                /* closemap  */
    openmenu = 360,                /* openmenu  */
    closemenu = 361,               /* closemenu  */
    openmeta = 362,                /* openmeta  */
    closemeta = 363,               /* closemeta  */
    opennextid = 364,              /* opennextid  */
    closenextid = 365,             /* closenextid  */
    opennoframes = 366,            /* opennoframes  */
    closenoframes = 367,           /* closenoframes  */
    opennoscript = 368,            /* opennoscript  */
    closenoscript = 369,           /* closenoscript  */
    openobject = 370,              /* openobject  */
    closeobject = 371,             /* closeobject  */
    openol = 372,                  /* openol  */
    closeol = 373,                 /* closeol  */
    openoptgroup = 374,            /* openoptgroup  */
    closeoptgroup = 375,           /* closeoptgroup  */
    openoption = 376,              /* openoption  */
    closeoption = 377,             /* closeoption  */
    openp = 378,                   /* openp  */
    closep = 379,                  /* closep  */
    openparam = 380,               /* openparam  */
    closeparam = 381,              /* closeparam  */
    openplaintext = 382,           /* openplaintext  */
    closeplaintext = 383,          /* closeplaintext  */
    openpre = 384,                 /* openpre  */
    openq = 385,                   /* openq  */
    closeq = 386,                  /* closeq  */
    sopen = 387,                   /* sopen  */
    sclose = 388,                  /* sclose  */
    sampopen = 389,                /* sampopen  */
    sampclose = 390,               /* sampclose  */
    scriptopen = 391,              /* scriptopen  */
    scriptclose = 392,             /* scriptclose  */
    selectopen = 393,              /* selectopen  */
    selectclose = 394,             /* selectclose  */
    smallopen = 395,               /* smallopen  */
    smallclose = 396,              /* smallclose  */
    spanopen = 397,                /* spanopen  */
    spanclose = 398,               /* spanclose  */
    strikeopen = 399,              /* strikeopen  */
    strikeclose = 400,             /* strikeclose  */
    strongopen = 401,              /* strongopen  */
    strongclose = 402,             /* strongclose  */
    styleopen = 403,               /* styleopen  */
    styleclose = 404,              /* styleclose  */
    subopen = 405,                 /* subopen  */
    subclose = 406,                /* subclose  */
    supopen = 407,                 /* supopen  */
    supclose = 408,                /* supclose  */
    tableopen = 409,               /* tableopen  */
    tableclose = 410,              /* tableclose  */
    tbodyopen = 411,               /* tbodyopen  */
    tbodyclose = 412,              /* tbodyclose  */
    tdopen = 413,                  /* tdopen  */
    tdclose = 414,                 /* tdclose  */
    textareaopen = 415,            /* textareaopen  */
    textareaclose = 416,           /* textareaclose  */
    tfootopen = 417,               /* tfootopen  */
    tfootclose = 418,              /* tfootclose  */
    thopen = 419,                  /* thopen  */
    thclose = 420,                 /* thclose  */
    theadopen = 421,               /* theadopen  */
    theadclose = 422,              /* theadclose  */
    titleopen = 423,               /* titleopen  */
    titleclose = 424,              /* titleclose  */
    tropen = 425,                  /* tropen  */
    trclose = 426,                 /* trclose  */
    ttopen = 427,                  /* ttopen  */
    ttclose = 428,                 /* ttclose  */
    uopen = 429,                   /* uopen  */
    uclose = 430,                  /* uclose  */
    ulopen = 431,                  /* ulopen  */
    ulclose = 432,                 /* ulclose  */
    varopen = 433,                 /* varopen  */
    varclose = 434,                /* varclose  */
    xmpopen = 435,                 /* xmpopen  */
    xmpclose = 436,                /* xmpclose  */
    closepre = 437,                /* closepre  */
    NAME = 438,                    /* NAME  */
    HREF = 439,                    /* HREF  */
    REL = 440,                     /* REL  */
    REV = 441,                     /* REV  */
    METHODS = 442,                 /* METHODS  */
    SHAPE = 443,                   /* SHAPE  */
    COORDS = 444,                  /* COORDS  */
    NOHREF = 445,                  /* NOHREF  */
    SIZE = 446,                    /* SIZE  */
    BGCOLOR = 447,                 /* BGCOLOR  */
    BACKGROUND = 448,              /* BACKGROUND  */
    TEXT = 449,                    /* TEXT  */
    LINK = 450,                    /* LINK  */
    VLINK = 451,                   /* VLINK  */
    ALINK = 452,                   /* ALINK  */
    CLEAR = 453,                   /* CLEAR  */
    COMPACT = 454,                 /* COMPACT  */
    ALIGN = 455,                   /* ALIGN  */
    COLOR = 456,                   /* COLOR  */
    ACTION = 457,                  /* ACTION  */
    ENCTYPE = 458,                 /* ENCTYPE  */
    WIDTH = 459,                   /* WIDTH  */
    NOSHADE = 460,                 /* NOSHADE  */
    VERSION = 461,                 /* VERSION  */
    SRC = 462,                     /* SRC  */
    HEIGHT = 463,                  /* HEIGHT  */
    VSPACE = 464,                  /* VSPACE  */
    ALT = 465,                     /* ALT  */
    BORDER = 466,                  /* BORDER  */
    USEMAP = 467,                  /* USEMAP  */
    ISMAP = 468,                   /* ISMAP  */
    TYPE = 469,                    /* TYPE  */
    MAXLENGTH = 470,               /* MAXLENGTH  */
    VALUE = 471,                   /* VALUE  */
    CHECKED = 472,                 /* CHECKED  */
    PROMPT = 473,                  /* PROMPT  */
    URN = 474,                     /* URN  */
    TITLE = 475,                   /* TITLE  */
    ID = 476,                      /* ID  */
    HTTP_EQUIV = 477,              /* HTTP_EQUIV  */
    CONTENT = 478,                 /* CONTENT  */
    N = 479,                       /* N  */
    START = 480,                   /* START  */
    SELECTED = 481,                /* SELECTED  */
    MULTIPLE = 482,                /* MULTIPLE  */
    CELLSPACING = 483,             /* CELLSPACING  */
    CELLPADDING = 484,             /* CELLPADDING  */
    ROWSPAN = 485,                 /* ROWSPAN  */
    COLSPAN = 486,                 /* COLSPAN  */
    NOWRAP = 487,                  /* NOWRAP  */
    opens = 488,                   /* opens  */
    closes = 489,                  /* closes  */
    Content = 490                  /* Content  */
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

#endif /* !YY_YY_HTMLCOMPACT_TAB_H_INCLUDED  */
