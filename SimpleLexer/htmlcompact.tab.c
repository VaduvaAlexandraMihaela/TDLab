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
  YYSYMBOL_ACRONYMCLOSE = 7,               /* ACRONYMCLOSE  */
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
#define YYLAST   2938

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  228
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  304

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
     293,   294,   295,   296,   300,   304,   309,   316,   324,   330,
     335,   339,   344,   345,   346,   347,   348,   349,   350,   351,
     355,   360,   365,   370,   375,   380,   385,   390,   396,   401,
     406,   411,   415,   422,   427,   428,   433,   434,   439,   444,
     449,   454,   460,   465,   469,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     492,   498,   504,   509,   514,   519,   524,   528,   533,   538,
     541,   542,   546,   551,   557,   558,   559,   560,   561,   562,
     567,   572,   577,   582,   587,   592,   597,   598,   599,   600,
     601,   605,   609,   613,   618,   619,   623,   627,   631,   636,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   656,   661,   666,   671,   676,   683,   687,   691,
     692,   693,   694,   698,   702,   703,   707,   711,   715,   720,
     721,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     737,   743,   747,   751,   755,   759
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
  "ABBRCLOSE", "ACRONYMOPEN", "ACRONYMCLOSE", "ADDRESSOPEN",
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

#define YYPACT_NINF (-204)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -63,   -56,    10,  -204,  -111,   -38,   -15,  -204,  -203,  -187,
     -29,  -204,  -204,  -204,   193,  -204,    22,  -204,  -204,   -20,
     -12,   -69,   -67,  -204,  2577,  2577,   363,   193,   193,   193,
    2577,   193,  2577,   200,  2577,   -94,   193,    21,  2577,    15,
     200,  2577,  -156,    51,   -94,  2577,   -30,   -96,  2577,  2577,
    2577,  2577,  2577,    43,  2577,  2577,  2577,   -94,   -94,  2577,
    2577,  2577,  2577,  2577,  2577,   193,  2577,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,    50,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  2577,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,    18,  -204,  -204,  -204,  -204,   370,   533,    69,
    -204,  2577,  -204,    70,    63,    66,   540,    61,   703,  -204,
      49,  -204,  2577,   710,   200,    55,    56,  2577,    53,    67,
     875,    30,  -204,    17,   -90,  -104,  -204,  -204,  -204,    52,
    -204,    45,    42,   880,    36,  2577,    39,  -204,    40,  1045,
     193,    27,  -204,    29,  -204,  -204,  -204,  1050,  1215,  1220,
    1385,  1390,   193,    93,  1555,  1560,   -13,  2577,   -10,   -18,
    1725,  1742,  1897,  1918,  2067,  2094,   -26,  2237,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,    -9,  -204,  -204,  2270,  -204,   200,  -204,  -204,
    2577,    15,    82,  -204,   -68,    54,    57,  -204,  -204,    12,
    -204,  -204,  -204,  -204,  -204,  2407,  -204,  -204,  -204,    44,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,   122,   120,   -40,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,   116,  2440,   101,  -204,    65,
      59,  -204,  -204,  -204,  -204,  -204,   193,   126,  -204,  -108,
    -204,  -204,  -204,    68,  -204,  -204,  -204,  -204,  -204,  -204,
     132,  -204,   193,   193,    47,  -204,  -204,  -204,  -204,    71,
      73,  -204,  -204,  -204
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     7,     0,     0,     1,     0,     0,
       0,     9,     8,     3,    16,    54,    16,     4,     5,     0,
       0,     0,     0,     6,     0,     0,     0,    16,    16,    16,
       0,    16,     0,    65,     0,     0,    16,     0,     0,    16,
      65,     0,     0,     0,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,   112,   111,   159,
      32,    33,    18,   156,     0,   120,   121,   155,    34,    35,
      36,    37,    38,    39,    20,    21,    22,   157,   158,   153,
      19,    64,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    76,    77,   151,    17,    75,   154,   124,   126,   127,
     130,   131,    78,    79,    23,   149,   152,   122,   123,   125,
     128,   129,     0,    55,    57,    53,   116,     0,     0,     0,
      13,    14,    24,     0,     0,     0,     0,     0,     0,    90,
       0,    89,    91,     0,    65,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,     0,    98,    95,    97,     0,
      96,     0,     0,     0,     0,     0,     0,    51,     0,     0,
      16,     0,   109,     0,   107,   108,   110,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,   150,
      58,    10,    11,    12,    15,    80,    25,    26,    81,    40,
      48,    41,     0,    83,    84,     0,    85,    65,    86,    45,
       0,    16,     0,   101,     0,     0,     0,   114,   115,     0,
      92,    99,    49,    42,   102,     0,    50,   103,    59,     0,
      61,   105,    43,   132,   133,   134,    44,     0,     0,     0,
     135,   160,    62,   148,   118,   104,   162,   136,   163,   165,
     164,    82,   161,   137,    87,     0,     0,     0,   100,     0,
       0,   113,    93,    52,    60,    28,    16,     0,    30,     0,
     139,   140,   142,     0,   141,    88,    47,    46,   117,   119,
       0,    29,    16,    16,     0,   144,   145,   138,    31,     0,
       0,   143,   146,   147
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,   -14,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,   148,  -204,   -28,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,   -24,  -204,  -204,  -204,   -25,  -204,
    -204,  -204,  -204,   174,  -204,  -204,   158,   160,    62,  -204,
     161,   -11,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
      -8,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  2718,  2519,
    -204,  -204,  -204,  -204,  -204,  -204
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    10,    70,    71,    72,   129,
      73,   156,   133,    75,    76,    17,   183,   249,   277,   278,
      77,    78,    79,    80,    81,    82,    83,   157,   221,    84,
      85,    86,   166,   167,    11,    18,    19,    20,    87,   171,
      88,    89,   186,    90,    91,    92,    93,    94,    95,    96,
      97,   148,   149,   218,   140,   141,    98,   158,   159,   160,
     222,    99,   100,   101,   102,   173,   103,   104,   161,   226,
      12,   227,   105,   228,   106,   107,   108,   109,   110,   111,
     145,   112,   283,   284,   294,   295,   296,   113,   114,   115,
     116,   117,   118,   119,   120,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,     8,   122,     1,   224,   139,     4,    14,   225,     9,
       7,    21,   139,   132,   134,   135,   162,   137,   292,    24,
     293,    25,   146,    26,     9,    27,    24,    22,    25,    13,
      26,    28,    27,    29,    23,    30,   168,   123,    28,    31,
      29,    15,    30,    16,   125,    32,    31,   124,    56,   188,
     189,   196,    32,    33,   126,    34,   144,    35,   164,    36,
      33,    37,    34,   165,    35,    38,    36,   151,    37,   147,
     170,   182,    38,   198,    67,    39,    68,   200,   203,   -56,
     205,   204,    39,   152,   279,   206,   208,    40,   210,    41,
     280,   153,   281,   282,    40,    42,    41,    43,   213,    44,
     216,   214,    42,   217,    43,    45,    44,   154,   220,   154,
     229,    46,    45,   230,   231,   232,   139,   234,    46,    47,
     212,    48,   236,    49,   240,   237,    47,   248,    48,    50,
      49,    51,   252,    52,   241,   254,    50,    53,    51,   253,
      52,   261,   263,   268,    53,   274,   269,   272,   224,   155,
     271,   275,   276,   285,   287,    54,   239,    55,   289,    56,
     288,   291,    54,    57,    55,   298,    56,    58,   247,    59,
      57,    60,   301,    61,    58,    62,    59,    63,    60,    64,
      61,    65,    62,    66,    63,    67,    64,    68,    65,   139,
      66,   297,    67,   265,    68,   172,   267,    24,   302,    25,
     130,    26,   303,    27,    24,   174,    25,   175,   176,    28,
      27,    29,     0,    30,   270,   223,    28,    31,    29,     0,
      30,     0,     0,    32,    31,     0,     0,     0,     0,    69,
      32,    33,     0,    34,     0,    35,    69,    36,     0,    37,
      34,     0,    35,    38,    36,     0,    37,     0,     0,     0,
      38,     0,     0,    39,     0,     0,     0,     0,     0,     0,
      39,     0,   290,     0,     0,    40,     0,    41,     0,     0,
       0,     0,     0,    42,    41,    43,     0,    44,   299,   300,
      42,     0,     0,    45,    44,     0,     0,     0,     0,    46,
      45,     0,     0,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    47,     0,    48,    50,    49,    51,
       0,    52,     0,     0,    50,    53,    51,     0,    52,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,     0,    56,     0,     0,
      54,    57,    55,     0,    56,    58,     0,    59,    57,    60,
       0,    61,    58,    62,    59,    63,    60,    64,    61,    65,
      62,    66,    63,    67,    64,    68,    65,    24,    66,    25,
       0,     0,    68,    27,    24,   201,    25,     0,     0,     0,
      27,    29,     0,    30,     0,     0,     0,     0,    29,     0,
      30,     0,     0,    32,     0,     0,     0,     0,     0,     0,
      32,     0,     0,    34,     0,     0,     0,    69,     0,     0,
      34,     0,     0,    38,    69,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,    46,
      45,     0,     0,     0,     0,     0,    46,     0,     0,    48,
       0,    49,     0,     0,     0,     0,    48,    50,    49,    51,
       0,    52,     0,     0,    50,     0,    51,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,     0,    56,     0,     0,
      54,     0,    55,     0,    56,     0,     0,    59,     0,    60,
       0,    61,     0,    62,     0,    63,    60,    64,    61,     0,
      62,    66,    63,     0,    64,    68,     0,    24,    66,    25,
     202,     0,    68,    27,    24,     0,    25,     0,     0,     0,
      27,    29,     0,    30,     0,     0,     0,     0,    29,     0,
      30,   207,     0,    32,     0,     0,     0,     0,     0,     0,
      32,     0,     0,    34,     0,     0,     0,    69,     0,     0,
      34,     0,     0,    38,    69,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,    46,
      45,     0,     0,     0,     0,     0,    46,     0,     0,    48,
       0,    49,     0,     0,     0,     0,    48,    50,    49,    51,
       0,    52,     0,     0,    50,     0,    51,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,     0,    56,     0,     0,
      54,     0,    55,     0,    56,     0,     0,     0,     0,    60,
       0,    61,     0,    62,     0,    63,    60,    64,    61,     0,
      62,    66,    63,     0,    64,    68,     0,    24,    66,    25,
       0,     0,    68,    27,    24,     0,    25,     0,     0,     0,
      27,    29,     0,    30,     0,     0,     0,     0,    29,     0,
      30,     0,     0,    32,   209,     0,     0,     0,     0,     0,
      32,     0,     0,    34,     0,     0,     0,    69,     0,     0,
      34,   211,     0,    38,    69,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,    46,
      45,     0,     0,     0,     0,     0,    46,     0,     0,    48,
       0,    49,     0,     0,     0,     0,    48,    50,    49,    51,
       0,    52,     0,     0,    50,     0,    51,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,     0,    56,     0,     0,
      54,     0,    55,     0,    56,     0,     0,     0,     0,    60,
       0,    61,     0,    62,     0,    63,    60,    64,    61,     0,
      62,    66,    63,     0,    64,    68,     0,     0,    66,    24,
       0,    25,    68,     0,    24,    27,    25,     0,     0,     0,
      27,     0,     0,    29,     0,    30,     0,     0,    29,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,     0,
      32,     0,     0,     0,     0,    34,     0,    69,     0,     0,
      34,     0,     0,     0,    69,    38,   219,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    41,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
      45,    46,     0,     0,     0,     0,    46,     0,     0,     0,
       0,    48,     0,    49,     0,     0,    48,     0,    49,    50,
       0,    51,     0,    52,    50,     0,    51,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,    55,     0,    56,
      54,     0,    55,     0,    56,     0,     0,     0,     0,     0,
       0,    60,     0,    61,     0,    62,    60,    63,    61,    64,
      62,     0,    63,    66,    64,     0,     0,    68,    66,    24,
       0,    25,    68,     0,    24,    27,    25,     0,     0,     0,
      27,     0,     0,    29,     0,    30,     0,     0,    29,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,     0,
      32,     0,     0,     0,     0,    34,     0,     0,     0,    69,
      34,     0,     0,     0,    69,    38,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,   238,     0,     0,     0,
      45,    46,     0,     0,     0,     0,    46,     0,     0,     0,
       0,    48,     0,    49,     0,     0,    48,   242,    49,    50,
       0,    51,     0,    52,    50,     0,    51,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,    55,     0,    56,
      54,     0,    55,     0,    56,     0,     0,     0,     0,     0,
       0,    60,     0,    61,     0,    62,    60,    63,    61,    64,
      62,     0,    63,    66,    64,     0,     0,    68,    66,    24,
       0,    25,    68,     0,    24,    27,    25,     0,     0,     0,
      27,     0,     0,    29,     0,    30,     0,     0,    29,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,     0,
      32,     0,     0,     0,     0,    34,     0,     0,     0,    69,
      34,     0,     0,     0,    69,    38,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
      45,    46,     0,     0,     0,     0,    46,     0,     0,     0,
       0,    48,     0,    49,   243,     0,    48,     0,    49,    50,
       0,    51,     0,    52,    50,   244,    51,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,    55,     0,    56,
      54,     0,    55,     0,    56,     0,     0,     0,     0,     0,
       0,    60,     0,    61,     0,    62,    60,    63,    61,    64,
      62,     0,    63,    66,    64,     0,     0,    68,    66,    24,
       0,    25,    68,     0,    24,    27,    25,     0,     0,     0,
      27,     0,     0,    29,     0,    30,     0,     0,    29,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,     0,
      32,     0,     0,     0,     0,    34,     0,     0,     0,    69,
      34,     0,     0,     0,    69,    38,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
      45,    46,     0,     0,     0,     0,    46,     0,     0,     0,
       0,    48,     0,    49,     0,     0,    48,     0,    49,    50,
       0,    51,   245,    52,    50,     0,    51,     0,    52,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,    55,     0,    56,
      54,     0,    55,     0,    56,     0,     0,     0,     0,     0,
       0,    60,     0,    61,     0,    62,    60,    63,    61,    64,
      62,     0,    63,    66,    64,     0,     0,    68,    66,    24,
       0,    25,    68,     0,    24,    27,    25,     0,     0,     0,
      27,     0,     0,    29,     0,    30,     0,     0,    29,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,     0,
      32,     0,     0,     0,     0,    34,     0,     0,     0,    69,
      34,     0,     0,     0,    69,    38,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
      45,    46,     0,     0,     0,     0,    46,     0,     0,     0,
       0,    48,     0,    49,     0,     0,    48,     0,    49,    50,
       0,    51,     0,    52,    50,     0,    51,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,   250,    55,     0,    56,
      54,     0,    55,   251,    56,     0,     0,     0,     0,     0,
       0,    60,     0,    61,     0,    62,    60,    63,    61,    64,
      62,     0,    63,    66,    64,     0,     0,    68,    66,    24,
       0,    25,    68,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    30,    24,     0,    25,     0,
       0,     0,    27,     0,     0,    32,     0,     0,     0,     0,
      29,     0,    30,     0,     0,    34,     0,     0,     0,    69,
       0,     0,    32,     0,    69,    38,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    41,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    45,    49,     0,     0,     0,     0,    46,    50,
       0,    51,     0,    52,     0,     0,     0,     0,    48,     0,
      49,     0,     0,     0,     0,     0,    50,     0,    51,     0,
      52,     0,     0,     0,     0,    54,     0,    55,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,    60,    54,    61,    55,    62,    56,    63,     0,    64,
       0,     0,     0,    66,     0,     0,     0,    68,    60,   256,
      61,    24,    62,    25,    63,     0,    64,    27,     0,     0,
      66,     0,     0,     0,    68,    29,     0,    30,     0,     0,
       0,     0,    24,     0,    25,     0,     0,    32,    27,     0,
       0,     0,     0,     0,     0,     0,    29,    34,    30,    69,
       0,     0,     0,     0,     0,     0,     0,    38,    32,     0,
       0,     0,     0,     0,     0,     0,    69,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,    41,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    49,     0,     0,    45,     0,
       0,    50,     0,    51,    46,    52,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,    49,     0,     0,     0,
       0,     0,    50,     0,    51,     0,    52,    54,     0,    55,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,    61,   257,    62,    54,    63,
      55,    64,    56,     0,     0,    66,     0,     0,     0,    68,
       0,    24,     0,    25,    60,     0,    61,    27,    62,   258,
      63,     0,    64,     0,     0,    29,    66,    30,     0,     0,
      68,     0,     0,     0,     0,     0,     0,    32,    24,     0,
      25,     0,     0,     0,    27,     0,     0,    34,     0,     0,
       0,    69,    29,     0,    30,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,    69,     0,    34,     0,     0,     0,     0,     0,
       0,    41,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,    41,     0,
       0,     0,     0,    48,     0,    49,     0,     0,     0,     0,
       0,    50,     0,    51,    45,    52,     0,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,    49,     0,     0,     0,     0,    54,    50,    55,
      51,    56,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,    61,     0,    62,     0,    63,
     259,    64,     0,     0,    54,    66,    55,     0,    56,    68,
       0,    24,     0,    25,     0,     0,     0,    27,     0,     0,
      60,     0,    61,     0,    62,    29,    63,    30,    64,   260,
       0,     0,    66,     0,     0,     0,    68,    32,     0,     0,
       0,     0,     0,     0,    24,     0,    25,    34,     0,     0,
      27,    69,     0,     0,     0,     0,     0,    38,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,    69,     0,
      34,    41,     0,     0,     0,     0,     0,     0,     0,   264,
      38,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    41,    49,     0,     0,     0,     0,
       0,    50,     0,    51,     0,    52,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    54,    49,    55,
       0,    56,     0,     0,    50,     0,    51,     0,    52,     0,
       0,     0,     0,    60,     0,    61,     0,    62,     0,    63,
       0,    64,     0,     0,     0,    66,   262,     0,     0,    68,
      54,    24,    55,    25,    56,     0,     0,    27,     0,     0,
     273,     0,     0,     0,     0,    29,    60,    30,    61,     0,
      62,     0,    63,     0,    64,     0,     0,    32,    66,     0,
       0,     0,    68,     0,    24,     0,    25,    34,     0,     0,
      27,    69,     0,     0,     0,     0,     0,    38,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    41,     0,     0,    69,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    41,    49,     0,     0,     0,   286,
       0,    50,     0,    51,     0,    52,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    54,    49,    55,
       0,    56,     0,     0,    50,     0,    51,     0,    52,     0,
       0,     0,     0,    60,     0,    61,     0,    62,     0,    63,
       0,    64,     0,     0,     0,    66,     0,     0,     0,    68,
      54,    24,    55,    25,    56,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,    29,    60,    30,    61,     0,
      62,     0,    63,     0,    64,     0,     0,    32,    66,     0,
       0,     0,    68,     0,     0,     0,     0,    34,     0,     0,
       0,    69,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   199,   199,     0,     0,
     199,    41,     0,     0,    69,   199,     0,   199,     0,     0,
       0,   199,   199,     0,     0,     0,     0,    45,     0,   199,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,   199,    48,     0,    49,     0,     0,   199,     0,
       0,    50,     0,    51,     0,    52,   199,   199,   199,   199,
     199,     0,     0,   199,   199,     0,   199,     0,     0,   199,
     199,   199,   199,   199,   199,     0,   199,    54,     0,    55,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,   199,    61,     0,    62,     0,    63,
       0,    64,   127,   128,   131,    66,     0,     0,   136,    68,
     138,   142,   143,     0,   199,     0,   150,     0,   142,   163,
       0,     0,     0,   169,     0,     0,   177,   178,   179,   180,
     181,     0,   184,   185,   187,     0,     0,   190,   191,   192,
     193,   194,   195,     0,   197,   199,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,   215,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,     0,     0,   266
};

static const yytype_int16 yycheck[] =
{
      14,   112,    16,    66,    94,    33,    62,    22,    98,   120,
       0,   214,    40,    27,    28,    29,    40,    31,   126,     4,
     128,     6,    36,     8,   120,    10,     4,   214,     6,    67,
       8,    16,    10,    18,    63,    20,    44,    57,    16,    24,
      18,    56,    20,    58,   113,    30,    24,    59,   144,    57,
      58,    65,    30,    38,   121,    40,   150,    42,   214,    44,
      38,    46,    40,    12,    42,    50,    44,    52,    46,    48,
     100,    28,    50,    23,   170,    60,   172,    59,     9,    57,
      17,    11,    60,    68,   124,    19,    25,    72,    39,    74,
     130,    76,   132,   133,    72,    80,    74,    82,    43,    84,
      47,    45,    80,    36,    82,    90,    84,    92,    78,    92,
     214,    96,    90,    61,    69,    73,   144,    81,    96,   104,
     144,   106,    83,   108,    97,    85,   104,    34,   106,   114,
     108,   116,   145,   118,   105,   153,   114,   122,   116,   149,
     118,   167,   151,    61,   122,   101,   214,   135,    94,   134,
      93,    29,    32,    37,    53,   140,   170,   142,    99,   144,
      95,    35,   140,   148,   142,    33,   144,   152,   182,   154,
     148,   156,   125,   158,   152,   160,   154,   162,   156,   164,
     158,   166,   160,   168,   162,   170,   164,   172,   166,   217,
     168,   123,   170,   217,   172,    47,   221,     4,   127,     6,
      26,     8,   129,    10,     4,    47,     6,    47,    47,    16,
      10,    18,    -1,    20,   225,   153,    16,    24,    18,    -1,
      20,    -1,    -1,    30,    24,    -1,    -1,    -1,    -1,   214,
      30,    38,    -1,    40,    -1,    42,   214,    44,    -1,    46,
      40,    -1,    42,    50,    44,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,   276,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    80,    74,    82,    -1,    84,   292,   293,
      80,    -1,    -1,    90,    84,    -1,    -1,    -1,    -1,    96,
      90,    -1,    -1,    -1,    -1,    -1,    96,   104,    -1,   106,
      -1,   108,    -1,    -1,   104,    -1,   106,   114,   108,   116,
      -1,   118,    -1,    -1,   114,   122,   116,    -1,   118,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,   142,    -1,   144,    -1,    -1,
     140,   148,   142,    -1,   144,   152,    -1,   154,   148,   156,
      -1,   158,   152,   160,   154,   162,   156,   164,   158,   166,
     160,   168,   162,   170,   164,   172,   166,     4,   168,     6,
      -1,    -1,   172,    10,     4,     5,     6,    -1,    -1,    -1,
      10,    18,    -1,    20,    -1,    -1,    -1,    -1,    18,    -1,
      20,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    40,    -1,    -1,    -1,   214,    -1,    -1,
      40,    -1,    -1,    50,   214,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,
      90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,   106,
      -1,   108,    -1,    -1,    -1,    -1,   106,   114,   108,   116,
      -1,   118,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,   142,    -1,   144,    -1,    -1,
     140,    -1,   142,    -1,   144,    -1,    -1,   154,    -1,   156,
      -1,   158,    -1,   160,    -1,   162,   156,   164,   158,    -1,
     160,   168,   162,    -1,   164,   172,    -1,     4,   168,     6,
       7,    -1,   172,    10,     4,    -1,     6,    -1,    -1,    -1,
      10,    18,    -1,    20,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    40,    -1,    -1,    -1,   214,    -1,    -1,
      40,    -1,    -1,    50,   214,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,
      90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,   106,
      -1,   108,    -1,    -1,    -1,    -1,   106,   114,   108,   116,
      -1,   118,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,   142,    -1,   144,    -1,    -1,
     140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   156,
      -1,   158,    -1,   160,    -1,   162,   156,   164,   158,    -1,
     160,   168,   162,    -1,   164,   172,    -1,     4,   168,     6,
      -1,    -1,   172,    10,     4,    -1,     6,    -1,    -1,    -1,
      10,    18,    -1,    20,    -1,    -1,    -1,    -1,    18,    -1,
      20,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    40,    -1,    -1,    -1,   214,    -1,    -1,
      40,    41,    -1,    50,   214,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,
      90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,   106,
      -1,   108,    -1,    -1,    -1,    -1,   106,   114,   108,   116,
      -1,   118,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,   142,    -1,   144,    -1,    -1,
     140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,   156,
      -1,   158,    -1,   160,    -1,   162,   156,   164,   158,    -1,
     160,   168,   162,    -1,   164,   172,    -1,    -1,   168,     4,
      -1,     6,   172,    -1,     4,    10,     6,    -1,    -1,    -1,
      10,    -1,    -1,    18,    -1,    20,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    40,    -1,   214,    -1,    -1,
      40,    -1,    -1,    -1,   214,    50,    51,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      90,    96,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   106,    -1,   108,   114,
      -1,   116,    -1,   118,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,
     140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,   158,    -1,   160,   156,   162,   158,   164,
     160,    -1,   162,   168,   164,    -1,    -1,   172,   168,     4,
      -1,     6,   172,    -1,     4,    10,     6,    -1,    -1,    -1,
      10,    -1,    -1,    18,    -1,    20,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,   214,
      40,    -1,    -1,    -1,   214,    50,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      90,    96,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   106,   107,   108,   114,
      -1,   116,    -1,   118,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,
     140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,   158,    -1,   160,   156,   162,   158,   164,
     160,    -1,   162,   168,   164,    -1,    -1,   172,   168,     4,
      -1,     6,   172,    -1,     4,    10,     6,    -1,    -1,    -1,
      10,    -1,    -1,    18,    -1,    20,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,   214,
      40,    -1,    -1,    -1,   214,    50,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      90,    96,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,    -1,   106,    -1,   108,   114,
      -1,   116,    -1,   118,   114,   115,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,
     140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,   158,    -1,   160,   156,   162,   158,   164,
     160,    -1,   162,   168,   164,    -1,    -1,   172,   168,     4,
      -1,     6,   172,    -1,     4,    10,     6,    -1,    -1,    -1,
      10,    -1,    -1,    18,    -1,    20,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,   214,
      40,    -1,    -1,    -1,   214,    50,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      90,    96,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   106,    -1,   108,   114,
      -1,   116,   117,   118,   114,    -1,   116,    -1,   118,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,
     140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,   158,    -1,   160,   156,   162,   158,   164,
     160,    -1,   162,   168,   164,    -1,    -1,   172,   168,     4,
      -1,     6,   172,    -1,     4,    10,     6,    -1,    -1,    -1,
      10,    -1,    -1,    18,    -1,    20,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,   214,
      40,    -1,    -1,    -1,   214,    50,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      90,    96,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   106,    -1,   108,   114,
      -1,   116,    -1,   118,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,   144,
     140,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,   158,    -1,   160,   156,   162,   158,   164,
     160,    -1,   162,   168,   164,    -1,    -1,   172,   168,     4,
      -1,     6,   172,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,     4,    -1,     6,    -1,
      -1,    -1,    10,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    40,    -1,    -1,    -1,   214,
      -1,    -1,    30,    -1,   214,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    74,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    90,   108,    -1,    -1,    -1,    -1,    96,   114,
      -1,   116,    -1,   118,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,
     118,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,   156,   140,   158,   142,   160,   144,   162,    -1,   164,
      -1,    -1,    -1,   168,    -1,    -1,    -1,   172,   156,   157,
     158,     4,   160,     6,   162,    -1,   164,    10,    -1,    -1,
     168,    -1,    -1,    -1,   172,    18,    -1,    20,    -1,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    30,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    40,    20,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    74,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    90,    -1,
      -1,   114,    -1,   116,    96,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,    -1,   118,   140,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,   158,   159,   160,   140,   162,
     142,   164,   144,    -1,    -1,   168,    -1,    -1,    -1,   172,
      -1,     4,    -1,     6,   156,    -1,   158,    10,   160,   161,
     162,    -1,   164,    -1,    -1,    18,   168,    20,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    30,     4,    -1,
       6,    -1,    -1,    -1,    10,    -1,    -1,    40,    -1,    -1,
      -1,   214,    18,    -1,    20,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,    90,   118,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,    -1,    -1,   140,   114,   142,
     116,   144,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,   162,
     163,   164,    -1,    -1,   140,   168,   142,    -1,   144,   172,
      -1,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,    -1,
     156,    -1,   158,    -1,   160,    18,   162,    20,   164,   165,
      -1,    -1,   168,    -1,    -1,    -1,   172,    30,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,    40,    -1,    -1,
      10,   214,    -1,    -1,    -1,    -1,    -1,    50,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      40,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    74,   108,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   140,   108,   142,
      -1,   144,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,   162,
      -1,   164,    -1,    -1,    -1,   168,   169,    -1,    -1,   172,
     140,     4,   142,     6,   144,    -1,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    18,   156,    20,   158,    -1,
     160,    -1,   162,    -1,   164,    -1,    -1,    30,   168,    -1,
      -1,    -1,   172,    -1,     4,    -1,     6,    40,    -1,    -1,
      10,   214,    -1,    -1,    -1,    -1,    -1,    50,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    74,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    74,   108,    -1,    -1,    -1,    79,
      -1,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   140,   108,   142,
      -1,   144,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,   156,    -1,   158,    -1,   160,    -1,   162,
      -1,   164,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,
     140,     4,   142,     6,   144,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,   156,    20,   158,    -1,
     160,    -1,   162,    -1,   164,    -1,    -1,    30,   168,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,
     131,    74,    -1,    -1,   214,   136,    -1,   138,    -1,    -1,
      -1,   142,   143,    -1,    -1,    -1,    -1,    90,    -1,   150,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   163,   106,    -1,   108,    -1,    -1,   169,    -1,
      -1,   114,    -1,   116,    -1,   118,   177,   178,   179,   180,
     181,    -1,    -1,   184,   185,    -1,   187,    -1,    -1,   190,
     191,   192,   193,   194,   195,    -1,   197,   140,    -1,   142,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,   215,   158,    -1,   160,    -1,   162,
      -1,   164,    24,    25,    26,   168,    -1,    -1,    30,   172,
      32,    33,    34,    -1,   235,    -1,    38,    -1,    40,    41,
      -1,    -1,    -1,    45,    -1,    -1,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    -1,    -1,    59,    60,    61,
      62,    63,    64,    -1,    66,   266,    -1,    -1,    -1,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,   220
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    66,   229,   230,    62,   231,   232,     0,   112,   120,
     233,   262,   298,    67,    22,    56,    58,   243,   263,   264,
     265,   214,   214,    63,     4,     6,     8,    10,    16,    18,
      20,    24,    30,    38,    40,    42,    44,    46,    50,    60,
      72,    74,    80,    82,    84,    90,    96,   104,   106,   108,
     114,   116,   118,   122,   140,   142,   144,   148,   152,   154,
     156,   158,   160,   162,   164,   166,   168,   170,   172,   214,
     234,   235,   236,   238,   239,   241,   242,   248,   249,   250,
     251,   252,   253,   254,   257,   258,   259,   266,   268,   269,
     271,   272,   273,   274,   275,   276,   277,   278,   284,   289,
     290,   291,   292,   294,   295,   300,   302,   303,   304,   305,
     306,   307,   309,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   239,    57,    59,   113,   121,   316,   316,   237,
     291,   316,   239,   240,   239,   239,   316,   239,   316,   271,
     282,   283,   316,   316,   150,   308,   239,    48,   279,   280,
     316,    52,    68,    76,    92,   134,   239,   255,   285,   286,
     287,   296,   282,   316,   214,    12,   260,   261,   308,   316,
     100,   267,   269,   293,   294,   295,   298,   316,   316,   316,
     316,   316,    28,   244,   316,   316,   270,   316,   308,   308,
     316,   316,   316,   316,   316,   316,   239,   316,    23,   317,
      59,     5,     7,     9,    11,    17,    19,    21,    25,    31,
      39,    41,   282,    43,    45,   316,    47,    36,   281,    51,
      78,   256,   288,   296,    94,    98,   297,   299,   301,   214,
      61,    69,    73,    75,    81,   316,    83,    85,    91,   239,
      97,   105,   107,   109,   115,   117,   119,   239,    34,   245,
     141,   143,   145,   149,   153,   155,   157,   159,   161,   163,
     165,   167,   169,   151,    49,   282,   316,   286,    61,   214,
     299,    93,   135,    13,   101,    29,    32,   246,   247,   124,
     130,   132,   133,   310,   311,    37,    79,    53,    95,    99,
     239,    35,   126,   128,   312,   313,   314,   123,    33,   239,
     239,   125,   127,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   228,   229,   230,   231,   231,   232,   233,   233,   233,
     234,   235,   236,   237,   237,   238,   239,   239,   239,   239,
     239,   239,   239,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   248,   248,   248,   248,   248,   248,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   263,   264,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   283,   284,   285,   286,   286,   286,   286,   286,   286,
     287,   288,   289,   290,   291,   292,   293,   293,   293,   293,
     293,   294,   295,   296,   297,   297,   298,   299,   300,   301,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     310,   310,   310,   311,   312,   312,   313,   314,   315,   316,
     316,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     318,   319,   320,   321,   322,   323
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     3,     0,     1,     1,
       3,     3,     3,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     1,     3,     3,     1,     2,     1,     2,     3,     3,
       3,     3,     3,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     2,
       3,     1,     3,     3,     3,     3,     0,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     5,     1,
       1,     1,     1,     3,     1,     1,     3,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3
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

#line 2212 "htmlcompact.tab.c"

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

#line 764 "htmlcompact.y"

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
