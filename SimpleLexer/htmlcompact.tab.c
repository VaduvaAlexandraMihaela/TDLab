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

 #include "stdio.h"
 int yyerror(char * s);
 extern int yylex(void);

#line 77 "htmlcompact.tab.c"

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
  YYSYMBOL_ENDTAG = 3,                     /* ENDTAG  */
  YYSYMBOL_ABBROPEN = 4,                   /* ABBROPEN  */
  YYSYMBOL_ABBRCLOSE = 5,                  /* ABBRCLOSE  */
  YYSYMBOL_ACRONYMOPEN = 6,                /* ACRONYMOPEN  */
  YYSYMBOL_ACROBYMCLOSE = 7,               /* ACROBYMCLOSE  */
  YYSYMBOL_ADDRESSOPEN = 8,                /* ADDRESSOPEN  */
  YYSYMBOL_ADDRESSCLOSE = 9,               /* ADDRESSCLOSE  */
  YYSYMBOL_APPLETOPEN = 10,                /* APPLETOPEN  */
  YYSYMBOL_APPLETCLOSE = 11,               /* APPLETCLOSE  */
  YYSYMBOL_AREAOPEN = 12,                  /* AREAOPEN  */
  YYSYMBOL_AREACLOSE = 13,                 /* AREACLOSE  */
  YYSYMBOL_BASEOPEN = 14,                  /* BASEOPEN  */
  YYSYMBOL_BASECLOSE = 15,                 /* BASECLOSE  */
  YYSYMBOL_BASEFONTOPEN = 16,              /* BASEFONTOPEN  */
  YYSYMBOL_BASEFONTCLOSE = 17,             /* BASEFONTCLOSE  */
  YYSYMBOL_BDOOPEN = 18,                   /* BDOOPEN  */
  YYSYMBOL_BDOCLOSE = 19,                  /* BDOCLOSE  */
  YYSYMBOL_BIGOPEN = 20,                   /* BIGOPEN  */
  YYSYMBOL_BIGCLOSE = 21,                  /* BIGCLOSE  */
  YYSYMBOL_BODYOPEN = 22,                  /* BODYOPEN  */
  YYSYMBOL_BODYCLOSE = 23,                 /* BODYCLOSE  */
  YYSYMBOL_BLOCKQUOTEOPEN = 24,            /* BLOCKQUOTEOPEN  */
  YYSYMBOL_BLOCKQUOTECLOSE = 25,           /* BLOCKQUOTECLOSE  */
  YYSYMBOL_BUTTONOPEN = 26,                /* BUTTONOPEN  */
  YYSYMBOL_BUTTONCLOSE = 27,               /* BUTTONCLOSE  */
  YYSYMBOL_CAPTIONOPEN = 28,               /* CAPTIONOPEN  */
  YYSYMBOL_CAPTIONCLOSE = 29,              /* CAPTIONCLOSE  */
  YYSYMBOL_CODEOPEN = 30,                  /* CODEOPEN  */
  YYSYMBOL_CODECLOSE = 31,                 /* CODECLOSE  */
  YYSYMBOL_COLOPEN = 32,                   /* COLOPEN  */
  YYSYMBOL_COLCLOSE = 33,                  /* COLCLOSE  */
  YYSYMBOL_COLGROUPOPEN = 34,              /* COLGROUPOPEN  */
  YYSYMBOL_COLGROUPCLOSE = 35,             /* COLGROUPCLOSE  */
  YYSYMBOL_DDOPEN = 36,                    /* DDOPEN  */
  YYSYMBOL_DDCLOSE = 37,                   /* DDCLOSE  */
  YYSYMBOL_DELOPEN = 38,                   /* DELOPEN  */
  YYSYMBOL_DELCLOSE = 39,                  /* DELCLOSE  */
  YYSYMBOL_DFNOPEN = 40,                   /* DFNOPEN  */
  YYSYMBOL_DFNCLOSE = 41,                  /* DFNCLOSE  */
  YYSYMBOL_DIROPEN = 42,                   /* DIROPEN  */
  YYSYMBOL_DIRCLOSE = 43,                  /* DIRCLOSE  */
  YYSYMBOL_DIVOPEN = 44,                   /* DIVOPEN  */
  YYSYMBOL_DIVCLOSE = 45,                  /* DIVCLOSE  */
  YYSYMBOL_DLOPEN = 46,                    /* DLOPEN  */
  YYSYMBOL_DLCLOSE = 47,                   /* DLCLOSE  */
  YYSYMBOL_DTOPEN = 48,                    /* DTOPEN  */
  YYSYMBOL_DTCLOSE = 49,                   /* DTCLOSE  */
  YYSYMBOL_EMOPEN = 50,                    /* EMOPEN  */
  YYSYMBOL_EMCLOSE = 51,                   /* EMCLOSE  */
  YYSYMBOL_FIELDSETOPEN = 52,              /* FIELDSETOPEN  */
  YYSYMBOL_FIELDSETCLOSE = 53,             /* FIELDSETCLOSE  */
  YYSYMBOL_FRAMEOPEN = 54,                 /* FRAMEOPEN  */
  YYSYMBOL_FRAMECLOSE = 55,                /* FRAMECLOSE  */
  YYSYMBOL_FRAMESETOPEN = 56,              /* FRAMESETOPEN  */
  YYSYMBOL_FRAMESETCLOSE = 57,             /* FRAMESETCLOSE  */
  YYSYMBOL_NOFRAMESOPEN = 58,              /* NOFRAMESOPEN  */
  YYSYMBOL_NOFRAMESCLOSE = 59,             /* NOFRAMESCLOSE  */
  YYSYMBOL_FORMOPEN = 60,                  /* FORMOPEN  */
  YYSYMBOL_FORMCLOSE = 61,                 /* FORMCLOSE  */
  YYSYMBOL_HEADOPEN = 62,                  /* HEADOPEN  */
  YYSYMBOL_HEADCLOSE = 63,                 /* HEADCLOSE  */
  YYSYMBOL_HNOPEN = 64,                    /* HNOPEN  */
  YYSYMBOL_HNCLOSE = 65,                   /* HNCLOSE  */
  YYSYMBOL_HTMLOPEN = 66,                  /* HTMLOPEN  */
  YYSYMBOL_HTMLCLOSE = 67,                 /* HTMLCLOSE  */
  YYSYMBOL_INPUTOPEN = 68,                 /* INPUTOPEN  */
  YYSYMBOL_INPUTCLOSE = 69,                /* INPUTCLOSE  */
  YYSYMBOL_IFRAMEOPEN = 70,                /* IFRAMEOPEN  */
  YYSYMBOL_IFRAMECLOSE = 71,               /* IFRAMECLOSE  */
  YYSYMBOL_INSOPEN = 72,                   /* INSOPEN  */
  YYSYMBOL_INSCLOSE = 73,                  /* INSCLOSE  */
  YYSYMBOL_KBDOPEN = 74,                   /* KBDOPEN  */
  YYSYMBOL_KBDCLOSE = 75,                  /* KBDCLOSE  */
  YYSYMBOL_LABELOPEN = 76,                 /* LABELOPEN  */
  YYSYMBOL_LABELCLOSE = 77,                /* LABELCLOSE  */
  YYSYMBOL_LEGENDOPEN = 78,                /* LEGENDOPEN  */
  YYSYMBOL_LEGENDCLOSE = 79,               /* LEGENDCLOSE  */
  YYSYMBOL_LISTINGOPEN = 80,               /* LISTINGOPEN  */
  YYSYMBOL_LISTINGCLOSE = 81,              /* LISTINGCLOSE  */
  YYSYMBOL_MAPOPEN = 82,                   /* MAPOPEN  */
  YYSYMBOL_MAPCLOSE = 83,                  /* MAPCLOSE  */
  YYSYMBOL_MENUOPEN = 84,                  /* MENUOPEN  */
  YYSYMBOL_MENUCLOSE = 85,                 /* MENUCLOSE  */
  YYSYMBOL_METAOPEN = 86,                  /* METAOPEN  */
  YYSYMBOL_METACLOSE = 87,                 /* METACLOSE  */
  YYSYMBOL_NEXTIDOPEN = 88,                /* NEXTIDOPEN  */
  YYSYMBOL_NEXTIDCLOSE = 89,               /* NEXTIDCLOSE  */
  YYSYMBOL_NOSCRIPTOPEN = 90,              /* NOSCRIPTOPEN  */
  YYSYMBOL_NOSCRIPTCLOSE = 91,             /* NOSCRIPTCLOSE  */
  YYSYMBOL_SELECTOPEN = 92,                /* SELECTOPEN  */
  YYSYMBOL_SELECTCLOSE = 93,               /* SELECTCLOSE  */
  YYSYMBOL_OPTIONOPEN = 94,                /* OPTIONOPEN  */
  YYSYMBOL_OPTIONCLOSE = 95,               /* OPTIONCLOSE  */
  YYSYMBOL_OBJECTOPEN = 96,                /* OBJECTOPEN  */
  YYSYMBOL_OBJECTCLOSE = 97,               /* OBJECTCLOSE  */
  YYSYMBOL_OPTGROUPOPEN = 98,              /* OPTGROUPOPEN  */
  YYSYMBOL_OPTGROUPCLOSE = 99,             /* OPTGROUPCLOSE  */
  YYSYMBOL_PARAMOPEN = 100,                /* PARAMOPEN  */
  YYSYMBOL_PARAMCLOSE = 101,               /* PARAMCLOSE  */
  YYSYMBOL_PLAINTEXTOPEN = 102,            /* PLAINTEXTOPEN  */
  YYSYMBOL_PLAINTEXTCLOSE = 103,           /* PLAINTEXTCLOSE  */
  YYSYMBOL_PREOPEN = 104,                  /* PREOPEN  */
  YYSYMBOL_PRECLOSE = 105,                 /* PRECLOSE  */
  YYSYMBOL_QOPEN = 106,                    /* QOPEN  */
  YYSYMBOL_QCLOSE = 107,                   /* QCLOSE  */
  YYSYMBOL_SOPEN = 108,                    /* SOPEN  */
  YYSYMBOL_SCLOSE = 109,                   /* SCLOSE  */
  YYSYMBOL_SAMPOPEN = 110,                 /* SAMPOPEN  */
  YYSYMBOL_SAMPCLOSE = 111,                /* SAMPCLOSE  */
  YYSYMBOL_SCRIPTOPEN = 112,               /* SCRIPTOPEN  */
  YYSYMBOL_SCRIPTCLOSE = 113,              /* SCRIPTCLOSE  */
  YYSYMBOL_SPANOPEN = 114,                 /* SPANOPEN  */
  YYSYMBOL_SPANCLOSE = 115,                /* SPANCLOSE  */
  YYSYMBOL_STRIKEOPEN = 116,               /* STRIKEOPEN  */
  YYSYMBOL_STRIKECLOSE = 117,              /* STRIKECLOSE  */
  YYSYMBOL_STRONGOPEN = 118,               /* STRONGOPEN  */
  YYSYMBOL_STRONGCLOSE = 119,              /* STRONGCLOSE  */
  YYSYMBOL_STYLEOPEN = 120,                /* STYLEOPEN  */
  YYSYMBOL_STYLECLOSE = 121,               /* STYLECLOSE  */
  YYSYMBOL_TABLEOPEN = 122,                /* TABLEOPEN  */
  YYSYMBOL_TABLECLOSE = 123,               /* TABLECLOSE  */
  YYSYMBOL_TROPEN = 124,                   /* TROPEN  */
  YYSYMBOL_TRCLOSE = 125,                  /* TRCLOSE  */
  YYSYMBOL_TDOPEN = 126,                   /* TDOPEN  */
  YYSYMBOL_TDCLOSE = 127,                  /* TDCLOSE  */
  YYSYMBOL_THOPEN = 128,                   /* THOPEN  */
  YYSYMBOL_THCLOSE = 129,                  /* THCLOSE  */
  YYSYMBOL_THEADOPEN = 130,                /* THEADOPEN  */
  YYSYMBOL_THEADCLOSE = 131,               /* THEADCLOSE  */
  YYSYMBOL_TBODYOPEN = 132,                /* TBODYOPEN  */
  YYSYMBOL_TBODYCLOSE = 133,               /* TBODYCLOSE  */
  YYSYMBOL_TEXTAREAOPEN = 134,             /* TEXTAREAOPEN  */
  YYSYMBOL_TEXTAREACLOSE = 135,            /* TEXTAREACLOSE  */
  YYSYMBOL_TFOOTOPEN = 136,                /* TFOOTOPEN  */
  YYSYMBOL_TFOOTCLOSE = 137,               /* TFOOTCLOSE  */
  YYSYMBOL_TITLEOPEN = 138,                /* TITLEOPEN  */
  YYSYMBOL_TITLECLOSE = 139,               /* TITLECLOSE  */
  YYSYMBOL_TTOPEN = 140,                   /* TTOPEN  */
  YYSYMBOL_TTCLOSE = 141,                  /* TTCLOSE  */
  YYSYMBOL_IMGOPEN = 142,                  /* IMGOPEN  */
  YYSYMBOL_IMGCLOSE = 143,                 /* IMGCLOSE  */
  YYSYMBOL_AOPEN = 144,                    /* AOPEN  */
  YYSYMBOL_ACLOSE = 145,                   /* ACLOSE  */
  YYSYMBOL_LINKOPEN = 146,                 /* LINKOPEN  */
  YYSYMBOL_LINKCLOSE = 147,                /* LINKCLOSE  */
  YYSYMBOL_ULOPEN = 148,                   /* ULOPEN  */
  YYSYMBOL_ULCLOSE = 149,                  /* ULCLOSE  */
  YYSYMBOL_LIOPEN = 150,                   /* LIOPEN  */
  YYSYMBOL_LICLOSE = 151,                  /* LICLOSE  */
  YYSYMBOL_OLOPEN = 152,                   /* OLOPEN  */
  YYSYMBOL_OLCLOSE = 153,                  /* OLCLOSE  */
  YYSYMBOL_POPEN = 154,                    /* POPEN  */
  YYSYMBOL_PCLOSE = 155,                   /* PCLOSE  */
  YYSYMBOL_IOPEN = 156,                    /* IOPEN  */
  YYSYMBOL_ICLOSE = 157,                   /* ICLOSE  */
  YYSYMBOL_UOPEN = 158,                    /* UOPEN  */
  YYSYMBOL_UCLOSE = 159,                   /* UCLOSE  */
  YYSYMBOL_SMALLOPEN = 160,                /* SMALLOPEN  */
  YYSYMBOL_SMALLCLOSE = 161,               /* SMALLCLOSE  */
  YYSYMBOL_SUPOPEN = 162,                  /* SUPOPEN  */
  YYSYMBOL_SUPCLOSE = 163,                 /* SUPCLOSE  */
  YYSYMBOL_SUBOPEN = 164,                  /* SUBOPEN  */
  YYSYMBOL_SUBCLOSE = 165,                 /* SUBCLOSE  */
  YYSYMBOL_CENTEROPEN = 166,               /* CENTEROPEN  */
  YYSYMBOL_CENTERCLOSE = 167,              /* CENTERCLOSE  */
  YYSYMBOL_FONTOPEN = 168,                 /* FONTOPEN  */
  YYSYMBOL_FONTCLOSE = 169,                /* FONTCLOSE  */
  YYSYMBOL_HROPEN = 170,                   /* HROPEN  */
  YYSYMBOL_HRCLOSE = 171,                  /* HRCLOSE  */
  YYSYMBOL_BROPEN = 172,                   /* BROPEN  */
  YYSYMBOL_BRCLOSE = 173,                  /* BRCLOSE  */
  YYSYMBOL_NAME = 174,                     /* NAME  */
  YYSYMBOL_HREF = 175,                     /* HREF  */
  YYSYMBOL_REL = 176,                      /* REL  */
  YYSYMBOL_REV = 177,                      /* REV  */
  YYSYMBOL_TITLE = 178,                    /* TITLE  */
  YYSYMBOL_URN = 179,                      /* URN  */
  YYSYMBOL_METHODS = 180,                  /* METHODS  */
  YYSYMBOL_SHAPE = 181,                    /* SHAPE  */
  YYSYMBOL_COORDS = 182,                   /* COORDS  */
  YYSYMBOL_ALT = 183,                      /* ALT  */
  YYSYMBOL_NOHREF = 184,                   /* NOHREF  */
  YYSYMBOL_BGCOLOR = 185,                  /* BGCOLOR  */
  YYSYMBOL_BACKGROUND = 186,               /* BACKGROUND  */
  YYSYMBOL_TEXT = 187,                     /* TEXT  */
  YYSYMBOL_LINK = 188,                     /* LINK  */
  YYSYMBOL_VLINK = 189,                    /* VLINK  */
  YYSYMBOL_ALINK = 190,                    /* ALINK  */
  YYSYMBOL_CLEAR = 191,                    /* CLEAR  */
  YYSYMBOL_COMPACT = 192,                  /* COMPACT  */
  YYSYMBOL_ALIGN = 193,                    /* ALIGN  */
  YYSYMBOL_SIZE = 194,                     /* SIZE  */
  YYSYMBOL_COLOR = 195,                    /* COLOR  */
  YYSYMBOL_ACTION = 196,                   /* ACTION  */
  YYSYMBOL_ENCTYPE = 197,                  /* ENCTYPE  */
  YYSYMBOL_WIDTH = 198,                    /* WIDTH  */
  YYSYMBOL_NOSHADE = 199,                  /* NOSHADE  */
  YYSYMBOL_VERSION = 200,                  /* VERSION  */
  YYSYMBOL_SRC = 201,                      /* SRC  */
  YYSYMBOL_HEIGHT = 202,                   /* HEIGHT  */
  YYSYMBOL_VSPACE = 203,                   /* VSPACE  */
  YYSYMBOL_BORDER = 204,                   /* BORDER  */
  YYSYMBOL_USEMAP = 205,                   /* USEMAP  */
  YYSYMBOL_ISMAP = 206,                    /* ISMAP  */
  YYSYMBOL_TYPE = 207,                     /* TYPE  */
  YYSYMBOL_MAXLENGTH = 208,                /* MAXLENGTH  */
  YYSYMBOL_VALUE = 209,                    /* VALUE  */
  YYSYMBOL_CHECKED = 210,                  /* CHECKED  */
  YYSYMBOL_PROMPT = 211,                   /* PROMPT  */
  YYSYMBOL_ID = 212,                       /* ID  */
  YYSYMBOL_HTTP_EQUIV = 213,               /* HTTP_EQUIV  */
  YYSYMBOL_CONTENT = 214,                  /* CONTENT  */
  YYSYMBOL_N = 215,                        /* N  */
  YYSYMBOL_START = 216,                    /* START  */
  YYSYMBOL_SELECTED = 217,                 /* SELECTED  */
  YYSYMBOL_MULTIPLE = 218,                 /* MULTIPLE  */
  YYSYMBOL_CELLSPACING = 219,              /* CELLSPACING  */
  YYSYMBOL_CELLPADDING = 220,              /* CELLPADDING  */
  YYSYMBOL_ROWSPAN = 221,                  /* ROWSPAN  */
  YYSYMBOL_COLSPAN = 222,                  /* COLSPAN  */
  YYSYMBOL_NOWRAP = 223,                   /* NOWRAP  */
  YYSYMBOL_IDENTIFIER = 224,               /* IDENTIFIER  */
  YYSYMBOL_END_OF_INSTRUCTION = 225,       /* END_OF_INSTRUCTION  */
  YYSYMBOL_BOPEN = 226,                    /* BOPEN  */
  YYSYMBOL_BCLOSE = 227,                   /* BCLOSE  */
  YYSYMBOL_YYACCEPT = 228,                 /* $accept  */
  YYSYMBOL_htmldocument = 229,             /* htmldocument  */
  YYSYMBOL_html_tag = 230,                 /* html_tag  */
  YYSYMBOL_html_content = 231,             /* html_content  */
  YYSYMBOL_head_tag = 232,                 /* head_tag  */
  YYSYMBOL_head_content = 233,             /* head_content  */
  YYSYMBOL_abbr_tag = 234,                 /* abbr_tag  */
  YYSYMBOL_acronym_tag = 235,              /* acronym_tag  */
  YYSYMBOL_address_tag = 236,              /* address_tag  */
  YYSYMBOL_address_content = 237,          /* address_content  */
  YYSYMBOL_applet_tag = 238,               /* applet_tag  */
  YYSYMBOL_body_content = 239,             /* body_content  */
  YYSYMBOL_applet_content = 240,           /* applet_content  */
  YYSYMBOL_bdo_tag = 241,                  /* bdo_tag  */
  YYSYMBOL_big_tag = 242,                  /* big_tag  */
  YYSYMBOL_body_tag = 243,                 /* body_tag  */
  YYSYMBOL_caption_tag = 244,              /* caption_tag  */
  YYSYMBOL_colgroup_tag = 245,             /* colgroup_tag  */
  YYSYMBOL_colgroup_content = 246,         /* colgroup_content  */
  YYSYMBOL_col_tag = 247,                  /* col_tag  */
  YYSYMBOL_content_style = 248,            /* content_style  */
  YYSYMBOL_code_tag = 249,                 /* code_tag  */
  YYSYMBOL_dfn_tag = 250,                  /* dfn_tag  */
  YYSYMBOL_kbd_tag = 251,                  /* kbd_tag  */
  YYSYMBOL_q_tag = 252,                    /* q_tag  */
  YYSYMBOL_strong_tag = 253,               /* strong_tag  */
  YYSYMBOL_em_tag = 254,                   /* em_tag  */
  YYSYMBOL_fieldset_tag = 255,             /* fieldset_tag  */
  YYSYMBOL_legend_tag = 256,               /* legend_tag  */
  YYSYMBOL_del_tag = 257,                  /* del_tag  */
  YYSYMBOL_ins_tag = 258,                  /* ins_tag  */
  YYSYMBOL_map_tag = 259,                  /* map_tag  */
  YYSYMBOL_map_content = 260,              /* map_content  */
  YYSYMBOL_area_tag = 261,                 /* area_tag  */
  YYSYMBOL_script_tag = 262,               /* script_tag  */
  YYSYMBOL_frameset_tag = 263,             /* frameset_tag  */
  YYSYMBOL_frameset_content = 264,         /* frameset_content  */
  YYSYMBOL_noframe_tag = 265,              /* noframe_tag  */
  YYSYMBOL_noscript_tag = 266,             /* noscript_tag  */
  YYSYMBOL_object_content = 267,           /* object_content  */
  YYSYMBOL_object_tag = 268,               /* object_tag  */
  YYSYMBOL_a_tag = 269,                    /* a_tag  */
  YYSYMBOL_a_content = 270,                /* a_content  */
  YYSYMBOL_block = 271,                    /* block  */
  YYSYMBOL_block_content = 272,            /* block_content  */
  YYSYMBOL_basefont_tag = 273,             /* basefont_tag  */
  YYSYMBOL_blockquote_tag = 274,           /* blockquote_tag  */
  YYSYMBOL_center_tag = 275,               /* center_tag  */
  YYSYMBOL_dir_tag = 276,                  /* dir_tag  */
  YYSYMBOL_div_tag = 277,                  /* div_tag  */
  YYSYMBOL_dl_tag = 278,                   /* dl_tag  */
  YYSYMBOL_dl_content = 279,               /* dl_content  */
  YYSYMBOL_dt_tag = 280,                   /* dt_tag  */
  YYSYMBOL_dd_tag = 281,                   /* dd_tag  */
  YYSYMBOL_flow = 282,                     /* flow  */
  YYSYMBOL_flow_content = 283,             /* flow_content  */
  YYSYMBOL_form_tag = 284,                 /* form_tag  */
  YYSYMBOL_textarea_tag = 285,             /* textarea_tag  */
  YYSYMBOL_form_content = 286,             /* form_content  */
  YYSYMBOL_label_tag = 287,                /* label_tag  */
  YYSYMBOL_label_content = 288,            /* label_content  */
  YYSYMBOL_listing_tag = 289,              /* listing_tag  */
  YYSYMBOL_menu_tag = 290,                 /* menu_tag  */
  YYSYMBOL_p_tag = 291,                    /* p_tag  */
  YYSYMBOL_pre_tag = 292,                  /* pre_tag  */
  YYSYMBOL_pre_content = 293,              /* pre_content  */
  YYSYMBOL_br_tag = 294,                   /* br_tag  */
  YYSYMBOL_hr_tag = 295,                   /* hr_tag  */
  YYSYMBOL_select_tag = 296,               /* select_tag  */
  YYSYMBOL_select_content = 297,           /* select_content  */
  YYSYMBOL_style_tag = 298,                /* style_tag  */
  YYSYMBOL_option_tag = 299,               /* option_tag  */
  YYSYMBOL_ol_tag = 300,                   /* ol_tag  */
  YYSYMBOL_optgroup_tag = 301,             /* optgroup_tag  */
  YYSYMBOL_physical_style = 302,           /* physical_style  */
  YYSYMBOL_s_tag = 303,                    /* s_tag  */
  YYSYMBOL_span_tag = 304,                 /* span_tag  */
  YYSYMBOL_strike_tag = 305,               /* strike_tag  */
  YYSYMBOL_tt_tag = 306,                   /* tt_tag  */
  YYSYMBOL_u_tag = 307,                    /* u_tag  */
  YYSYMBOL_li_tag = 308,                   /* li_tag  */
  YYSYMBOL_table_tag = 309,                /* table_tag  */
  YYSYMBOL_table_content = 310,            /* table_content  */
  YYSYMBOL_tr_tag = 311,                   /* tr_tag  */
  YYSYMBOL_table_cell = 312,               /* table_cell  */
  YYSYMBOL_td_tag = 313,                   /* td_tag  */
  YYSYMBOL_th_tag = 314,                   /* th_tag  */
  YYSYMBOL_ul_tag = 315,                   /* ul_tag  */
  YYSYMBOL_text = 316,                     /* text  */
  YYSYMBOL_text_content = 317,             /* text_content  */
  YYSYMBOL_img_tag = 318,                  /* img_tag  */
  YYSYMBOL_font_tag = 319,                 /* font_tag  */
  YYSYMBOL_i_tag = 320,                    /* i_tag  */
  YYSYMBOL_small_tag = 321,                /* small_tag  */
  YYSYMBOL_sub_tag = 322,                  /* sub_tag  */
  YYSYMBOL_sup_tag = 323                   /* sup_tag  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  228
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  302

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   482


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
     225,   226,   227
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   237,   237,   241,   247,   248,   252,   258,   259,   260,
     264,   269,   274,   279,   280,   284,   289,   290,   291,   292,
     293,   294,   295,   299,   303,   308,   315,   323,   329,   334,
     338,   343,   344,   345,   346,   347,   348,   349,   350,   354,
     359,   364,   369,   374,   379,   384,   389,   395,   400,   405,
     410,   414,   421,   426,   427,   432,   433,   438,   443,   448,
     453,   459,   464,   468,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   491,
     497,   503,   508,   509,   514,   519,   520,   525,   529,   530,
     535,   536,   541,   544,   545,   549,   554,   560,   561,   562,
     563,   564,   565,   570,   575,   580,   581,   586,   587,   592,
     597,   602,   603,   604,   605,   606,   610,   614,   619,   620,
     625,   626,   630,   634,   638,   643,   648,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   663,   668,
     673,   678,   683,   690,   694,   698,   699,   700,   701,   705,
     709,   710,   714,   718,   722,   723,   724,   728,   729,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   745,   751,
     755,   759,   763,   767
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
  "\"end of file\"", "error", "\"invalid token\"", "ENDTAG", "ABBROPEN",
  "ABBRCLOSE", "ACRONYMOPEN", "ACROBYMCLOSE", "ADDRESSOPEN",
  "ADDRESSCLOSE", "APPLETOPEN", "APPLETCLOSE", "AREAOPEN", "AREACLOSE",
  "BASEOPEN", "BASECLOSE", "BASEFONTOPEN", "BASEFONTCLOSE", "BDOOPEN",
  "BDOCLOSE", "BIGOPEN", "BIGCLOSE", "BODYOPEN", "BODYCLOSE",
  "BLOCKQUOTEOPEN", "BLOCKQUOTECLOSE", "BUTTONOPEN", "BUTTONCLOSE",
  "CAPTIONOPEN", "CAPTIONCLOSE", "CODEOPEN", "CODECLOSE", "COLOPEN",
  "COLCLOSE", "COLGROUPOPEN", "COLGROUPCLOSE", "DDOPEN", "DDCLOSE",
  "DELOPEN", "DELCLOSE", "DFNOPEN", "DFNCLOSE", "DIROPEN", "DIRCLOSE",
  "DIVOPEN", "DIVCLOSE", "DLOPEN", "DLCLOSE", "DTOPEN", "DTCLOSE",
  "EMOPEN", "EMCLOSE", "FIELDSETOPEN", "FIELDSETCLOSE", "FRAMEOPEN",
  "FRAMECLOSE", "FRAMESETOPEN", "FRAMESETCLOSE", "NOFRAMESOPEN",
  "NOFRAMESCLOSE", "FORMOPEN", "FORMCLOSE", "HEADOPEN", "HEADCLOSE",
  "HNOPEN", "HNCLOSE", "HTMLOPEN", "HTMLCLOSE", "INPUTOPEN", "INPUTCLOSE",
  "IFRAMEOPEN", "IFRAMECLOSE", "INSOPEN", "INSCLOSE", "KBDOPEN",
  "KBDCLOSE", "LABELOPEN", "LABELCLOSE", "LEGENDOPEN", "LEGENDCLOSE",
  "LISTINGOPEN", "LISTINGCLOSE", "MAPOPEN", "MAPCLOSE", "MENUOPEN",
  "MENUCLOSE", "METAOPEN", "METACLOSE", "NEXTIDOPEN", "NEXTIDCLOSE",
  "NOSCRIPTOPEN", "NOSCRIPTCLOSE", "SELECTOPEN", "SELECTCLOSE",
  "OPTIONOPEN", "OPTIONCLOSE", "OBJECTOPEN", "OBJECTCLOSE", "OPTGROUPOPEN",
  "OPTGROUPCLOSE", "PARAMOPEN", "PARAMCLOSE", "PLAINTEXTOPEN",
  "PLAINTEXTCLOSE", "PREOPEN", "PRECLOSE", "QOPEN", "QCLOSE", "SOPEN",
  "SCLOSE", "SAMPOPEN", "SAMPCLOSE", "SCRIPTOPEN", "SCRIPTCLOSE",
  "SPANOPEN", "SPANCLOSE", "STRIKEOPEN", "STRIKECLOSE", "STRONGOPEN",
  "STRONGCLOSE", "STYLEOPEN", "STYLECLOSE", "TABLEOPEN", "TABLECLOSE",
  "TROPEN", "TRCLOSE", "TDOPEN", "TDCLOSE", "THOPEN", "THCLOSE",
  "THEADOPEN", "THEADCLOSE", "TBODYOPEN", "TBODYCLOSE", "TEXTAREAOPEN",
  "TEXTAREACLOSE", "TFOOTOPEN", "TFOOTCLOSE", "TITLEOPEN", "TITLECLOSE",
  "TTOPEN", "TTCLOSE", "IMGOPEN", "IMGCLOSE", "AOPEN", "ACLOSE",
  "LINKOPEN", "LINKCLOSE", "ULOPEN", "ULCLOSE", "LIOPEN", "LICLOSE",
  "OLOPEN", "OLCLOSE", "POPEN", "PCLOSE", "IOPEN", "ICLOSE", "UOPEN",
  "UCLOSE", "SMALLOPEN", "SMALLCLOSE", "SUPOPEN", "SUPCLOSE", "SUBOPEN",
  "SUBCLOSE", "CENTEROPEN", "CENTERCLOSE", "FONTOPEN", "FONTCLOSE",
  "HROPEN", "HRCLOSE", "BROPEN", "BRCLOSE", "NAME", "HREF", "REL", "REV",
  "TITLE", "URN", "METHODS", "SHAPE", "COORDS", "ALT", "NOHREF", "BGCOLOR",
  "BACKGROUND", "TEXT", "LINK", "VLINK", "ALINK", "CLEAR", "COMPACT",
  "ALIGN", "SIZE", "COLOR", "ACTION", "ENCTYPE", "WIDTH", "NOSHADE",
  "VERSION", "SRC", "HEIGHT", "VSPACE", "BORDER", "USEMAP", "ISMAP",
  "TYPE", "MAXLENGTH", "VALUE", "CHECKED", "PROMPT", "ID", "HTTP_EQUIV",
  "CONTENT", "N", "START", "SELECTED", "MULTIPLE", "CELLSPACING",
  "CELLPADDING", "ROWSPAN", "COLSPAN", "NOWRAP", "IDENTIFIER",
  "END_OF_INSTRUCTION", "BOPEN", "BCLOSE", "$accept", "htmldocument",
  "html_tag", "html_content", "head_tag", "head_content", "abbr_tag",
  "acronym_tag", "address_tag", "address_content", "applet_tag",
  "body_content", "applet_content", "bdo_tag", "big_tag", "body_tag",
  "caption_tag", "colgroup_tag", "colgroup_content", "col_tag",
  "content_style", "code_tag", "dfn_tag", "kbd_tag", "q_tag", "strong_tag",
  "em_tag", "fieldset_tag", "legend_tag", "del_tag", "ins_tag", "map_tag",
  "map_content", "area_tag", "script_tag", "frameset_tag",
  "frameset_content", "noframe_tag", "noscript_tag", "object_content",
  "object_tag", "a_tag", "a_content", "block", "block_content",
  "basefont_tag", "blockquote_tag", "center_tag", "dir_tag", "div_tag",
  "dl_tag", "dl_content", "dt_tag", "dd_tag", "flow", "flow_content",
  "form_tag", "textarea_tag", "form_content", "label_tag", "label_content",
  "listing_tag", "menu_tag", "p_tag", "pre_tag", "pre_content", "br_tag",
  "hr_tag", "select_tag", "select_content", "style_tag", "option_tag",
  "ol_tag", "optgroup_tag", "physical_style", "s_tag", "span_tag",
  "strike_tag", "tt_tag", "u_tag", "li_tag", "table_tag", "table_content",
  "tr_tag", "table_cell", "td_tag", "th_tag", "ul_tag", "text",
  "text_content", "img_tag", "font_tag", "i_tag", "small_tag", "sub_tag",
  "sup_tag", YY_NULLPTR
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
     475,   476,   477,   478,   479,   480,   481,   482
};
#endif

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -45,   -34,    47,  -164,   -75,    -6,    33,  -164,  -163,  -148,
      12,  -164,  -164,  -164,   364,  -164,   178,  -164,  -164,    29,
      36,    -3,    -9,  -164,  2760,  2760,    23,   364,   364,   364,
    2760,   364,  2760,   364,  2760,  -164,   364,  -164,  -164,  2760,
       0,   364,  2760,  -164,    95,  -164,  2760,    15,  -108,  2760,
    2760,  2760,  2760,  2760,    83,  2760,  2760,  2760,  -164,  -164,
     -30,   -33,  2760,  2760,  2760,  2760,  2760,  2760,   364,  2760,
    2760,  -164,  -164,  -164,  -164,  -164,  -164,    -4,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,    73,   249,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,   -18,  -164,  -164,
     534,  -164,  -164,  -164,  -164,  -164,  -164,  -164,   -25,  -164,
    -164,  -164,  -164,   631,   704,   114,  -164,  2760,    43,   115,
     -12,   -16,   803,     7,   874,    43,    44,    88,  -164,   461,
     979,     4,  1050,    50,  -164,    11,  -164,   -84,    38,   -81,
      43,  -164,  -164,    74,  -164,    67,    45,  -164,  -164,    70,
    1149,  2760,    62,  -164,  1228,   364,    49,  -164,    42,  -164,
    -164,  -164,  1319,  1398,  1491,  1568,  1661,   364,   117,  1738,
    1831,     8,  2760,  -164,     2,  1908,  2001,  2078,  2171,  2248,
    2341,   -80,  2418,  2511,  -164,  -164,  -164,  -164,  -164,   120,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  2760,     0,
      98,  -164,    76,    75,    34,  -164,  -164,  -164,  -164,  -164,
    2590,  -164,  -164,   -23,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,   -22,   143,   -31,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  2681,   123,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,   364,   145,  -164,
     -47,  -164,  -164,  -164,    55,  -164,  -164,  -164,   -10,  -164,
     364,   364,    64,  -164,  -164,  -164,  -164,   -70,   -46,  -164,
    -164,  -164
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     7,     0,     0,     1,     0,     0,
       0,     9,     8,     3,    64,    53,    64,     4,     5,     0,
       0,     0,     0,     6,     0,     0,     0,    64,    64,    64,
       0,    64,     0,    64,     0,    82,    64,    85,    88,     0,
      64,    64,     0,   105,     0,   107,     0,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,   156,
       0,     0,     0,     0,     0,     0,     0,     0,    64,     0,
       0,   116,   167,    31,    32,    17,   164,     0,   126,   127,
     163,    33,    34,    35,    36,    37,    38,    19,    20,    21,
     165,   166,   161,    18,    63,    65,    66,    67,    68,    69,
      70,     0,    64,    71,    72,    73,    75,    76,   159,    16,
      74,   162,   130,   132,   133,   136,   137,   155,    77,    78,
      22,   157,   160,   128,   129,   131,   134,   135,     0,    54,
      56,    52,   122,     0,     0,     0,    13,    14,    23,     0,
       0,     0,     0,     0,     0,     0,    93,     0,    92,    94,
       0,     0,     0,     0,    97,     0,   118,     0,     0,     0,
     101,    98,   100,     0,    99,     0,     0,   120,   121,     0,
       0,     0,     0,    50,     0,    64,     0,   114,     0,   112,
     113,   115,     0,     0,     0,     0,     0,    64,     0,     0,
       0,     0,    62,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,   106,    86,    90,    87,     0,
      83,   108,    89,   158,    57,    10,    11,    12,    15,    79,
      24,    25,    80,    39,    47,    40,    84,    44,     0,    64,
       0,   104,     0,     0,     0,    95,   102,   119,    48,    41,
       0,    49,    58,     0,    60,   110,    42,   138,   139,   140,
      43,     0,     0,     0,   141,   168,    61,   124,   109,   170,
     142,   171,   173,   172,    81,   169,   117,    91,     0,     0,
     103,   123,   125,    96,    51,    59,    27,    64,     0,    29,
       0,   145,   146,   148,     0,   147,    46,    45,     0,    28,
      64,    64,     0,   150,   151,   144,    30,     0,     0,   149,
     152,   153
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,   -14,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,   142,  -164,    -2,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,   -32,  -164,  -164,  -164,   -37,  -164,
    -164,  -164,  -164,   167,  -164,  -164,   149,   151,    46,  -164,
     152,    48,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
     144,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  2901,  2839,
    -164,  -164,  -164,  -164,  -164,  -164
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    10,    73,    74,    75,   135,
      76,   145,   139,    78,    79,    17,   188,   253,   278,   279,
      80,    81,    82,    83,    84,    85,    86,   161,   229,    87,
      88,    89,   172,   173,    11,    18,    19,    20,    90,   176,
      91,    92,   191,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   208,   147,   148,   103,   162,   163,   164,
     230,   104,   105,   106,   107,   178,   108,   109,   165,   166,
      12,   167,   110,   168,   111,   112,   113,   114,   115,   116,
     117,   118,   284,   285,   292,   293,   294,   119,   120,   121,
     122,   123,   124,   125,   126,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,   205,   128,   220,    24,   219,    25,   276,    26,   169,
      27,   205,     9,   138,   140,   141,    28,   143,    29,   204,
      30,     1,   151,   296,    31,   210,   160,    24,     4,    25,
      32,   146,   222,    27,   214,   205,    57,     8,    33,   146,
      34,    29,    35,    30,    36,     9,    37,     7,    38,   226,
      39,    21,   153,    32,   201,    14,   205,   300,   205,   205,
      40,    13,    70,    34,    71,   205,    22,   211,   154,   205,
     209,   205,    41,    39,    42,    23,   155,   205,   275,   290,
      43,   291,    44,   301,    45,   205,   129,   264,   205,    15,
      46,    16,   156,   280,   157,   130,    47,    42,   158,   281,
     146,   282,   283,   156,    48,   157,    49,   171,    50,   158,
     131,   187,   132,    46,    51,   175,    52,    60,    53,    47,
     206,   193,    54,   217,   205,   -18,   218,   224,   228,    49,
     232,    50,   157,   234,   159,   235,   236,    51,   237,    52,
      55,    53,    56,   238,    57,   241,   244,   245,    58,    59,
      60,   252,    61,   256,    62,   257,    63,   267,    64,   270,
      65,   243,    66,    55,    67,    56,    68,    57,    69,   273,
      70,   271,    71,   251,   272,   277,   287,    62,   295,    63,
     289,    64,    24,    65,    25,    66,    26,    67,    27,   299,
     177,    69,   269,   136,    28,    71,    29,   179,    30,   180,
     181,   231,    31,     0,     0,   194,   233,     0,    32,     0,
       0,     0,     0,     0,    72,   160,    33,     0,    34,     0,
      35,     0,    36,     0,    37,     0,    38,     0,    39,     0,
       0,     0,     0,     0,     0,   -55,     0,    72,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,    42,    24,     0,    25,     0,    26,    43,    27,
      44,     0,    45,   288,     0,    28,     0,    29,    46,    30,
       0,     0,     0,    31,    47,     0,   297,   298,     0,    32,
       0,     0,    48,     0,    49,   207,    50,    33,     0,    34,
       0,    35,    51,    36,    52,    37,    53,    38,     0,    39,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    41,    57,    42,     0,     0,    58,    59,    60,    43,
      61,    44,    62,    45,    63,     0,    64,     0,    65,    46,
      66,     0,    67,     0,    68,    47,    69,     0,    70,     0,
      71,     0,     0,    48,     0,    49,     0,    50,     0,     0,
       0,     0,     0,    51,     0,    52,     0,    53,    24,     0,
      25,    54,    26,     0,    27,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,     0,     0,     0,    31,    55,
       0,    56,    72,    57,    32,     0,     0,    58,    59,    60,
       0,    61,    33,    62,    34,    63,    35,    64,    36,    65,
      37,    66,    38,    67,    39,    68,     0,    69,     0,    70,
       0,    71,     0,     0,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    42,     0,
       0,     0,     0,     0,    43,     0,    44,     0,    45,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
      47,     0,     0,    72,     0,    24,     0,    25,    48,     0,
      49,    27,    50,     0,     0,     0,     0,     0,    51,    29,
      52,    30,    53,     0,     0,     0,    54,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,    55,     0,    56,     0,    57,     0,
     212,    39,    58,    59,    60,     0,    61,     0,    62,     0,
      63,     0,    64,     0,    65,     0,    66,     0,    67,     0,
      68,     0,    69,     0,    70,    42,    71,     0,    24,     0,
      25,     0,   -22,     0,    27,     0,     0,     0,     0,     0,
       0,    46,    29,     0,    30,     0,     0,    47,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    49,     0,    50,
       0,     0,     0,     0,    34,    51,     0,    52,    72,    53,
       0,     0,     0,   212,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,    66,    46,    67,     0,     0,     0,    69,
      47,     0,     0,    71,     0,    24,   215,    25,     0,     0,
      49,    27,    50,     0,     0,     0,     0,     0,    51,    29,
      52,    30,    53,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,    55,    72,    56,     0,    57,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,    64,     0,    65,     0,    66,     0,    67,     0,
       0,     0,    69,     0,     0,    42,    71,     0,    24,     0,
      25,   216,     0,     0,    27,     0,     0,     0,     0,     0,
       0,    46,    29,     0,    30,     0,     0,    47,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    49,     0,    50,
       0,     0,     0,     0,    34,    51,     0,    52,    72,    53,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,    66,    46,    67,     0,     0,     0,    69,
      47,     0,     0,    71,     0,     0,     0,    24,     0,    25,
      49,     0,    50,    27,     0,     0,     0,     0,    51,     0,
      52,    29,    53,    30,   221,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    55,    72,    56,     0,    57,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
      63,     0,    64,     0,    65,     0,    66,     0,    67,     0,
       0,     0,    69,     0,     0,     0,    71,    42,    24,     0,
      25,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,    29,    46,    30,     0,     0,     0,     0,    47,
       0,     0,     0,     0,    32,   223,     0,     0,     0,    49,
       0,    50,     0,     0,    34,     0,     0,    51,    72,    52,
       0,    53,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,    56,     0,    57,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,    46,    66,     0,    67,     0,     0,
      47,    69,     0,     0,     0,    71,     0,     0,     0,     0,
      49,     0,    50,    24,     0,    25,     0,     0,    51,    27,
      52,     0,    53,     0,     0,     0,     0,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,    55,     0,    56,    72,    57,    34,
     225,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      63,     0,    64,     0,    65,     0,    66,     0,    67,     0,
       0,     0,    69,     0,     0,     0,    71,     0,     0,     0,
       0,     0,     0,    42,    24,     0,    25,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    29,    46,
      30,     0,     0,     0,     0,    47,     0,     0,     0,     0,
      32,     0,     0,     0,     0,    49,     0,    50,    72,     0,
      34,     0,     0,    51,     0,    52,     0,    53,     0,     0,
      39,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,     0,    57,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
      46,    66,     0,    67,     0,     0,    47,    69,     0,     0,
       0,    71,     0,    24,     0,    25,    49,     0,    50,    27,
       0,     0,     0,     0,    51,     0,    52,    29,    53,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      55,     0,    56,    72,    57,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,    63,     0,    64,     0,
      65,     0,    66,     0,    67,     0,     0,     0,    69,     0,
       0,     0,    71,    42,   239,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    25,     0,     0,     0,    27,    46,
       0,     0,     0,     0,     0,    47,    29,     0,    30,     0,
       0,     0,     0,     0,     0,    49,     0,    50,    32,     0,
       0,     0,     0,    51,    72,    52,     0,    53,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    63,     0,    64,     0,    65,
       0,    66,     0,    67,     0,     0,     0,    69,    46,   242,
       0,    71,     0,    24,    47,    25,     0,     0,     0,    27,
       0,     0,     0,     0,    49,     0,    50,    29,     0,    30,
       0,     0,    51,     0,    52,     0,    53,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    72,     0,     0,     0,     0,    55,    39,
      56,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
      66,     0,    67,    42,     0,     0,    69,     0,     0,     0,
      71,     0,    24,     0,    25,     0,     0,     0,    27,    46,
       0,     0,     0,     0,     0,    47,    29,     0,    30,     0,
       0,     0,     0,     0,     0,    49,   246,    50,    32,     0,
       0,     0,     0,    51,     0,    52,     0,    53,    34,     0,
       0,     0,    72,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    63,     0,    64,     0,    65,
       0,    66,     0,    67,     0,     0,     0,    69,    46,     0,
       0,    71,     0,     0,    47,    24,     0,    25,     0,     0,
       0,    27,     0,     0,    49,     0,    50,   247,     0,    29,
       0,    30,    51,     0,    52,     0,    53,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    72,     0,     0,     0,     0,    55,     0,
      56,    39,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
      66,     0,    67,     0,     0,    42,    69,     0,     0,     0,
      71,     0,    24,     0,    25,     0,     0,     0,    27,     0,
       0,    46,     0,     0,     0,     0,    29,    47,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    32,    50,
       0,     0,     0,     0,     0,    51,   248,    52,    34,    53,
       0,     0,    72,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,    66,     0,    67,     0,     0,    46,    69,
       0,     0,     0,    71,    47,    24,     0,    25,     0,     0,
       0,    27,     0,     0,    49,     0,    50,     0,     0,    29,
       0,    30,    51,     0,    52,   249,    53,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    72,     0,     0,    55,     0,
      56,    39,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
      66,     0,    67,     0,     0,    42,    69,     0,     0,     0,
      71,     0,    24,     0,    25,     0,     0,     0,    27,     0,
       0,    46,     0,     0,     0,     0,    29,    47,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    32,    50,
       0,     0,     0,     0,     0,    51,     0,    52,    34,    53,
     250,     0,    72,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,    66,     0,    67,     0,     0,    46,    69,
       0,     0,     0,    71,    47,    24,     0,    25,     0,     0,
       0,    27,     0,     0,    49,     0,    50,     0,     0,    29,
       0,    30,    51,     0,    52,     0,    53,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    72,     0,     0,    55,   254,
      56,    39,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
      66,     0,    67,     0,     0,    42,    69,     0,     0,     0,
      71,     0,    24,     0,    25,     0,     0,     0,    27,     0,
       0,    46,     0,     0,     0,     0,    29,    47,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    32,    50,
       0,     0,     0,     0,     0,    51,     0,    52,    34,    53,
       0,     0,    72,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,   255,    57,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,    66,     0,    67,     0,     0,    46,    69,
       0,     0,     0,    71,    47,    24,     0,    25,     0,     0,
       0,    27,     0,     0,    49,     0,    50,     0,     0,    29,
       0,    30,    51,     0,    52,     0,    53,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    72,     0,     0,    55,     0,
      56,    39,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,    63,     0,    64,     0,    65,     0,
      66,     0,    67,     0,     0,    42,    69,     0,     0,     0,
      71,     0,    24,     0,    25,     0,     0,     0,    27,     0,
       0,    46,     0,     0,     0,     0,    29,    47,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    32,    50,
       0,     0,     0,     0,     0,    51,     0,    52,    34,    53,
       0,     0,    72,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,    63,   259,    64,
       0,    65,     0,    66,     0,    67,     0,     0,    46,    69,
       0,     0,     0,    71,    47,    24,     0,    25,     0,     0,
       0,    27,     0,     0,    49,     0,    50,     0,     0,    29,
       0,    30,    51,     0,    52,     0,    53,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    72,     0,     0,    55,     0,
      56,    39,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,   260,    65,     0,
      66,     0,    67,     0,     0,    42,    69,     0,     0,     0,
      71,     0,    24,     0,    25,     0,     0,     0,    27,     0,
       0,    46,     0,     0,     0,     0,    29,    47,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    32,    50,
       0,     0,     0,     0,     0,    51,     0,    52,    34,    53,
       0,     0,    72,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,    63,     0,    64,
       0,    65,   261,    66,     0,    67,     0,     0,    46,    69,
       0,     0,     0,    71,    47,    24,     0,    25,     0,     0,
       0,    27,     0,     0,    49,     0,    50,     0,     0,    29,
       0,    30,    51,     0,    52,     0,    53,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    72,     0,     0,    55,     0,
      56,    39,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
      66,   262,    67,     0,     0,    42,    69,     0,     0,     0,
      71,     0,    24,     0,    25,     0,     0,     0,    27,     0,
       0,    46,     0,     0,     0,     0,    29,    47,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    32,    50,
       0,     0,     0,     0,     0,    51,     0,    52,    34,    53,
       0,     0,    72,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,    66,     0,    67,   263,     0,    46,    69,
       0,     0,     0,    71,    47,    24,     0,    25,     0,     0,
       0,    27,     0,     0,    49,     0,    50,     0,     0,    29,
       0,    30,    51,     0,    52,     0,    53,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    72,     0,     0,    55,     0,
      56,    39,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
      66,     0,    67,     0,     0,    42,    69,   265,     0,     0,
      71,     0,     0,     0,    24,     0,    25,     0,     0,     0,
      27,    46,     0,   274,     0,     0,     0,    47,    29,     0,
      30,     0,     0,     0,     0,     0,     0,    49,     0,    50,
      32,     0,     0,     0,     0,    51,     0,    52,     0,    53,
      34,     0,    72,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    63,     0,    64,
       0,    65,     0,    66,     0,    67,     0,     0,     0,    69,
      46,     0,   266,    71,     0,    24,    47,    25,     0,     0,
       0,    27,     0,     0,     0,     0,    49,     0,    50,    29,
       0,    30,     0,     0,    51,     0,    52,     0,    53,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    72,     0,     0,     0,     0,
      55,    39,    56,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,    64,     0,
      65,     0,    66,     0,    67,    42,     0,     0,    69,     0,
     286,     0,    71,     0,    24,     0,    25,     0,     0,     0,
      27,    46,     0,     0,     0,     0,     0,    47,    29,     0,
      30,     0,     0,     0,     0,     0,     0,    49,     0,    50,
      32,     0,     0,     0,     0,    51,     0,    52,     0,    53,
      34,     0,     0,     0,    72,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    63,     0,    64,
       0,    65,     0,    66,     0,    67,     0,     0,     0,    69,
      46,     0,     0,    71,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,    50,     0,
       0,     0,     0,     0,    51,     0,    52,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
      55,     0,    56,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,    64,     0,
      65,     0,    66,     0,    67,   133,   134,   137,    69,     0,
       0,   142,    71,   144,   149,   150,     0,     0,     0,     0,
     152,     0,   149,   170,     0,     0,     0,   174,     0,     0,
     182,   183,   184,   185,   186,     0,   189,   190,   192,   213,
       0,     0,     0,   195,   196,   197,   198,   199,   200,     0,
     202,   203,   213,   213,    72,     0,   213,     0,     0,     0,
       0,   213,     0,   213,     0,     0,     0,     0,   213,   213,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   149,     0,     0,     0,     0,     0,   213,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
       0,   213,   213,   213,   213,   213,     0,     0,   213,   213,
       0,   213,     0,     0,   213,   213,   213,   213,   213,   213,
       0,   213,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   240,     0,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268
};

static const yytype_int16 yycheck[] =
{
      14,    81,    16,    19,     4,    17,     6,    29,     8,    41,
      10,    81,   120,    27,    28,    29,    16,    31,    18,    23,
      20,    66,    36,    33,    24,    43,    40,     4,    62,     6,
      30,    33,    25,    10,    59,    81,   144,   112,    38,    41,
      40,    18,    42,    20,    44,   120,    46,     0,    48,    45,
      50,   214,    52,    30,    68,    22,    81,   127,    81,    81,
      60,    67,   170,    40,   172,    81,   214,    85,    68,    81,
     102,    81,    72,    50,    74,    63,    76,    81,   101,   126,
      80,   128,    82,   129,    84,    81,    57,   167,    81,    56,
      90,    58,    92,   124,    94,    59,    96,    74,    98,   130,
     102,   132,   133,    92,   104,    94,   106,    12,   108,    98,
     113,    28,   121,    90,   114,   100,   116,   150,   118,    96,
      47,   151,   122,     9,    81,    81,    11,    39,    78,   106,
     214,   108,    94,   214,   134,    61,    69,   114,    93,   116,
     140,   118,   142,    73,   144,    83,    97,   105,   148,   149,
     150,    34,   152,   145,   154,   153,   156,    37,   158,    61,
     160,   175,   162,   140,   164,   142,   166,   144,   168,   135,
     170,    95,   172,   187,    99,    32,    53,   154,   123,   156,
      35,   158,     4,   160,     6,   162,     8,   164,    10,   125,
      48,   168,   229,    26,    16,   172,    18,    48,    20,    48,
      48,   155,    24,    -1,    -1,    61,   158,    -1,    30,    -1,
      -1,    -1,    -1,    -1,   214,   229,    38,    -1,    40,    -1,
      42,    -1,    44,    -1,    46,    -1,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,   214,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,     4,    -1,     6,    -1,     8,    80,    10,
      82,    -1,    84,   277,    -1,    16,    -1,    18,    90,    20,
      -1,    -1,    -1,    24,    96,    -1,   290,   291,    -1,    30,
      -1,    -1,   104,    -1,   106,    36,   108,    38,    -1,    40,
      -1,    42,   114,    44,   116,    46,   118,    48,    -1,    50,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
     142,    72,   144,    74,    -1,    -1,   148,   149,   150,    80,
     152,    82,   154,    84,   156,    -1,   158,    -1,   160,    90,
     162,    -1,   164,    -1,   166,    96,   168,    -1,   170,    -1,
     172,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,     4,    -1,
       6,   122,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,   140,
      -1,   142,   214,   144,    30,    -1,    -1,   148,   149,   150,
      -1,   152,    38,   154,    40,   156,    42,   158,    44,   160,
      46,   162,    48,   164,    50,   166,    -1,   168,    -1,   170,
      -1,   172,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,   214,    -1,     4,    -1,     6,   104,    -1,
     106,    10,   108,    -1,    -1,    -1,    -1,    -1,   114,    18,
     116,    20,   118,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,   140,    -1,   142,    -1,   144,    -1,
      49,    50,   148,   149,   150,    -1,   152,    -1,   154,    -1,
     156,    -1,   158,    -1,   160,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,    -1,   170,    74,   172,    -1,     4,    -1,
       6,    -1,    81,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    18,    -1,    20,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    40,   114,    -1,   116,   214,   118,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    90,   164,    -1,    -1,    -1,   168,
      96,    -1,    -1,   172,    -1,     4,     5,     6,    -1,    -1,
     106,    10,   108,    -1,    -1,    -1,    -1,    -1,   114,    18,
     116,    20,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,   140,   214,   142,    -1,   144,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,   158,    -1,   160,    -1,   162,    -1,   164,    -1,
      -1,    -1,   168,    -1,    -1,    74,   172,    -1,     4,    -1,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    18,    -1,    20,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    40,   114,    -1,   116,   214,   118,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    90,   164,    -1,    -1,    -1,   168,
      96,    -1,    -1,   172,    -1,    -1,    -1,     4,    -1,     6,
     106,    -1,   108,    10,    -1,    -1,    -1,    -1,   114,    -1,
     116,    18,   118,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,   140,   214,   142,    -1,   144,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,   158,    -1,   160,    -1,   162,    -1,   164,    -1,
      -1,    -1,   168,    -1,    -1,    -1,   172,    74,     4,    -1,
       6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    90,    20,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,    40,    -1,    -1,   114,   214,   116,
      -1,   118,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,   142,    -1,   144,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,
      -1,   158,    -1,   160,    90,   162,    -1,   164,    -1,    -1,
      96,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
     106,    -1,   108,     4,    -1,     6,    -1,    -1,   114,    10,
     116,    -1,   118,    -1,    -1,    -1,    -1,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,   140,    -1,   142,   214,   144,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
     156,    -1,   158,    -1,   160,    -1,   162,    -1,   164,    -1,
      -1,    -1,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    74,     4,    -1,     6,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    90,
      20,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,   106,    -1,   108,   214,    -1,
      40,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,   142,    -1,   144,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    -1,   158,    -1,   160,
      90,   162,    -1,   164,    -1,    -1,    96,   168,    -1,    -1,
      -1,   172,    -1,     4,    -1,     6,   106,    -1,   108,    10,
      -1,    -1,    -1,    -1,   114,    -1,   116,    18,   118,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
     140,    -1,   142,   214,   144,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,    -1,
     160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,    -1,
      -1,    -1,   172,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,    90,
      -1,    -1,    -1,    -1,    -1,    96,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    30,    -1,
      -1,    -1,    -1,   114,   214,   116,    -1,   118,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,   156,    -1,   158,    -1,   160,
      -1,   162,    -1,   164,    -1,    -1,    -1,   168,    90,    91,
      -1,   172,    -1,     4,    96,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,   106,    -1,   108,    18,    -1,    20,
      -1,    -1,   114,    -1,   116,    -1,   118,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,   140,    50,
     142,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,
     162,    -1,   164,    74,    -1,    -1,   168,    -1,    -1,    -1,
     172,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,    90,
      -1,    -1,    -1,    -1,    -1,    96,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,    30,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,    40,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,   156,    -1,   158,    -1,   160,
      -1,   162,    -1,   164,    -1,    -1,    -1,   168,    90,    -1,
      -1,   172,    -1,    -1,    96,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   106,    -1,   108,   109,    -1,    18,
      -1,    20,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,   214,    -1,    -1,    -1,    -1,   140,    -1,
     142,    50,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,
     162,    -1,   164,    -1,    -1,    74,   168,    -1,    -1,    -1,
     172,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    18,    96,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    30,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,    40,   118,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    90,   168,
      -1,    -1,    -1,   172,    96,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   106,    -1,   108,    -1,    -1,    18,
      -1,    20,   114,    -1,   116,   117,   118,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,   214,    -1,    -1,   140,    -1,
     142,    50,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,
     162,    -1,   164,    -1,    -1,    74,   168,    -1,    -1,    -1,
     172,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    18,    96,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    30,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    40,   118,
     119,    -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    90,   168,
      -1,    -1,    -1,   172,    96,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   106,    -1,   108,    -1,    -1,    18,
      -1,    20,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,   214,    -1,    -1,   140,   141,
     142,    50,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,
     162,    -1,   164,    -1,    -1,    74,   168,    -1,    -1,    -1,
     172,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    18,    96,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    30,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    40,   118,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    90,   168,
      -1,    -1,    -1,   172,    96,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   106,    -1,   108,    -1,    -1,    18,
      -1,    20,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,   214,    -1,    -1,   140,    -1,
     142,    50,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,   156,    -1,   158,    -1,   160,    -1,
     162,    -1,   164,    -1,    -1,    74,   168,    -1,    -1,    -1,
     172,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    18,    96,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    30,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    40,   118,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,   156,   157,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    90,   168,
      -1,    -1,    -1,   172,    96,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   106,    -1,   108,    -1,    -1,    18,
      -1,    20,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,   214,    -1,    -1,   140,    -1,
     142,    50,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,   158,   159,   160,    -1,
     162,    -1,   164,    -1,    -1,    74,   168,    -1,    -1,    -1,
     172,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    18,    96,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    30,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    40,   118,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,   161,   162,    -1,   164,    -1,    -1,    90,   168,
      -1,    -1,    -1,   172,    96,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   106,    -1,   108,    -1,    -1,    18,
      -1,    20,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,   214,    -1,    -1,   140,    -1,
     142,    50,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,
     162,   163,   164,    -1,    -1,    74,   168,    -1,    -1,    -1,
     172,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    18,    96,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    30,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    40,   118,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,   165,    -1,    90,   168,
      -1,    -1,    -1,   172,    96,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   106,    -1,   108,    -1,    -1,    18,
      -1,    20,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,   214,    -1,    -1,   140,    -1,
     142,    50,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,
     162,    -1,   164,    -1,    -1,    74,   168,   169,    -1,    -1,
     172,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,
      10,    90,    -1,    13,    -1,    -1,    -1,    96,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      30,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
      40,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
      90,    -1,   171,   172,    -1,     4,    96,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,   106,    -1,   108,    18,
      -1,    20,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
     140,    50,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,    -1,
     160,    -1,   162,    -1,   164,    74,    -1,    -1,   168,    -1,
      79,    -1,   172,    -1,     4,    -1,     6,    -1,    -1,    -1,
      10,    90,    -1,    -1,    -1,    -1,    -1,    96,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      30,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
      40,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
      90,    -1,    -1,   172,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
     140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,    -1,
     160,    -1,   162,    -1,   164,    24,    25,    26,   168,    -1,
      -1,    30,   172,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,   120,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,   133,   134,   214,    -1,   137,    -1,    -1,    -1,
      -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,   184,   185,   186,    -1,    -1,   189,   190,
      -1,   192,    -1,    -1,   195,   196,   197,   198,   199,   200,
      -1,   202,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   228
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    66,   229,   230,    62,   231,   232,     0,   112,   120,
     233,   262,   298,    67,    22,    56,    58,   243,   263,   264,
     265,   214,   214,    63,     4,     6,     8,    10,    16,    18,
      20,    24,    30,    38,    40,    42,    44,    46,    48,    50,
      60,    72,    74,    80,    82,    84,    90,    96,   104,   106,
     108,   114,   116,   118,   122,   140,   142,   144,   148,   149,
     150,   152,   154,   156,   158,   160,   162,   164,   166,   168,
     170,   172,   214,   234,   235,   236,   238,   239,   241,   242,
     248,   249,   250,   251,   252,   253,   254,   257,   258,   259,
     266,   268,   269,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   284,   289,   290,   291,   292,   294,   295,
     300,   302,   303,   304,   305,   306,   307,   308,   309,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   239,    57,
      59,   113,   121,   316,   316,   237,   291,   316,   239,   240,
     239,   239,   316,   239,   316,   239,   271,   282,   283,   316,
     316,   239,   316,    52,    68,    76,    92,    94,    98,   134,
     239,   255,   285,   286,   287,   296,   297,   299,   301,   282,
     316,    12,   260,   261,   316,   100,   267,   269,   293,   294,
     295,   298,   316,   316,   316,   316,   316,    28,   244,   316,
     316,   270,   316,   151,   308,   316,   316,   316,   316,   316,
     316,   239,   316,   316,    23,    81,    47,    36,   281,   282,
      43,    85,    49,   317,    59,     5,     7,     9,    11,    17,
      19,    21,    25,    31,    39,    41,    45,    51,    78,   256,
     288,   296,   214,   299,   214,    61,    69,    93,    73,    75,
     316,    83,    91,   239,    97,   105,   107,   109,   115,   117,
     119,   239,    34,   245,   141,   143,   145,   153,   155,   157,
     159,   161,   163,   165,   167,   169,   171,    37,   316,   286,
      61,    95,    99,   135,    13,   101,    29,    32,   246,   247,
     124,   130,   132,   133,   310,   311,    79,    53,   239,    35,
     126,   128,   312,   313,   314,   123,    33,   239,   239,   125,
     127,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   228,   229,   230,   231,   231,   232,   233,   233,   233,
     234,   235,   236,   237,   237,   238,   239,   239,   239,   239,
     239,   239,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   248,   248,   248,   248,   248,   248,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   263,   264,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   273,
     274,   275,   276,   276,   277,   278,   278,   279,   280,   280,
     281,   281,   282,   283,   283,   284,   285,   286,   286,   286,
     286,   286,   286,   287,   288,   289,   289,   290,   290,   291,
     292,   293,   293,   293,   293,   293,   294,   295,   296,   296,
     297,   297,   298,   299,   300,   301,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   310,   310,   310,   311,
     312,   312,   313,   314,   315,   315,   315,   316,   316,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   318,   319,
     320,   321,   322,   323
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     3,     0,     1,     1,
       3,     3,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       1,     3,     3,     1,     2,     1,     2,     3,     3,     3,
       3,     3,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     2,     3,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     2,     3,     1,     1,     2,     1,     2,     3,
       3,     0,     1,     1,     1,     1,     1,     3,     1,     2,
       1,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     2,     5,     1,     1,     1,     1,     3,
       1,     1,     3,     3,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3
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

#line 2253 "htmlcompact.tab.c"

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

#line 772 "htmlcompact.y"

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
