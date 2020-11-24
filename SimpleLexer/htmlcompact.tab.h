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
    ENDTAG = 258,                  /* ENDTAG  */
    ABBROPEN = 259,                /* ABBROPEN  */
    ABBRCLOSE = 260,               /* ABBRCLOSE  */
    ACRONYMOPEN = 261,             /* ACRONYMOPEN  */
    ACRONYMCLOSE = 262,            /* ACRONYMCLOSE  */
    ADDRESSOPEN = 263,             /* ADDRESSOPEN  */
    ADDRESSCLOSE = 264,            /* ADDRESSCLOSE  */
    APPLETOPEN = 265,              /* APPLETOPEN  */
    APPLETCLOSE = 266,             /* APPLETCLOSE  */
    AREAOPEN = 267,                /* AREAOPEN  */
    AREACLOSE = 268,               /* AREACLOSE  */
    BASEOPEN = 269,                /* BASEOPEN  */
    BASECLOSE = 270,               /* BASECLOSE  */
    BASEFONTOPEN = 271,            /* BASEFONTOPEN  */
    BASEFONTCLOSE = 272,           /* BASEFONTCLOSE  */
    BDOOPEN = 273,                 /* BDOOPEN  */
    BDOCLOSE = 274,                /* BDOCLOSE  */
    BIGOPEN = 275,                 /* BIGOPEN  */
    BIGCLOSE = 276,                /* BIGCLOSE  */
    BODYOPEN = 277,                /* BODYOPEN  */
    BODYCLOSE = 278,               /* BODYCLOSE  */
    BLOCKQUOTEOPEN = 279,          /* BLOCKQUOTEOPEN  */
    BLOCKQUOTECLOSE = 280,         /* BLOCKQUOTECLOSE  */
    BUTTONOPEN = 281,              /* BUTTONOPEN  */
    BUTTONCLOSE = 282,             /* BUTTONCLOSE  */
    CAPTIONOPEN = 283,             /* CAPTIONOPEN  */
    CAPTIONCLOSE = 284,            /* CAPTIONCLOSE  */
    CODEOPEN = 285,                /* CODEOPEN  */
    CODECLOSE = 286,               /* CODECLOSE  */
    COLOPEN = 287,                 /* COLOPEN  */
    COLCLOSE = 288,                /* COLCLOSE  */
    COLGROUPOPEN = 289,            /* COLGROUPOPEN  */
    COLGROUPCLOSE = 290,           /* COLGROUPCLOSE  */
    DDOPEN = 291,                  /* DDOPEN  */
    DDCLOSE = 292,                 /* DDCLOSE  */
    DELOPEN = 293,                 /* DELOPEN  */
    DELCLOSE = 294,                /* DELCLOSE  */
    DFNOPEN = 295,                 /* DFNOPEN  */
    DFNCLOSE = 296,                /* DFNCLOSE  */
    DIROPEN = 297,                 /* DIROPEN  */
    DIRCLOSE = 298,                /* DIRCLOSE  */
    DIVOPEN = 299,                 /* DIVOPEN  */
    DIVCLOSE = 300,                /* DIVCLOSE  */
    DLOPEN = 301,                  /* DLOPEN  */
    DLCLOSE = 302,                 /* DLCLOSE  */
    DTOPEN = 303,                  /* DTOPEN  */
    DTCLOSE = 304,                 /* DTCLOSE  */
    EMOPEN = 305,                  /* EMOPEN  */
    EMCLOSE = 306,                 /* EMCLOSE  */
    FIELDSETOPEN = 307,            /* FIELDSETOPEN  */
    FIELDSETCLOSE = 308,           /* FIELDSETCLOSE  */
    FRAMEOPEN = 309,               /* FRAMEOPEN  */
    FRAMECLOSE = 310,              /* FRAMECLOSE  */
    FRAMESETOPEN = 311,            /* FRAMESETOPEN  */
    FRAMESETCLOSE = 312,           /* FRAMESETCLOSE  */
    NOFRAMESOPEN = 313,            /* NOFRAMESOPEN  */
    NOFRAMESCLOSE = 314,           /* NOFRAMESCLOSE  */
    FORMOPEN = 315,                /* FORMOPEN  */
    FORMCLOSE = 316,               /* FORMCLOSE  */
    HEADOPEN = 317,                /* HEADOPEN  */
    HEADCLOSE = 318,               /* HEADCLOSE  */
    HNOPEN = 319,                  /* HNOPEN  */
    HNCLOSE = 320,                 /* HNCLOSE  */
    HTMLOPEN = 321,                /* HTMLOPEN  */
    HTMLCLOSE = 322,               /* HTMLCLOSE  */
    INPUTOPEN = 323,               /* INPUTOPEN  */
    INPUTCLOSE = 324,              /* INPUTCLOSE  */
    IFRAMEOPEN = 325,              /* IFRAMEOPEN  */
    IFRAMECLOSE = 326,             /* IFRAMECLOSE  */
    INSOPEN = 327,                 /* INSOPEN  */
    INSCLOSE = 328,                /* INSCLOSE  */
    KBDOPEN = 329,                 /* KBDOPEN  */
    KBDCLOSE = 330,                /* KBDCLOSE  */
    LABELOPEN = 331,               /* LABELOPEN  */
    LABELCLOSE = 332,              /* LABELCLOSE  */
    LEGENDOPEN = 333,              /* LEGENDOPEN  */
    LEGENDCLOSE = 334,             /* LEGENDCLOSE  */
    LISTINGOPEN = 335,             /* LISTINGOPEN  */
    LISTINGCLOSE = 336,            /* LISTINGCLOSE  */
    MAPOPEN = 337,                 /* MAPOPEN  */
    MAPCLOSE = 338,                /* MAPCLOSE  */
    MENUOPEN = 339,                /* MENUOPEN  */
    MENUCLOSE = 340,               /* MENUCLOSE  */
    METAOPEN = 341,                /* METAOPEN  */
    METACLOSE = 342,               /* METACLOSE  */
    NEXTIDOPEN = 343,              /* NEXTIDOPEN  */
    NEXTIDCLOSE = 344,             /* NEXTIDCLOSE  */
    NOSCRIPTOPEN = 345,            /* NOSCRIPTOPEN  */
    NOSCRIPTCLOSE = 346,           /* NOSCRIPTCLOSE  */
    SELECTOPEN = 347,              /* SELECTOPEN  */
    SELECTCLOSE = 348,             /* SELECTCLOSE  */
    OPTIONOPEN = 349,              /* OPTIONOPEN  */
    OPTIONCLOSE = 350,             /* OPTIONCLOSE  */
    OBJECTOPEN = 351,              /* OBJECTOPEN  */
    OBJECTCLOSE = 352,             /* OBJECTCLOSE  */
    OPTGROUPOPEN = 353,            /* OPTGROUPOPEN  */
    OPTGROUPCLOSE = 354,           /* OPTGROUPCLOSE  */
    PARAMOPEN = 355,               /* PARAMOPEN  */
    PARAMCLOSE = 356,              /* PARAMCLOSE  */
    PLAINTEXTOPEN = 357,           /* PLAINTEXTOPEN  */
    PLAINTEXTCLOSE = 358,          /* PLAINTEXTCLOSE  */
    PREOPEN = 359,                 /* PREOPEN  */
    PRECLOSE = 360,                /* PRECLOSE  */
    QOPEN = 361,                   /* QOPEN  */
    QCLOSE = 362,                  /* QCLOSE  */
    SOPEN = 363,                   /* SOPEN  */
    SCLOSE = 364,                  /* SCLOSE  */
    SAMPOPEN = 365,                /* SAMPOPEN  */
    SAMPCLOSE = 366,               /* SAMPCLOSE  */
    SCRIPTOPEN = 367,              /* SCRIPTOPEN  */
    SCRIPTCLOSE = 368,             /* SCRIPTCLOSE  */
    SPANOPEN = 369,                /* SPANOPEN  */
    SPANCLOSE = 370,               /* SPANCLOSE  */
    STRIKEOPEN = 371,              /* STRIKEOPEN  */
    STRIKECLOSE = 372,             /* STRIKECLOSE  */
    STRONGOPEN = 373,              /* STRONGOPEN  */
    STRONGCLOSE = 374,             /* STRONGCLOSE  */
    STYLEOPEN = 375,               /* STYLEOPEN  */
    STYLECLOSE = 376,              /* STYLECLOSE  */
    TABLEOPEN = 377,               /* TABLEOPEN  */
    TABLECLOSE = 378,              /* TABLECLOSE  */
    TROPEN = 379,                  /* TROPEN  */
    TRCLOSE = 380,                 /* TRCLOSE  */
    TDOPEN = 381,                  /* TDOPEN  */
    TDCLOSE = 382,                 /* TDCLOSE  */
    THOPEN = 383,                  /* THOPEN  */
    THCLOSE = 384,                 /* THCLOSE  */
    THEADOPEN = 385,               /* THEADOPEN  */
    THEADCLOSE = 386,              /* THEADCLOSE  */
    TBODYOPEN = 387,               /* TBODYOPEN  */
    TBODYCLOSE = 388,              /* TBODYCLOSE  */
    TEXTAREAOPEN = 389,            /* TEXTAREAOPEN  */
    TEXTAREACLOSE = 390,           /* TEXTAREACLOSE  */
    TFOOTOPEN = 391,               /* TFOOTOPEN  */
    TFOOTCLOSE = 392,              /* TFOOTCLOSE  */
    TITLEOPEN = 393,               /* TITLEOPEN  */
    TITLECLOSE = 394,              /* TITLECLOSE  */
    TTOPEN = 395,                  /* TTOPEN  */
    TTCLOSE = 396,                 /* TTCLOSE  */
    IMGOPEN = 397,                 /* IMGOPEN  */
    IMGCLOSE = 398,                /* IMGCLOSE  */
    AOPEN = 399,                   /* AOPEN  */
    ACLOSE = 400,                  /* ACLOSE  */
    LINKOPEN = 401,                /* LINKOPEN  */
    LINKCLOSE = 402,               /* LINKCLOSE  */
    ULOPEN = 403,                  /* ULOPEN  */
    ULCLOSE = 404,                 /* ULCLOSE  */
    LIOPEN = 405,                  /* LIOPEN  */
    LICLOSE = 406,                 /* LICLOSE  */
    OLOPEN = 407,                  /* OLOPEN  */
    OLCLOSE = 408,                 /* OLCLOSE  */
    POPEN = 409,                   /* POPEN  */
    PCLOSE = 410,                  /* PCLOSE  */
    IOPEN = 411,                   /* IOPEN  */
    ICLOSE = 412,                  /* ICLOSE  */
    UOPEN = 413,                   /* UOPEN  */
    UCLOSE = 414,                  /* UCLOSE  */
    SMALLOPEN = 415,               /* SMALLOPEN  */
    SMALLCLOSE = 416,              /* SMALLCLOSE  */
    SUPOPEN = 417,                 /* SUPOPEN  */
    SUPCLOSE = 418,                /* SUPCLOSE  */
    SUBOPEN = 419,                 /* SUBOPEN  */
    SUBCLOSE = 420,                /* SUBCLOSE  */
    CENTEROPEN = 421,              /* CENTEROPEN  */
    CENTERCLOSE = 422,             /* CENTERCLOSE  */
    FONTOPEN = 423,                /* FONTOPEN  */
    FONTCLOSE = 424,               /* FONTCLOSE  */
    HROPEN = 425,                  /* HROPEN  */
    HRCLOSE = 426,                 /* HRCLOSE  */
    BROPEN = 427,                  /* BROPEN  */
    BRCLOSE = 428,                 /* BRCLOSE  */
    NAME = 429,                    /* NAME  */
    HREF = 430,                    /* HREF  */
    REL = 431,                     /* REL  */
    REV = 432,                     /* REV  */
    TITLE = 433,                   /* TITLE  */
    URN = 434,                     /* URN  */
    METHODS = 435,                 /* METHODS  */
    SHAPE = 436,                   /* SHAPE  */
    COORDS = 437,                  /* COORDS  */
    ALT = 438,                     /* ALT  */
    NOHREF = 439,                  /* NOHREF  */
    BGCOLOR = 440,                 /* BGCOLOR  */
    BACKGROUND = 441,              /* BACKGROUND  */
    TEXT = 442,                    /* TEXT  */
    LINK = 443,                    /* LINK  */
    VLINK = 444,                   /* VLINK  */
    ALINK = 445,                   /* ALINK  */
    CLEAR = 446,                   /* CLEAR  */
    COMPACT = 447,                 /* COMPACT  */
    ALIGN = 448,                   /* ALIGN  */
    SIZE = 449,                    /* SIZE  */
    COLOR = 450,                   /* COLOR  */
    ACTION = 451,                  /* ACTION  */
    ENCTYPE = 452,                 /* ENCTYPE  */
    WIDTH = 453,                   /* WIDTH  */
    NOSHADE = 454,                 /* NOSHADE  */
    VERSION = 455,                 /* VERSION  */
    SRC = 456,                     /* SRC  */
    HEIGHT = 457,                  /* HEIGHT  */
    VSPACE = 458,                  /* VSPACE  */
    BORDER = 459,                  /* BORDER  */
    USEMAP = 460,                  /* USEMAP  */
    ISMAP = 461,                   /* ISMAP  */
    TYPE = 462,                    /* TYPE  */
    MAXLENGTH = 463,               /* MAXLENGTH  */
    VALUE = 464,                   /* VALUE  */
    CHECKED = 465,                 /* CHECKED  */
    PROMPT = 466,                  /* PROMPT  */
    ID = 467,                      /* ID  */
    HTTP_EQUIV = 468,              /* HTTP_EQUIV  */
    CONTENT = 469,                 /* CONTENT  */
    N = 470,                       /* N  */
    START = 471,                   /* START  */
    SELECTED = 472,                /* SELECTED  */
    MULTIPLE = 473,                /* MULTIPLE  */
    CELLSPACING = 474,             /* CELLSPACING  */
    CELLPADDING = 475,             /* CELLPADDING  */
    ROWSPAN = 476,                 /* ROWSPAN  */
    COLSPAN = 477,                 /* COLSPAN  */
    NOWRAP = 478,                  /* NOWRAP  */
    IDENTIFIER = 479,              /* IDENTIFIER  */
    END_OF_INSTRUCTION = 480,      /* END_OF_INSTRUCTION  */
    BOPEN = 481,                   /* BOPEN  */
    BCLOSE = 482,                  /* BCLOSE  */
    VALIGN = 483                   /* VALIGN  */
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
