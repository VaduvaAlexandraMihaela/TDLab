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
  YYSYMBOL_VALIGN = 228,                   /* VALIGN  */
  YYSYMBOL_YYACCEPT = 229,                 /* $accept  */
  YYSYMBOL_htmldocument = 230,             /* htmldocument  */
  YYSYMBOL_html_tag = 231,                 /* html_tag  */
  YYSYMBOL_html_content = 232,             /* html_content  */
  YYSYMBOL_head_tag = 233,                 /* head_tag  */
  YYSYMBOL_head_content = 234,             /* head_content  */
  YYSYMBOL_abbr_tag = 235,                 /* abbr_tag  */
  YYSYMBOL_acronym_tag = 236,              /* acronym_tag  */
  YYSYMBOL_address_tag = 237,              /* address_tag  */
  YYSYMBOL_address_content = 238,          /* address_content  */
  YYSYMBOL_applet_tag = 239,               /* applet_tag  */
  YYSYMBOL_body_content = 240,             /* body_content  */
  YYSYMBOL_applet_content = 241,           /* applet_content  */
  YYSYMBOL_bdo_tag = 242,                  /* bdo_tag  */
  YYSYMBOL_big_tag = 243,                  /* big_tag  */
  YYSYMBOL_body_tag = 244,                 /* body_tag  */
  YYSYMBOL_body_attr = 245,                /* body_attr  */
  YYSYMBOL_body_content_list = 246,        /* body_content_list  */
  YYSYMBOL_caption_tag = 247,              /* caption_tag  */
  YYSYMBOL_colgroup_tag = 248,             /* colgroup_tag  */
  YYSYMBOL_colgroup_content = 249,         /* colgroup_content  */
  YYSYMBOL_col_tag = 250,                  /* col_tag  */
  YYSYMBOL_content_style = 251,            /* content_style  */
  YYSYMBOL_code_tag = 252,                 /* code_tag  */
  YYSYMBOL_dfn_tag = 253,                  /* dfn_tag  */
  YYSYMBOL_kbd_tag = 254,                  /* kbd_tag  */
  YYSYMBOL_q_tag = 255,                    /* q_tag  */
  YYSYMBOL_strong_tag = 256,               /* strong_tag  */
  YYSYMBOL_em_tag = 257,                   /* em_tag  */
  YYSYMBOL_fieldset_tag = 258,             /* fieldset_tag  */
  YYSYMBOL_legend_tag = 259,               /* legend_tag  */
  YYSYMBOL_del_tag = 260,                  /* del_tag  */
  YYSYMBOL_ins_tag = 261,                  /* ins_tag  */
  YYSYMBOL_map_tag = 262,                  /* map_tag  */
  YYSYMBOL_map_content = 263,              /* map_content  */
  YYSYMBOL_area_tag = 264,                 /* area_tag  */
  YYSYMBOL_area_attr = 265,                /* area_attr  */
  YYSYMBOL_script_tag = 266,               /* script_tag  */
  YYSYMBOL_frameset_tag = 267,             /* frameset_tag  */
  YYSYMBOL_frameset_content = 268,         /* frameset_content  */
  YYSYMBOL_noframe_tag = 269,              /* noframe_tag  */
  YYSYMBOL_noscript_tag = 270,             /* noscript_tag  */
  YYSYMBOL_object_content = 271,           /* object_content  */
  YYSYMBOL_object_tag = 272,               /* object_tag  */
  YYSYMBOL_a_tag = 273,                    /* a_tag  */
  YYSYMBOL_a_content = 274,                /* a_content  */
  YYSYMBOL_block = 275,                    /* block  */
  YYSYMBOL_block_content = 276,            /* block_content  */
  YYSYMBOL_basefont_tag = 277,             /* basefont_tag  */
  YYSYMBOL_blockquote_tag = 278,           /* blockquote_tag  */
  YYSYMBOL_center_tag = 279,               /* center_tag  */
  YYSYMBOL_dir_tag = 280,                  /* dir_tag  */
  YYSYMBOL_div_tag = 281,                  /* div_tag  */
  YYSYMBOL_dl_tag = 282,                   /* dl_tag  */
  YYSYMBOL_dl_content = 283,               /* dl_content  */
  YYSYMBOL_dt_tag = 284,                   /* dt_tag  */
  YYSYMBOL_dd_tag = 285,                   /* dd_tag  */
  YYSYMBOL_flow = 286,                     /* flow  */
  YYSYMBOL_flow_content = 287,             /* flow_content  */
  YYSYMBOL_form_tag = 288,                 /* form_tag  */
  YYSYMBOL_form_attr = 289,                /* form_attr  */
  YYSYMBOL_textarea_tag = 290,             /* textarea_tag  */
  YYSYMBOL_form_content = 291,             /* form_content  */
  YYSYMBOL_label_tag = 292,                /* label_tag  */
  YYSYMBOL_label_content = 293,            /* label_content  */
  YYSYMBOL_listing_tag = 294,              /* listing_tag  */
  YYSYMBOL_menu_tag = 295,                 /* menu_tag  */
  YYSYMBOL_p_tag = 296,                    /* p_tag  */
  YYSYMBOL_pre_tag = 297,                  /* pre_tag  */
  YYSYMBOL_pre_content = 298,              /* pre_content  */
  YYSYMBOL_br_tag = 299,                   /* br_tag  */
  YYSYMBOL_hr_tag = 300,                   /* hr_tag  */
  YYSYMBOL_hr_attr = 301,                  /* hr_attr  */
  YYSYMBOL_select_tag = 302,               /* select_tag  */
  YYSYMBOL_select_content = 303,           /* select_content  */
  YYSYMBOL_style_tag = 304,                /* style_tag  */
  YYSYMBOL_option_tag = 305,               /* option_tag  */
  YYSYMBOL_option_attr = 306,              /* option_attr  */
  YYSYMBOL_ol_tag = 307,                   /* ol_tag  */
  YYSYMBOL_ol_attr = 308,                  /* ol_attr  */
  YYSYMBOL_optgroup_tag = 309,             /* optgroup_tag  */
  YYSYMBOL_physical_style = 310,           /* physical_style  */
  YYSYMBOL_s_tag = 311,                    /* s_tag  */
  YYSYMBOL_span_tag = 312,                 /* span_tag  */
  YYSYMBOL_strike_tag = 313,               /* strike_tag  */
  YYSYMBOL_tt_tag = 314,                   /* tt_tag  */
  YYSYMBOL_u_tag = 315,                    /* u_tag  */
  YYSYMBOL_li_tag = 316,                   /* li_tag  */
  YYSYMBOL_li_attr = 317,                  /* li_attr  */
  YYSYMBOL_table_tag = 318,                /* table_tag  */
  YYSYMBOL_table_attr = 319,               /* table_attr  */
  YYSYMBOL_table_content = 320,            /* table_content  */
  YYSYMBOL_tr_tag = 321,                   /* tr_tag  */
  YYSYMBOL_tr_attr = 322,                  /* tr_attr  */
  YYSYMBOL_table_cell = 323,               /* table_cell  */
  YYSYMBOL_td_tag = 324,                   /* td_tag  */
  YYSYMBOL_td_attr = 325,                  /* td_attr  */
  YYSYMBOL_th_tag = 326,                   /* th_tag  */
  YYSYMBOL_th_attr = 327,                  /* th_attr  */
  YYSYMBOL_ul_tag = 328,                   /* ul_tag  */
  YYSYMBOL_ul_attr = 329,                  /* ul_attr  */
  YYSYMBOL_text = 330,                     /* text  */
  YYSYMBOL_text_content = 331,             /* text_content  */
  YYSYMBOL_img_tag = 332,                  /* img_tag  */
  YYSYMBOL_img_attr = 333,                 /* img_attr  */
  YYSYMBOL_font_tag = 334,                 /* font_tag  */
  YYSYMBOL_i_tag = 335,                    /* i_tag  */
  YYSYMBOL_small_tag = 336,                /* small_tag  */
  YYSYMBOL_sub_tag = 337,                  /* sub_tag  */
  YYSYMBOL_sup_tag = 338,                  /* sup_tag  */
  YYSYMBOL_a_attr = 339                    /* a_attr  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3755

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  229
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  559

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   483


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
     225,   226,   227,   228
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   238,   238,   242,   245,   250,   251,   255,   261,   262,
     263,   267,   272,   277,   282,   283,   287,   292,   293,   294,
     295,   296,   297,   298,   299,   303,   307,   312,   319,   321,
     325,   325,   325,   325,   325,   325,   326,   326,   326,   326,
     326,   326,   330,   331,   332,   337,   343,   348,   352,   357,
     358,   359,   360,   361,   362,   363,   364,   368,   373,   378,
     383,   388,   393,   398,   403,   409,   414,   419,   421,   425,
     429,   431,   435,   435,   435,   435,   435,   436,   436,   436,
     436,   436,   441,   446,   452,   458,   463,   468,   473,   479,
     481,   485,   489,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   512,   514,
     519,   525,   530,   532,   536,   538,   542,   544,   548,   552,
     557,   562,   565,   566,   570,   572,   576,   576,   576,   577,
     577,   577,   581,   587,   588,   589,   590,   591,   592,   597,
     602,   607,   612,   614,   618,   620,   624,   626,   630,   631,
     632,   633,   634,   638,   642,   643,   647,   647,   647,   647,
     648,   648,   648,   648,   652,   657,   658,   662,   666,   667,
     671,   671,   672,   672,   676,   678,   682,   682,   682,   683,
     683,   683,   687,   692,   693,   694,   695,   696,   697,   698,
     699,   700,   701,   702,   703,   707,   712,   717,   722,   727,
     734,   735,   739,   739,   740,   740,   744,   745,   749,   749,
     749,   749,   749,   750,   750,   750,   750,   750,   754,   755,
     756,   757,   761,   762,   766,   766,   767,   767,   771,   772,
     776,   777,   781,   781,   781,   781,   781,   781,   781,   782,
     782,   782,   782,   782,   782,   782,   786,   787,   791,   791,
     791,   791,   791,   791,   791,   792,   792,   792,   792,   792,
     792,   792,   796,   798,   802,   802,   803,   803,   807,   808,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   824,
     826,   831,   831,   831,   831,   831,   831,   831,   831,   832,
     832,   832,   832,   832,   832,   832,   832,   837,   838,   839,
     843,   847,   851,   855,   859,   859,   859,   859,   859,   859,
     859,   860,   860,   860,   860,   860,   860,   860
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
  "END_OF_INSTRUCTION", "BOPEN", "BCLOSE", "VALIGN", "$accept",
  "htmldocument", "html_tag", "html_content", "head_tag", "head_content",
  "abbr_tag", "acronym_tag", "address_tag", "address_content",
  "applet_tag", "body_content", "applet_content", "bdo_tag", "big_tag",
  "body_tag", "body_attr", "body_content_list", "caption_tag",
  "colgroup_tag", "colgroup_content", "col_tag", "content_style",
  "code_tag", "dfn_tag", "kbd_tag", "q_tag", "strong_tag", "em_tag",
  "fieldset_tag", "legend_tag", "del_tag", "ins_tag", "map_tag",
  "map_content", "area_tag", "area_attr", "script_tag", "frameset_tag",
  "frameset_content", "noframe_tag", "noscript_tag", "object_content",
  "object_tag", "a_tag", "a_content", "block", "block_content",
  "basefont_tag", "blockquote_tag", "center_tag", "dir_tag", "div_tag",
  "dl_tag", "dl_content", "dt_tag", "dd_tag", "flow", "flow_content",
  "form_tag", "form_attr", "textarea_tag", "form_content", "label_tag",
  "label_content", "listing_tag", "menu_tag", "p_tag", "pre_tag",
  "pre_content", "br_tag", "hr_tag", "hr_attr", "select_tag",
  "select_content", "style_tag", "option_tag", "option_attr", "ol_tag",
  "ol_attr", "optgroup_tag", "physical_style", "s_tag", "span_tag",
  "strike_tag", "tt_tag", "u_tag", "li_tag", "li_attr", "table_tag",
  "table_attr", "table_content", "tr_tag", "tr_attr", "table_cell",
  "td_tag", "td_attr", "th_tag", "th_attr", "ul_tag", "ul_attr", "text",
  "text_content", "img_tag", "img_attr", "font_tag", "i_tag", "small_tag",
  "sub_tag", "sup_tag", "a_attr", YY_NULLPTR
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
     475,   476,   477,   478,   479,   480,   481,   482,   483
};
#endif

#define YYPACT_NINF (-235)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,    58,    78,  -235,   -24,  -235,   -54,     2,     1,    29,
    -142,  -140,    25,  -235,  -235,    16,  -235,   170,    26,  -235,
    -235,   -23,   -32,  -235,  -235,   640,  -235,  -235,  -235,  -235,
    -235,  -235,   181,    34,    44,  -235,  -235,  3541,  3541,   810,
     640,     5,   640,  3541,   640,  3541,   795,  3541,    24,    36,
      51,  3541,    90,   795,  3541,  -114,    45,    68,  3541,     3,
      46,  3541,  3541,  3541,  3541,  3541,    64,  3541,  -107,   418,
      42,     8,    47,  3541,  3541,  3541,  3541,  3541,   640,    23,
       0,   101,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
     462,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  3541,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,   640,  -235,  -235,  -235,
    -235,  -235,  -235,   640,    50,  -235,   971,   980,    96,  -235,
    3541,  -235,    99,   640,   109,    94,  1141,    89,  1162,  -235,
      77,  -235,  3541,  1311,   -28,   114,   640,   120,    79,   122,
    1338,   419,  -235,  -235,  -235,   116,    53,  1481,    48,   119,
     130,   -28,   131,  1510,   640,    38,   -64,   135,  1651,  1680,
    1821,  1850,  1991,   111,  -235,  -235,  -235,  -235,  -235,    74,
    2026,  -235,  -235,  -235,   137,  -235,  -235,  -235,  -235,  -235,
     112,  3541,  -235,  -235,  -235,  -235,  -235,  -235,  -235,   718,
     -28,  -235,  -235,    67,   -28,  -235,  -235,  -235,    84,  3541,
     139,  2167,  2196,  2339,  2366,  2515,   -22,  3541,   140,   143,
    -235,  -235,  -235,  -235,  -235,   104,   -44,  -235,  -235,  -235,
     619,    91,  -235,  -235,  -235,  -235,  -235,   132,   640,  -235,
    -235,  -235,  -235,  -235,  -235,    66,   105,   -28,   108,   640,
    3541,   107,   124,    79,  -235,    83,  -235,    63,   -39,   -47,
    -235,  -235,  -235,   110,  -235,   100,   419,  -235,  -235,  -235,
    -235,  -235,  -235,     4,    87,  -235,   119,    92,   -28,  -235,
      71,  -235,  -235,    70,  -235,  -235,  -235,   -64,  -235,  -235,
    -235,  -235,  -235,   640,   147,   111,  -235,  -235,  -235,  -235,
    -235,  -235,  3541,  3541,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,    37,  3541,  3541,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,    40,   -28,  -235,  -235,    57,   -28,  -235,  -235,
    -235,  2542,  3541,  -235,  -235,  -235,  -235,  -235,  -235,  2685,
    3541,  3541,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,   166,   795,  -235,  -235,    72,  -235,   148,  -235,   145,
    2718,  -235,   795,  -235,   156,  3541,   419,   134,  -235,    21,
     117,   121,  -235,  -235,   115,  -235,  -235,   185,  3541,  -235,
    -235,  -235,  -235,  -235,   199,  -235,   177,  -235,   178,  -235,
    -235,   175,   253,   260,   -51,   147,  2855,  2888,  -235,   154,
    -235,   136,  -235,   151,  -235,  3031,  -235,  3058,  3201,  -235,
     155,   795,  -235,  -235,  -235,  -235,  -235,   271,  -235,  3234,
     256,  -235,    97,  -235,  -235,    60,   222,  -235,  -235,  -235,
    3371,  3541,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,   640,   287,  -235,    19,  -235,  -235,  -235,   200,  -235,
     -51,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
     173,  -235,  -235,  -235,   231,   118,  -235,  -235,  -235,  -235,
    3404,   296,  -235,   -66,  -235,  -235,    20,  -235,   208,  -235,
    -235,   239,  -235,  -235,    -1,    30,   211,  -235,  -235,   -66,
    -235,  -235,  -235,  -235,   640,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,    33,   640,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,    43,  -235,   212,   213,   640,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,   209,   640,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,   214,  -235,   215,  -235,  -235
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     8,     0,     0,     0,
       0,     0,     0,    10,     9,     0,     3,     0,     0,     5,
       6,     0,     0,     7,     4,    17,    30,    31,    32,    33,
      34,    35,     0,     0,     0,    82,   167,     0,     0,     0,
      17,     0,    17,     0,    17,     0,    93,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,   278,    49,    50,    19,   275,    42,   183,   184,
       0,   274,    51,    52,    53,    54,    55,    56,    21,    22,
      23,   276,   277,   272,    20,    92,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   104,   105,   270,    18,   103,
     273,   187,   189,   190,   193,   194,   106,   107,    24,   268,
     271,   185,   186,   188,   191,   192,    17,    36,    37,    38,
      39,    40,    41,    17,     0,    83,     0,     0,     0,    14,
      15,    25,     0,    17,     0,     0,     0,     0,     0,   122,
       0,   121,   123,     0,     0,     0,    17,     0,     0,     0,
       0,    17,   127,   126,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,   148,     0,     0,     0,
       0,     0,     0,     0,   208,   210,   209,   211,   212,     0,
       0,   285,   281,   282,     0,   283,   284,   286,   287,   288,
       0,     0,   304,   305,   306,   307,   308,   309,   310,     0,
       0,   265,   264,     0,     0,   178,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     154,   156,   157,   158,   159,     0,     0,    28,    43,   269,
       0,     0,    84,    11,    12,    13,    16,     0,    17,    26,
      27,   110,    57,    65,    58,     0,     0,     0,     0,    17,
       0,     0,     0,     0,    62,     0,   133,     0,     0,     0,
     137,   134,   136,     0,   135,     0,    17,   130,   129,   131,
      66,    59,   141,     0,     0,    69,     0,     0,     0,    86,
       0,    88,   151,     0,   149,   150,   152,   148,    60,   195,
     196,   197,    61,    17,     0,     0,   213,   215,   214,   216,
     217,   198,     0,     0,   293,   289,   290,   291,   292,   294,
     295,   296,     0,    91,     0,   311,   312,   313,   314,   315,
     316,   317,     0,     0,   267,   266,     0,     0,   181,   179,
     180,     0,     0,   300,   199,   301,   303,   302,   111,     0,
       0,     0,   155,   160,   161,   162,   163,   153,    29,    85,
     108,     0,    93,   202,   203,     0,   112,     0,   114,     0,
       0,   116,    93,   118,     0,     0,    17,     0,   140,     0,
       0,     0,   165,   166,     0,   124,   138,     0,     0,    74,
      72,    73,    75,    76,     0,    67,     0,   142,     0,    87,
     146,     0,     0,     0,     0,     0,     0,     0,    89,     0,
     262,     0,   174,     0,   144,     0,   297,     0,     0,   109,
       0,    93,   204,   205,   113,   115,   119,     0,   117,     0,
       0,   139,     0,   171,   170,     0,     0,   164,   132,   125,
       0,     0,    79,    77,    78,    80,    81,    68,   143,   147,
      45,    17,     0,    47,     0,   218,   219,   221,     0,   220,
       0,   279,   280,    90,   263,   175,   145,   298,   299,   200,
       0,   120,    64,    63,     0,     0,   173,   172,   182,    70,
       0,     0,    46,     0,   224,   225,     0,   206,     0,   201,
     168,     0,    71,    48,     0,     0,     0,   228,   229,     0,
     226,   227,   207,   169,    17,   232,   236,   237,   234,   235,
     238,   233,     0,    17,   248,   252,   253,   250,   251,   254,
     249,     0,   222,     0,     0,    17,   239,   243,   244,   241,
     242,   245,   240,     0,    17,   255,   259,   260,   257,   258,
     261,   256,   223,   230,     0,   246,     0,   231,   247
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,   335,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,   -25,  -235,  -235,  -235,  -235,  -235,   207,    31,   -68,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,    52,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -151,    17,   -37,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,    80,  -235,  -235,   -52,  -235,  -235,
    -235,  -235,  -234,  -235,  -235,  -235,  -235,   311,  -235,    54,
    -149,  -139,  -235,    85,  -235,   357,   -18,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,   183,  -235,  -235,
    -235,   -97,  -235,  -235,  -134,  -235,  -235,  -235,  -235,  -235,
    -235,   -33,   -26,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    12,    83,    84,    85,   148,
      86,   280,   152,    88,    89,    19,    32,    90,   314,   414,
     462,   463,    91,    92,    93,    94,    95,    96,    97,   281,
     386,    98,    99,   100,   294,   295,   404,    13,    20,    34,
     144,   101,   185,   102,   103,   332,   104,   105,   106,   107,
     108,   109,   110,   111,   271,   272,   383,   160,   161,   112,
     175,   282,   283,   284,   387,   113,   114,   115,   116,   303,
     117,   118,   245,   285,   391,   306,   392,   445,   119,   228,
     393,   120,   121,   122,   123,   124,   125,   266,   375,   126,
     199,   468,   469,   496,   506,   507,   522,   508,   531,   127,
     223,   128,   129,   130,   210,   131,   132,   133,   134,   135,
     219
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,   176,   514,   240,   146,   147,   150,   398,   153,   159,
     156,   224,   158,   162,   163,   151,   159,   155,   170,   157,
     162,   177,   493,   509,   442,   183,   237,   164,   188,   189,
     190,   191,   192,   523,   200,   302,   535,   304,     6,   166,
     231,   232,   233,   234,   235,   220,   544,   305,   179,   186,
     229,    17,   397,   236,   168,   389,    11,     1,    10,   390,
     504,     4,   505,   485,     6,   248,    11,   193,    16,   372,
     343,   181,    21,   464,    22,   431,   201,   315,     5,   465,
      69,   466,   467,    24,    33,    18,   202,   347,    23,    36,
      35,   203,   143,   171,   204,   205,   206,   207,   208,   209,
     178,   145,   249,   184,   246,   255,    80,   362,    81,   252,
     256,    87,   258,   259,   261,   323,   263,   267,   251,   286,
     249,   249,   265,   269,   249,   273,   290,   270,   257,   292,
     249,   293,   249,   296,   298,   301,   249,   249,   307,   313,
     322,   268,   352,   360,   249,   358,   361,   367,   376,   370,
     369,   249,   440,   378,   381,   278,   302,   249,   304,   300,
     382,   385,   249,   249,   249,   249,   249,   394,   305,   396,
     405,   395,   409,    25,   249,   410,     7,   407,   333,   399,
     154,   413,   418,   429,   136,   400,   401,   402,   403,   420,
     435,   434,   515,   241,   242,   441,   351,   516,   243,   244,
     225,   517,   451,   438,   359,   249,   249,   249,   249,   249,
     422,   389,   494,   510,   447,   226,   165,   238,   239,   180,
     518,   519,   520,   524,   227,   248,   536,   521,   525,   167,
     443,   537,   526,   371,   221,   538,   545,   380,   444,   187,
     230,   546,   182,   169,   379,   547,   449,   495,   511,   222,
     448,   527,   528,   529,   539,   540,   541,   194,   530,   344,
     457,   542,   195,   458,   548,   549,   550,   316,   196,   486,
     172,   551,   317,   373,   345,   374,   348,   487,   318,   432,
     459,   433,   460,   197,   198,   474,   173,   174,   412,   416,
     417,   349,   461,   319,   320,   324,   287,   363,   364,   473,
     350,   333,   365,   366,   475,   325,   479,   249,   481,   483,
     326,   484,   288,   289,   327,   328,   329,   330,   331,   425,
     430,   488,   492,   497,   499,   249,   500,   427,   428,   503,
     437,   512,   501,   249,   513,   159,   532,   552,   555,   162,
     553,   557,    15,   250,   558,   159,   415,   470,   406,   162,
     149,   419,   439,   384,   249,    26,    27,    28,    29,    30,
      31,   411,   388,    14,   297,   450,   137,   138,   139,   140,
     141,   142,   446,   498,   452,   533,     0,     0,     0,   480,
     453,   454,   455,   456,     0,     0,     0,     0,     0,     0,
     249,   249,     0,     0,   159,     0,     0,     0,   162,   249,
       0,   249,   249,   342,     0,     0,     0,   346,     0,     0,
       0,     0,     0,   249,     0,     0,     0,     0,   490,     0,
       0,   211,     0,    37,   249,    38,     0,    39,     0,    40,
       0,     0,     0,     0,     0,    41,   491,    42,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,    45,
     377,     0,     0,     0,     0,     0,     0,    46,     0,    47,
       0,    48,     0,    49,   249,    50,    37,     0,    38,    51,
      39,   275,    40,     0,     0,     0,     0,     0,    41,    52,
      42,   408,    43,     0,     0,   247,    44,   276,     0,   534,
       0,    53,    45,    54,     0,   277,     0,     0,   543,    55,
      46,    56,    47,    57,    48,     0,    49,     0,    50,    58,
     554,   278,    51,     0,     0,    59,     0,     0,     0,   556,
       0,     0,    52,    60,     0,    61,   421,    62,     0,     0,
     423,     0,     0,    63,    53,    64,    54,    65,     0,     0,
       0,    66,    55,     0,    56,     0,    57,     0,     0,     0,
       0,     0,    58,   279,     0,     0,     0,     0,    59,    67,
       0,    68,     0,    69,     0,     0,    60,    70,    61,     0,
      62,    71,     0,    72,     0,    73,    63,    74,    64,    75,
      65,    76,     0,    77,    66,    78,     0,    79,     0,    80,
       0,    81,   212,   213,   214,   215,   216,   217,   218,     0,
       0,     0,    67,     0,    68,     0,    69,     0,     0,     0,
      70,     0,     0,     0,    71,     0,    72,     0,    73,     0,
      74,     0,    75,    37,    76,    38,    77,    39,    78,    40,
      79,     0,    80,    82,    81,    41,     0,    42,     0,    43,
       0,     0,   368,    44,    37,     0,    38,     0,    39,    45,
      40,     0,     0,     0,     0,     0,    41,    46,    42,    47,
      43,    48,     0,    49,    44,    50,     0,     0,     0,    51,
      45,     0,     0,     0,     0,     0,    82,     0,    46,    52,
      47,     0,    48,     0,    49,     0,    50,     0,     0,     0,
      51,    53,     0,    54,     0,     0,     0,     0,     0,    55,
      52,    56,     0,    57,     0,     0,     0,     0,     0,    58,
       0,     0,    53,     0,    54,    59,     0,     0,     0,     0,
      55,   334,    56,    60,    57,    61,     0,    62,     0,     0,
      58,     0,     0,    63,     0,    64,    59,    65,     0,     0,
       0,    66,     0,     0,    60,     0,    61,     0,    62,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,    67,
       0,    68,    66,    69,     0,     0,     0,    70,     0,     0,
       0,    71,     0,    72,     0,    73,     0,    74,     0,    75,
      67,    76,    68,    77,    69,    78,     0,    79,    70,    80,
       0,    81,    71,     0,    72,     0,    73,     0,    74,    37,
      75,    38,    76,     0,    77,    40,    78,     0,    79,     0,
      80,    41,    81,    42,    37,    43,    38,     0,     0,    44,
      40,     0,     0,     0,     0,    45,     0,     0,    42,     0,
      43,     0,     0,    82,     0,    47,     0,    48,     0,    49,
      45,    50,     0,     0,     0,    51,     0,     0,     0,     0,
      47,     0,     0,     0,    82,    52,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,    55,     0,     0,     0,    57,
       0,     0,     0,     0,    54,    58,     0,     0,     0,     0,
       0,    59,   335,   336,   337,   338,   339,   340,   341,    60,
      58,    61,     0,    62,     0,     0,    59,     0,     0,    63,
       0,    64,     0,    65,     0,     0,    61,    66,    62,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
       0,     0,     0,     0,     0,    67,     0,    68,     0,    69,
       0,     0,     0,    70,     0,     0,     0,    71,     0,    72,
      67,    73,    68,    74,    69,    75,     0,    76,     0,    77,
       0,    78,     0,    79,    72,     0,    73,    81,    74,     0,
      75,     0,    76,     0,    77,    37,   253,    38,    79,     0,
       0,    40,    81,     0,    37,     0,    38,   254,     0,    42,
      40,    43,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    45,     0,     0,     0,     0,     0,     0,     0,    82,
      45,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    51,     0,     0,    82,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    61,     0,    62,
       0,     0,     0,     0,     0,    63,    61,    64,    62,    65,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,    68,     0,    69,     0,     0,     0,     0,
      67,     0,    68,     0,    69,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,    73,     0,    74,    79,
      75,     0,    76,    81,    77,    37,     0,    38,    79,     0,
       0,    40,    81,     0,     0,     0,     0,     0,     0,    42,
       0,    43,   260,     0,     0,     0,    37,     0,    38,     0,
       0,    45,    40,     0,     0,     0,     0,     0,     0,     0,
      42,    47,    43,     0,     0,    82,     0,     0,     0,     0,
       0,    51,    45,   262,    82,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,    54,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,    62,
       0,     0,    58,     0,     0,    63,     0,    64,    59,    65,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      62,     0,     0,     0,     0,     0,    63,     0,    64,     0,
      65,    67,     0,    68,     0,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,    75,    67,    76,    68,    77,    69,     0,     0,    79,
       0,     0,     0,    81,     0,    37,     0,    38,    73,     0,
      74,    40,    75,     0,    76,     0,    77,     0,     0,    42,
      79,    43,     0,     0,    81,     0,     0,     0,     0,     0,
       0,    45,    37,     0,    38,     0,     0,     0,    40,     0,
       0,    47,   264,     0,     0,    82,    42,     0,    43,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    47,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    51,   274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,    54,     0,     0,     0,     0,    61,     0,    62,
       0,     0,     0,     0,     0,    63,     0,    64,    58,    65,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,    62,     0,     0,     0,
       0,    67,    63,    68,    64,    69,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,    67,    79,
      68,     0,    69,    81,     0,    37,     0,    38,     0,     0,
       0,    40,     0,     0,    73,     0,    74,     0,    75,    42,
      76,    43,    77,     0,     0,     0,    79,     0,     0,     0,
      81,    45,     0,     0,    37,     0,    38,     0,     0,     0,
      40,    47,     0,     0,     0,    82,     0,     0,    42,     0,
      43,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,    82,     0,     0,    54,   291,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,    54,     0,     0,    61,     0,    62,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
      58,   299,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,    62,     0,
       0,    67,     0,    68,    63,    69,    64,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,     0,    79,
      67,     0,    68,    81,    69,    37,     0,    38,     0,     0,
       0,    40,     0,     0,     0,     0,    73,     0,    74,    42,
      75,    43,    76,     0,    77,     0,     0,     0,    79,     0,
       0,    45,    81,     0,    37,     0,    38,     0,     0,     0,
      40,    47,     0,     0,     0,    82,     0,     0,    42,     0,
      43,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,    82,    54,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,    54,     0,     0,    61,   308,    62,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
      58,     0,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,    62,   309,
       0,    67,     0,    68,    63,    69,    64,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,     0,    79,
      67,     0,    68,    81,    69,    37,     0,    38,     0,     0,
       0,    40,     0,     0,     0,     0,    73,     0,    74,    42,
      75,    43,    76,     0,    77,     0,     0,     0,    79,     0,
       0,    45,    81,     0,    37,     0,    38,     0,     0,     0,
      40,    47,     0,     0,     0,    82,     0,     0,    42,     0,
      43,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,    82,    54,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,    54,     0,     0,    61,     0,    62,
       0,     0,     0,     0,     0,    63,   310,    64,     0,    65,
      58,     0,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,    62,     0,
       0,    67,     0,    68,    63,    69,    64,   311,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,     0,    79,
      67,     0,    68,    81,    69,    37,     0,    38,     0,     0,
       0,    40,     0,     0,     0,     0,    73,     0,    74,    42,
      75,    43,    76,     0,    77,     0,     0,     0,    79,     0,
       0,    45,    81,     0,     0,     0,     0,     0,     0,     0,
      37,    47,    38,     0,     0,    82,    40,     0,     0,     0,
       0,    51,     0,     0,    42,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,    82,    54,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,    62,
      54,     0,     0,     0,     0,    63,     0,    64,     0,    65,
     312,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    61,    68,    62,    69,     0,     0,     0,     0,
      63,     0,    64,     0,    65,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,     0,    79,
       0,     0,     0,    81,     0,     0,    67,   321,    68,     0,
      69,    37,     0,    38,     0,     0,     0,    40,     0,     0,
       0,     0,    73,     0,    74,    42,    75,    43,    76,     0,
      77,     0,     0,     0,    79,     0,     0,    45,    81,     0,
      37,     0,    38,     0,     0,    82,    40,    47,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
      82,    54,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
      54,     0,     0,    61,     0,    62,     0,     0,     0,     0,
       0,    63,     0,    64,     0,    65,    58,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,    62,     0,     0,    67,     0,    68,
      63,    69,    64,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     0,    73,   353,    74,     0,    75,     0,    76,
       0,    77,     0,     0,     0,    79,    67,     0,    68,    81,
      69,     0,     0,    37,     0,    38,     0,     0,     0,    40,
       0,     0,    73,     0,    74,   354,    75,    42,    76,    43,
      77,     0,     0,     0,    79,     0,     0,     0,    81,    45,
      37,     0,    38,     0,     0,     0,    40,     0,     0,    47,
       0,    82,     0,     0,    42,     0,    43,     0,     0,    51,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
      82,     0,     0,    54,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,    59,     0,     0,     0,     0,
      54,     0,     0,     0,     0,    61,     0,    62,     0,     0,
       0,     0,     0,    63,     0,    64,    58,    65,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,    62,     0,     0,     0,     0,    67,
      63,    68,    64,    69,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    74,     0,    75,
     355,    76,     0,    77,     0,     0,    67,    79,    68,     0,
      69,    81,     0,     0,     0,     0,     0,     0,     0,    37,
       0,    38,    73,     0,    74,    40,    75,     0,    76,   356,
      77,     0,     0,    42,    79,    43,     0,     0,    81,     0,
       0,     0,     0,     0,     0,    45,    37,     0,    38,     0,
       0,     0,    40,    82,     0,    47,     0,     0,     0,     0,
      42,     0,    43,     0,     0,    51,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
      82,     0,    47,     0,     0,     0,     0,     0,     0,    54,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,    54,     0,     0,     0,
       0,    61,     0,    62,     0,     0,     0,     0,     0,    63,
       0,    64,    58,    65,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      62,     0,     0,     0,     0,    67,    63,    68,    64,    69,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    74,     0,    75,     0,    76,     0,    77,
     357,     0,    67,    79,    68,     0,    69,    81,     0,    37,
       0,    38,     0,     0,     0,    40,     0,   424,    73,     0,
      74,     0,    75,    42,    76,    43,    77,     0,     0,     0,
      79,     0,     0,     0,    81,    45,     0,     0,     0,     0,
       0,     0,    37,     0,    38,    47,     0,     0,    40,    82,
       0,     0,     0,     0,     0,    51,    42,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    47,    54,
       0,     0,     0,     0,     0,     0,     0,   436,    51,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    54,    62,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    67,    62,    68,     0,    69,
       0,     0,    63,     0,    64,     0,    65,     0,     0,     0,
       0,    73,     0,    74,     0,    75,     0,    76,     0,    77,
       0,     0,     0,    79,   426,     0,     0,    81,    67,    37,
      68,    38,    69,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,    42,    73,    43,    74,     0,    75,     0,
      76,     0,    77,     0,     0,    45,    79,     0,     0,     0,
      81,     0,    37,     0,    38,    47,     0,     0,    40,    82,
       0,     0,     0,     0,     0,    51,    42,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    54,
       0,     0,    82,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    54,    62,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    67,    62,    68,   471,    69,
       0,     0,    63,     0,    64,     0,    65,     0,     0,     0,
       0,    73,     0,    74,     0,    75,     0,    76,     0,    77,
       0,     0,     0,    79,     0,     0,     0,    81,    67,     0,
      68,   472,    69,     0,     0,    37,     0,    38,     0,     0,
       0,    40,     0,     0,    73,     0,    74,     0,    75,    42,
      76,    43,    77,     0,     0,     0,    79,     0,     0,     0,
      81,    45,    37,     0,    38,     0,     0,     0,    40,    82,
       0,    47,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,    82,     0,     0,    54,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,    54,     0,     0,     0,     0,    61,     0,    62,
       0,     0,     0,     0,     0,    63,     0,    64,    58,    65,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,    62,     0,     0,     0,
       0,    67,    63,    68,    64,    69,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,    67,    79,
      68,     0,    69,    81,     0,    37,     0,    38,     0,     0,
       0,    40,     0,     0,    73,     0,    74,     0,    75,    42,
      76,    43,    77,     0,     0,     0,    79,   477,     0,     0,
      81,    45,     0,     0,     0,     0,     0,     0,    37,     0,
      38,    47,     0,     0,    40,    82,     0,     0,     0,     0,
       0,    51,    42,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,    82,     0,    47,    54,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    54,    62,
       0,     0,     0,   482,     0,    63,     0,    64,     0,    65,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    67,    62,    68,     0,    69,     0,     0,    63,     0,
      64,     0,    65,     0,     0,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,     0,    79,
     478,     0,     0,    81,    67,    37,    68,    38,    69,     0,
       0,    40,     0,     0,   489,     0,     0,     0,     0,    42,
      73,    43,    74,     0,    75,     0,    76,     0,    77,     0,
       0,    45,    79,     0,     0,     0,    81,     0,    37,     0,
      38,    47,     0,     0,    40,    82,     0,   502,     0,     0,
       0,    51,    42,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    54,     0,     0,    82,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    54,    62,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    67,    62,    68,     0,    69,     0,     0,    63,     0,
      64,     0,    65,     0,     0,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,     0,    79,
       0,     0,     0,    81,    67,    37,    68,    38,    69,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,    42,
      73,    43,    74,     0,    75,     0,    76,     0,    77,     0,
       0,    45,    79,     0,     0,     0,    81,     0,     0,     0,
       0,    47,     0,     0,     0,    82,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,    62,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,    68,     0,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,     0,     0,     0,    79,
       0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82
};

static const yytype_int16 yycheck[] =
{
      25,    53,     3,     3,    37,    38,    39,     3,     3,    46,
      43,     3,    45,    46,    47,    40,    53,    42,    51,    44,
      53,    54,     3,     3,     3,    58,     3,     3,    61,    62,
      63,    64,    65,     3,    67,   186,     3,   186,    62,     3,
      73,    74,    75,    76,    77,     3,     3,   186,     3,     3,
       3,    22,   286,    78,     3,    94,   120,    66,   112,    98,
     126,     3,   128,     3,    62,    90,   120,     3,    67,     3,
       3,     3,   214,   124,   214,     3,   183,     3,     0,   130,
     144,   132,   133,    67,    58,    56,   193,     3,    63,   121,
     113,   198,    58,     3,   201,   202,   203,   204,   205,   206,
     214,    57,   128,   100,     3,     9,   170,     3,   172,    59,
      11,   136,     3,    19,    25,     3,    39,     3,   143,     3,
     146,   147,   150,     3,   150,     3,    73,    48,   153,    81,
     156,    12,   158,     3,     3,    97,   162,   163,     3,    28,
       3,   166,     3,     3,   170,   167,     3,   191,    43,    17,
      59,   177,   386,    45,    47,    92,   307,   183,   307,   184,
      36,    78,   188,   189,   190,   191,   192,   214,   307,    69,
      83,    61,   101,     3,   200,   105,   200,    85,   211,   175,
     175,    34,   145,    17,     3,   181,   182,   183,   184,   149,
      45,    43,   193,   193,   194,    61,   229,   198,   198,   199,
     192,   202,     3,    47,   237,   231,   232,   233,   234,   235,
     153,    94,   193,   193,    93,   207,   192,   194,   195,   174,
     221,   222,   223,   193,   216,   250,   193,   228,   198,   193,
     209,   198,   202,   258,   192,   202,   193,   270,   217,   193,
     193,   198,   174,   192,   269,   202,    61,   228,   228,   207,
     135,   221,   222,   223,   221,   222,   223,   193,   228,   192,
      83,   228,   198,    85,   221,   222,   223,   193,   204,   209,
     180,   228,   198,   207,   207,   209,   192,   217,   204,   207,
     105,   209,    29,   219,   220,   149,   196,   197,   313,   322,
     323,   207,    32,   219,   220,   183,   180,   193,   194,   145,
     216,   334,   198,   199,   153,   193,   151,   333,    37,    53,
     198,   214,   196,   197,   202,   203,   204,   205,   206,   352,
     372,    99,    35,   123,   151,   351,    95,   360,   361,    33,
     382,   123,   214,   359,    95,   372,   125,   125,   129,   372,
     127,   127,     7,   136,   129,   382,   315,   415,   296,   382,
      39,   334,   385,   273,   380,   185,   186,   187,   188,   189,
     190,   307,   277,     6,   181,   398,   185,   186,   187,   188,
     189,   190,   390,   470,   175,   509,    -1,    -1,    -1,   431,
     181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
     416,   417,    -1,    -1,   431,    -1,    -1,    -1,   431,   425,
      -1,   427,   428,   220,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,    -1,   439,    -1,    -1,    -1,    -1,   451,    -1,
      -1,     3,    -1,     4,   450,     6,    -1,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,   461,    18,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    40,
      -1,    42,    -1,    44,   490,    46,     4,    -1,     6,    50,
       8,    52,    10,    -1,    -1,    -1,    -1,    -1,    16,    60,
      18,   298,    20,    -1,    -1,    23,    24,    68,    -1,   514,
      -1,    72,    30,    74,    -1,    76,    -1,    -1,   523,    80,
      38,    82,    40,    84,    42,    -1,    44,    -1,    46,    90,
     535,    92,    50,    -1,    -1,    96,    -1,    -1,    -1,   544,
      -1,    -1,    60,   104,    -1,   106,   343,   108,    -1,    -1,
     347,    -1,    -1,   114,    72,   116,    74,   118,    -1,    -1,
      -1,   122,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    90,   134,    -1,    -1,    -1,    -1,    96,   140,
      -1,   142,    -1,   144,    -1,    -1,   104,   148,   106,    -1,
     108,   152,    -1,   154,    -1,   156,   114,   158,   116,   160,
     118,   162,    -1,   164,   122,   166,    -1,   168,    -1,   170,
      -1,   172,   174,   175,   176,   177,   178,   179,   180,    -1,
      -1,    -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,
     148,    -1,    -1,    -1,   152,    -1,   154,    -1,   156,    -1,
     158,    -1,   160,     4,   162,     6,   164,     8,   166,    10,
     168,    -1,   170,   214,   172,    16,    -1,    18,    -1,    20,
      -1,    -1,    23,    24,     4,    -1,     6,    -1,     8,    30,
      10,    -1,    -1,    -1,    -1,    -1,    16,    38,    18,    40,
      20,    42,    -1,    44,    24,    46,    -1,    -1,    -1,    50,
      30,    -1,    -1,    -1,    -1,    -1,   214,    -1,    38,    60,
      40,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,
      50,    72,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,
      60,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    72,    -1,    74,    96,    -1,    -1,    -1,    -1,
      80,     3,    82,   104,    84,   106,    -1,   108,    -1,    -1,
      90,    -1,    -1,   114,    -1,   116,    96,   118,    -1,    -1,
      -1,   122,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,   140,
      -1,   142,   122,   144,    -1,    -1,    -1,   148,    -1,    -1,
      -1,   152,    -1,   154,    -1,   156,    -1,   158,    -1,   160,
     140,   162,   142,   164,   144,   166,    -1,   168,   148,   170,
      -1,   172,   152,    -1,   154,    -1,   156,    -1,   158,     4,
     160,     6,   162,    -1,   164,    10,   166,    -1,   168,    -1,
     170,    16,   172,    18,     4,    20,     6,    -1,    -1,    24,
      10,    -1,    -1,    -1,    -1,    30,    -1,    -1,    18,    -1,
      20,    -1,    -1,   214,    -1,    40,    -1,    42,    -1,    44,
      30,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,   214,    60,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    74,    90,    -1,    -1,    -1,    -1,
      -1,    96,   174,   175,   176,   177,   178,   179,   180,   104,
      90,   106,    -1,   108,    -1,    -1,    96,    -1,    -1,   114,
      -1,   116,    -1,   118,    -1,    -1,   106,   122,   108,    -1,
      -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,
      -1,    -1,    -1,   148,    -1,    -1,    -1,   152,    -1,   154,
     140,   156,   142,   158,   144,   160,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,   154,    -1,   156,   172,   158,    -1,
     160,    -1,   162,    -1,   164,     4,     5,     6,   168,    -1,
      -1,    10,   172,    -1,     4,    -1,     6,     7,    -1,    18,
      10,    20,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      30,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    50,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    96,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,   106,   116,   108,   118,
      -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
     140,    -1,   142,    -1,   144,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,   156,    -1,   158,   168,
     160,    -1,   162,   172,   164,     4,    -1,     6,   168,    -1,
      -1,    10,   172,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    20,    21,    -1,    -1,    -1,     4,    -1,     6,    -1,
      -1,    30,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    40,    20,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    50,    30,    31,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    74,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,    90,    -1,    -1,   114,    -1,   116,    96,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,
     118,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,   140,   162,   142,   164,   144,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,     4,    -1,     6,   156,    -1,
     158,    10,   160,    -1,   162,    -1,   164,    -1,    -1,    18,
     168,    20,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    30,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,
      -1,    40,    41,    -1,    -1,   214,    18,    -1,    20,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    90,   118,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,   140,   114,   142,   116,   144,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,   140,   168,
     142,    -1,   144,   172,    -1,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   156,    -1,   158,    -1,   160,    18,
     162,    20,   164,    -1,    -1,    -1,   168,    -1,    -1,    -1,
     172,    30,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,
      10,    40,    -1,    -1,    -1,   214,    -1,    -1,    18,    -1,
      20,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,   214,    -1,    -1,    74,    75,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
      90,    91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   140,    -1,   142,   114,   144,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
     140,    -1,   142,   172,   144,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,   156,    -1,   158,    18,
     160,    20,   162,    -1,   164,    -1,    -1,    -1,   168,    -1,
      -1,    30,   172,    -1,     4,    -1,     6,    -1,    -1,    -1,
      10,    40,    -1,    -1,    -1,   214,    -1,    -1,    18,    -1,
      20,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,   214,    74,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
      90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
      -1,   140,    -1,   142,   114,   144,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
     140,    -1,   142,   172,   144,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,   156,    -1,   158,    18,
     160,    20,   162,    -1,   164,    -1,    -1,    -1,   168,    -1,
      -1,    30,   172,    -1,     4,    -1,     6,    -1,    -1,    -1,
      10,    40,    -1,    -1,    -1,   214,    -1,    -1,    18,    -1,
      20,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,   214,    74,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,    -1,   118,
      90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   140,    -1,   142,   114,   144,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
     140,    -1,   142,   172,   144,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,   156,    -1,   158,    18,
     160,    20,   162,    -1,   164,    -1,    -1,    -1,   168,    -1,
      -1,    30,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    40,     6,    -1,    -1,   214,    10,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   214,    74,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      74,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
     119,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   106,   142,   108,   144,    -1,    -1,    -1,    -1,
     114,    -1,   116,    -1,   118,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,   140,   141,   142,    -1,
     144,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,   156,    -1,   158,    18,   160,    20,   162,    -1,
     164,    -1,    -1,    -1,   168,    -1,    -1,    30,   172,    -1,
       4,    -1,     6,    -1,    -1,   214,    10,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
     214,    74,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,    -1,   118,    90,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,   140,    -1,   142,
     114,   144,   116,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,   157,   158,    -1,   160,    -1,   162,
      -1,   164,    -1,    -1,    -1,   168,   140,    -1,   142,   172,
     144,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    10,
      -1,    -1,   156,    -1,   158,   159,   160,    18,   162,    20,
     164,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    30,
       4,    -1,     6,    -1,    -1,    -1,    10,    -1,    -1,    40,
      -1,   214,    -1,    -1,    18,    -1,    20,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
     214,    -1,    -1,    74,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    90,   118,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,   140,
     114,   142,   116,   144,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    -1,   158,    -1,   160,
     161,   162,    -1,   164,    -1,    -1,   140,   168,   142,    -1,
     144,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,   156,    -1,   158,    10,   160,    -1,   162,   163,
     164,    -1,    -1,    18,   168,    20,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    30,     4,    -1,     6,    -1,
      -1,    -1,    10,   214,    -1,    40,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,    90,   118,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,    -1,    -1,   140,   114,   142,   116,   144,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,   158,    -1,   160,    -1,   162,    -1,   164,
     165,    -1,   140,   168,   142,    -1,   144,   172,    -1,     4,
      -1,     6,    -1,    -1,    -1,    10,    -1,   155,   156,    -1,
     158,    -1,   160,    18,   162,    20,   164,    -1,    -1,    -1,
     168,    -1,    -1,    -1,   172,    30,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,     6,    40,    -1,    -1,    10,   214,
      -1,    -1,    -1,    -1,    -1,    50,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    40,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    74,   108,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,    -1,   118,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   140,   108,   142,    -1,   144,
      -1,    -1,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
      -1,   156,    -1,   158,    -1,   160,    -1,   162,    -1,   164,
      -1,    -1,    -1,   168,   169,    -1,    -1,   172,   140,     4,
     142,     6,   144,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,   156,    20,   158,    -1,   160,    -1,
     162,    -1,   164,    -1,    -1,    30,   168,    -1,    -1,    -1,
     172,    -1,     4,    -1,     6,    40,    -1,    -1,    10,   214,
      -1,    -1,    -1,    -1,    -1,    50,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    74,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    74,   108,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,    -1,   118,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   140,   108,   142,   143,   144,
      -1,    -1,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
      -1,   156,    -1,   158,    -1,   160,    -1,   162,    -1,   164,
      -1,    -1,    -1,   168,    -1,    -1,    -1,   172,   140,    -1,
     142,   143,   144,    -1,    -1,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   156,    -1,   158,    -1,   160,    18,
     162,    20,   164,    -1,    -1,    -1,   168,    -1,    -1,    -1,
     172,    30,     4,    -1,     6,    -1,    -1,    -1,    10,   214,
      -1,    40,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,   214,    -1,    -1,    74,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    90,   118,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,   140,   114,   142,   116,   144,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,   140,   168,
     142,    -1,   144,   172,    -1,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    -1,   156,    -1,   158,    -1,   160,    18,
     162,    20,   164,    -1,    -1,    -1,   168,   169,    -1,    -1,
     172,    30,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,    40,    -1,    -1,    10,   214,    -1,    -1,    -1,    -1,
      -1,    50,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    40,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    74,   108,
      -1,    -1,    -1,    79,    -1,   114,    -1,   116,    -1,   118,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   140,   108,   142,    -1,   144,    -1,    -1,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
     169,    -1,    -1,   172,   140,     4,   142,     6,   144,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    18,
     156,    20,   158,    -1,   160,    -1,   162,    -1,   164,    -1,
      -1,    30,   168,    -1,    -1,    -1,   172,    -1,     4,    -1,
       6,    40,    -1,    -1,    10,   214,    -1,    13,    -1,    -1,
      -1,    50,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    74,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    74,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   140,   108,   142,    -1,   144,    -1,    -1,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,   140,     4,   142,     6,   144,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
     156,    20,   158,    -1,   160,    -1,   162,    -1,   164,    -1,
      -1,    30,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
      -1,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    66,   230,   231,     3,     0,    62,   200,   232,   233,
     112,   120,   234,   266,   304,   232,    67,    22,    56,   244,
     267,   214,   214,    63,    67,     3,   185,   186,   187,   188,
     189,   190,   245,    58,   268,   113,   121,     4,     6,     8,
      10,    16,    18,    20,    24,    30,    38,    40,    42,    44,
      46,    50,    60,    72,    74,    80,    82,    84,    90,    96,
     104,   106,   108,   114,   116,   118,   122,   140,   142,   144,
     148,   152,   154,   156,   158,   160,   162,   164,   166,   168,
     170,   172,   214,   235,   236,   237,   239,   240,   242,   243,
     246,   251,   252,   253,   254,   255,   256,   257,   260,   261,
     262,   270,   272,   273,   275,   276,   277,   278,   279,   280,
     281,   282,   288,   294,   295,   296,   297,   299,   300,   307,
     310,   311,   312,   313,   314,   315,   318,   328,   330,   331,
     332,   334,   335,   336,   337,   338,     3,   185,   186,   187,
     188,   189,   190,    58,   269,    57,   330,   330,   238,   296,
     330,   240,   241,     3,   175,   240,   330,   240,   330,   275,
     286,   287,   330,   330,     3,   192,     3,   193,     3,   192,
     330,     3,   180,   196,   197,   289,   286,   330,   214,     3,
     174,     3,   174,   330,   100,   271,     3,   193,   330,   330,
     330,   330,   330,     3,   193,   198,   204,   219,   220,   319,
     330,   183,   193,   198,   201,   202,   203,   204,   205,   206,
     333,     3,   174,   175,   176,   177,   178,   179,   180,   339,
       3,   192,   207,   329,     3,   192,   207,   216,   308,     3,
     193,   330,   330,   330,   330,   330,   240,     3,   194,   195,
       3,   193,   194,   198,   199,   301,     3,    23,   240,   331,
     246,   240,    59,     5,     7,     9,    11,   240,     3,    19,
      21,    25,    31,    39,    41,   150,   316,     3,   240,     3,
      48,   283,   284,     3,    51,    52,    68,    76,    92,   134,
     240,   258,   290,   291,   292,   302,     3,   180,   196,   197,
      73,    75,    81,    12,   263,   264,     3,   316,     3,    91,
     240,    97,   273,   298,   299,   300,   304,     3,   107,   109,
     115,   117,   119,    28,   247,     3,   193,   198,   204,   219,
     220,   141,     3,     3,   183,   193,   198,   202,   203,   204,
     205,   206,   274,   330,     3,   174,   175,   176,   177,   178,
     179,   180,   316,     3,   192,   207,   316,     3,   192,   207,
     216,   330,     3,   157,   159,   161,   163,   165,   167,   330,
       3,     3,     3,   193,   194,   198,   199,   191,    23,    59,
      17,   240,     3,   207,   209,   317,    43,   316,    45,   240,
     330,    47,    36,   285,   283,    78,   259,   293,   302,    94,
      98,   303,   305,   309,   214,    61,    69,   291,     3,   175,
     181,   182,   183,   184,   265,    83,   263,    85,   316,   101,
     105,   298,   240,    34,   248,   247,   330,   330,   145,   274,
     149,   316,   153,   316,   155,   330,   169,   330,   330,    17,
     286,     3,   207,   209,    43,    45,    49,   286,    47,   330,
     291,    61,     3,   209,   217,   306,   305,    93,   135,    61,
     330,     3,   175,   181,   182,   183,   184,    83,    85,   105,
      29,    32,   249,   250,   124,   130,   132,   133,   320,   321,
     248,   143,   143,   145,   149,   153,   155,   169,   169,   151,
     286,    37,    79,    53,   214,     3,   209,   217,    99,    13,
     330,   240,    35,     3,   193,   228,   322,   123,   320,   151,
      95,   214,    13,    33,   126,   128,   323,   324,   326,     3,
     193,   228,   123,    95,     3,   193,   198,   202,   221,   222,
     223,   228,   325,     3,   193,   198,   202,   221,   222,   223,
     228,   327,   125,   323,   240,     3,   193,   198,   202,   221,
     222,   223,   228,   240,     3,   193,   198,   202,   221,   222,
     223,   228,   125,   127,   240,   129,   240,   127,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   229,   230,   231,   231,   232,   232,   233,   234,   234,
     234,   235,   236,   237,   238,   238,   239,   240,   240,   240,
     240,   240,   240,   240,   240,   241,   242,   243,   244,   244,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   246,   246,   246,   247,   248,   249,   250,   251,
     251,   251,   251,   251,   251,   251,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   262,   263,
     264,   264,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     273,   274,   275,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   277,   277,
     278,   279,   280,   280,   281,   281,   282,   282,   283,   284,
     285,   286,   287,   287,   288,   288,   289,   289,   289,   289,
     289,   289,   290,   291,   291,   291,   291,   291,   291,   292,
     293,   294,   295,   295,   296,   296,   297,   297,   298,   298,
     298,   298,   298,   299,   300,   300,   301,   301,   301,   301,
     301,   301,   301,   301,   302,   303,   303,   304,   305,   305,
     306,   306,   306,   306,   307,   307,   308,   308,   308,   308,
     308,   308,   309,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   311,   312,   313,   314,   315,
     316,   316,   317,   317,   317,   317,   318,   318,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   320,   320,
     320,   320,   321,   321,   322,   322,   322,   322,   323,   323,
     324,   324,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   326,   326,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   328,   328,   329,   329,   329,   329,   330,   330,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   332,
     332,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   334,   334,   334,
     335,   336,   337,   338,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     5,     2,     2,     3,     0,     1,
       1,     3,     3,     3,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     5,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     1,     2,     0,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     4,     5,     1,
       4,     5,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     4,
       5,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       3,     3,     4,     5,     4,     5,     4,     5,     2,     3,
       3,     1,     1,     1,     4,     5,     1,     1,     1,     2,
       2,     2,     3,     1,     1,     1,     1,     1,     2,     3,
       1,     3,     4,     5,     4,     5,     4,     5,     0,     1,
       1,     1,     1,     3,     2,     3,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     1,     1,     3,     4,     5,
       1,     1,     2,     2,     4,     5,     1,     1,     1,     2,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       4,     5,     1,     1,     2,     2,     6,     7,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     4,     5,     1,     1,     2,     2,     1,     1,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     4,     5,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     4,     5,     1,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     5,     5,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2
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

#line 2519 "htmlcompact.tab.c"

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

#line 863 "htmlcompact.y"

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
