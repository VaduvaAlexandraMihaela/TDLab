%{
 #include "stdio.h"
 int yyerror(char * s);
 extern int yylex(void);
%}

%token ENDTAG  
%token ABBROPEN 
%token ABBRCLOSE 
%token ACRONYMOPEN 
%token ACRONYMCLOSE 
%token ADDRESSOPEN
%token ADDRESSCLOSE 
%token APPLETOPEN
%token APPLETCLOSE 
%token AREAOPEN 
%token AREACLOSE 
%token BASEOPEN 
%token BASECLOSE 
%token BASEFONTOPEN
%token BASEFONTCLOSE 
%token BDOOPEN 
%token BDOCLOSE 
%token BIGOPEN
%token BIGCLOSE 
%token BODYOPEN 
%token BODYCLOSE 
%token BLOCKQUOTEOPEN
%token BLOCKQUOTECLOSE 
%token BUTTONOPEN 
%token BUTTONCLOSE 
%token CAPTIONOPEN 
%token CAPTIONCLOSE 
%token CODEOPEN 
%token CODECLOSE 
%token COLOPEN 
%token COLCLOSE 
%token COLGROUPOPEN 
%token COLGROUPCLOSE 
%token DDOPEN 
%token DDCLOSE 
%token DELOPEN 
%token DELCLOSE 
%token DFNOPEN 
%token DFNCLOSE 
%token DIROPEN 
%token DIRCLOSE 
%token DIVOPEN
%token DIVCLOSE 
%token DLOPEN 
%token DLCLOSE 
%token DTOPEN 
%token DTCLOSE 
%token EMOPEN 
%token EMCLOSE 
%token FIELDSETOPEN 
%token FIELDSETCLOSE 
%token FRAMEOPEN 
%token FRAMECLOSE 
%token FRAMESETOPEN 
%token FRAMESETCLOSE 
%token NOFRAMESOPEN 
%token NOFRAMESCLOSE 
%token FORMOPEN 
%token FORMCLOSE 
%token HEADOPEN 
%token HEADCLOSE 
%token HNOPEN 
%token HNCLOSE 
%token HTMLOPEN 
%token HTMLCLOSE 
%token INPUTOPEN 
%token INPUTCLOSE 
%token IFRAMEOPEN 
%token IFRAMECLOSE 
%token INSOPEN 
%token INSCLOSE 
%token KBDOPEN 
%token KBDCLOSE 
%token LABELOPEN 
%token LABELCLOSE 
%token LEGENDOPEN 
%token LEGENDCLOSE 
%token LISTINGOPEN 
%token LISTINGCLOSE 
%token MAPOPEN 
%token MAPCLOSE 
%token MENUOPEN 
%token MENUCLOSE 
%token METAOPEN 
%token METACLOSE 
%token NEXTIDOPEN 
%token NEXTIDCLOSE 
%token NOSCRIPTOPEN 
%token NOSCRIPTCLOSE
%token SELECTOPEN 
%token SELECTCLOSE 
%token OPTIONOPEN 
%token OPTIONCLOSE 
%token OBJECTOPEN 
%token OBJECTCLOSE 
%token OPTGROUPOPEN 
%token OPTGROUPCLOSE 
%token PARAMOPEN 
%token PARAMCLOSE 
%token PLAINTEXTOPEN
%token PLAINTEXTCLOSE 
%token PREOPEN 
%token PRECLOSE 
%token QOPEN 
%token QCLOSE 
%token SOPEN 
%token SCLOSE 
%token SAMPOPEN 
%token SAMPCLOSE 
%token SCRIPTOPEN 
%token SCRIPTCLOSE 
%token SPANOPEN 
%token SPANCLOSE 
%token STRIKEOPEN 
%token STRIKECLOSE 
%token STRONGOPEN 
%token STRONGCLOSE 
%token STYLEOPEN 
%token STYLECLOSE 
%token TABLEOPEN 
%token TABLECLOSE 
%token TROPEN 
%token TRCLOSE 
%token TDOPEN 
%token TDCLOSE 
%token THOPEN 
%token THCLOSE 
%token THEADOPEN 
%token THEADCLOSE 
%token TBODYOPEN 
%token TBODYCLOSE 
%token TEXTAREAOPEN 
%token TEXTAREACLOSE 
%token TFOOTOPEN 
%token TFOOTCLOSE 
%token TITLEOPEN 
%token TITLECLOSE 
%token TTOPEN 
%token TTCLOSE 
%token IMGOPEN 
%token IMGCLOSE 
%token AOPEN 
%token ACLOSE 
%token LINKOPEN 
%token LINKCLOSE 
%token ULOPEN 
%token ULCLOSE 
%token LIOPEN 
%token LICLOSE 
%token OLOPEN 
%token OLCLOSE 
%token POPEN 
%token PCLOSE 
%token IOPEN 
%token ICLOSE 
%token UOPEN 
%token UCLOSE 
%token SMALLOPEN 
%token SMALLCLOSE 
%token SUPOPEN 
%token SUPCLOSE 
%token SUBOPEN 
%token SUBCLOSE 
%token CENTEROPEN 
%token CENTERCLOSE   
%token FONTOPEN 
%token FONTCLOSE 
%token HROPEN 
%token HRCLOSE 
%token BROPEN 
%token BRCLOSE 
%token NAME 
%token HREF 
%token REL 
%token REV
%token TITLE 
%token URN 
%token METHODS  
%token SHAPE 
%token COORDS 
%token ALT 
%token NOHREF 
%token BGCOLOR 
%token BACKGROUND 
%token TEXT 
%token LINK 
%token VLINK 
%token ALINK 
%token CLEAR 
%token COMPACT 
%token ALIGN 
%token SIZE 
%token COLOR 
%token ACTION 
%token ENCTYPE 
%token WIDTH 
%token NOSHADE
%token VERSION 
%token SRC
%token HEIGHT
%token VSPACE 
%token BORDER
%token USEMAP
%token ISMAP
%token TYPE
%token MAXLENGTH
%token VALUE 
%token CHECKED 
%token PROMPT
%token ID
%token HTTP_EQUIV 
%token CONTENT
%token N 
%token START 
%token SELECTED 
%token MULTIPLE 
%token CELLSPACING 
%token CELLPADDING 
%token ROWSPAN
%token COLSPAN
%token NOWRAP
%token IDENTIFIER
%token END_OF_INSTRUCTION
%token BOPEN 
%token BCLOSE
%token VALIGN
  
%start htmldocument
%%

htmldocument
    : html_tag
    ;

html_tag
    : HTMLOPEN ENDTAG  
      html_content  
      HTMLCLOSE
	  | HTMLOPEN ENDTAG VERSION html_content HTMLCLOSE
    ;


    html_content
    : head_tag body_tag 
    | head_tag frameset_tag
    ;

    head_tag
    : HEADOPEN   
    head_content 
    HEADCLOSE
    ;

    head_content
    : 
    | style_tag 
    | script_tag 
    ;
	
	abbr_tag
	: ABBROPEN text
	  ABBRCLOSE 
	;
	
	acronym_tag
	: ACRONYMOPEN text
	  ACRONYMCLOSE
	;
	
	address_tag
	: ADDRESSOPEN address_content 
	  ADDRESSCLOSE
	;
	
	address_content
	: p_tag
	| text
	;
	
	applet_tag 
	: APPLETOPEN applet_content
	  APPLETCLOSE
	;
	
	body_content
    : 
	| hr_tag
	| address_tag
    | block 
	| del_tag
	| ins_tag
	| map_tag
    | text 
    ;
	
	applet_content
	: body_content
	;
	
	bdo_tag
	: BDOOPEN body_content
	  BDOCLOSE
	;
	
	big_tag
	: BIGOPEN text 
	  BIGCLOSE 
	; 
	
	

    body_tag
    : BODYOPEN ENDTAG body_content_list 
      BODYCLOSE
	 | BODYOPEN body_attr ENDTAG body_content_list BODYCLOSE
    ;

	body_attr
	: BGCOLOR | BACKGROUND | TEXT | LINK | VLINK | ALINK
	| body_attr BGCOLOR | body_attr BACKGROUND | body_attr TEXT | body_attr LINK | body_attr VLINK | body_attr ALINK
	;

   body_content_list
   : body_content 
   | body_content_list body_content
   | 
   ;
	
	
	caption_tag 
	: CAPTIONOPEN body_content
	  CAPTIONCLOSE
	 ;
	 
	
	colgroup_tag 
	: COLGROUPOPEN colgroup_content 
	COLGROUPCLOSE
	;
	
	colgroup_content
	: col_tag
	; 
	
	col_tag
	: COLOPEN body_content 
	COLCLOSE
	;
	
	content_style
	: abbr_tag
	| acronym_tag 
	| code_tag
	| dfn_tag 
	| kbd_tag 
	| q_tag 
	| strong_tag 
	| em_tag
	; 
	
	code_tag
	: CODEOPEN text 
	 CODECLOSE
	; 
	
	dfn_tag
	: DFNOPEN text 
	  DFNCLOSE
	; 
	 
	 kbd_tag
	 : KBDOPEN text 
	   KBDCLOSE
	 ;
	
	q_tag
	: QOPEN text 
	  QCLOSE 
	; 
	
	strong_tag
	: STRONGOPEN text 
	  STRONGCLOSE
	; 
	
	em_tag 
	: EMOPEN text 
	  EMCLOSE 
	; 
	
	fieldset_tag 
	: FIELDSETOPEN legend_tag form_content 
	  FIELDSETCLOSE
	; 
	
	legend_tag
	: LEGENDOPEN text 
	  LEGENDCLOSE
	 ; 
    
	
   del_tag
   : DELOPEN flow
	 DELCLOSE
	; 
   
   ins_tag
   : INSOPEN flow
     INSCLOSE
	; 
   
   map_tag
   : MAPOPEN ENDTAG map_content 
	 MAPCLOSE
	| MAPOPEN NAME ENDTAG map_content MAPCLOSE
	; 
	
	map_content 
	: area_tag
	;
	
	area_tag
	: AREAOPEN ENDTAG text 
	AREACLOSE
	| AREAOPEN area_attr ENDTAG text AREACLOSE
	;
	 
	area_attr
	: SHAPE | COORDS | HREF | ALT | NOHREF 
	| area_attr SHAPE | area_attr COORDS | area_attr HREF | area_attr ALT | area_attr NOHREF
	;
	 
    
    script_tag
    : SCRIPTOPEN CONTENT 
    SCRIPTCLOSE
    ;

   frameset_tag
    : FRAMESETOPEN 
     frameset_content 
    FRAMESETCLOSE
    ;

    frameset_content
    : NOFRAMESOPEN 
     noframe_tag 
    NOFRAMESCLOSE
    ; 
    
    noframe_tag
    : NOFRAMESOPEN body_content 
    NOFRAMESCLOSE
    ;
	
	noscript_tag 
	: NOSCRIPTOPEN text
	NOSCRIPTCLOSE
	;
	
	object_content 
	: PARAMOPEN body_content
	 PARAMCLOSE
	; 
	
	object_tag 
	: OBJECTOPEN object_content
	 OBJECTCLOSE
	; 
	
	
    a_tag
    : AOPEN ENDTAG a_content 
    ACLOSE
	| AOPEN a_attr ENDTAG a_content ACLOSE
    ;

    a_content
    : text
    ;

    block
    : block_content
    ;
    
    block_content
    : 
	| basefont_tag 
    | blockquote_tag 
    | center_tag 
    | dir_tag 
    | div_tag 
    | dl_tag 
    | form_tag 
    | listing_tag 
    | menu_tag  
    | ol_tag 
    | p_tag 
    | pre_tag 
    | table_tag 
    | ul_tag 
    ;
    
    basefont_tag
    : 
	BASEFONTOPEN ENDTAG body_content 
    BASEFONTCLOSE
	| BASEFONTOPEN HREF ENDTAG body_content BASEFONTCLOSE
    ;
    
    blockquote_tag
    :
    BLOCKQUOTEOPEN  body_content 
    BLOCKQUOTECLOSE
    ;

    center_tag
    : 
	CENTEROPEN body_content 
    CENTERCLOSE
    ;

    dir_tag
    : DIROPEN ENDTAG li_tag 
    DIRCLOSE
	| DIROPEN COMPACT ENDTAG li_tag DIRCLOSE
    ;

    div_tag
    : DIVOPEN ENDTAG body_content 
    DIVCLOSE
	| DIVOPEN ALIGN ENDTAG body_content DIVCLOSE
    ;

    dl_tag
    : DLOPEN  ENDTAG dl_content 
    DLCLOSE
	| DLOPEN COMPACT ENDTAG dl_content DLCLOSE
    ;
    
    dl_content
    : dt_tag dd_tag
    ;

    dt_tag
    : DTOPEN text 
    DTCLOSE
    ;

    dd_tag
    : DDOPEN flow 
    DDCLOSE
    ;

    flow
    : flow_content

    flow_content
    : block
    | text
    ;

    form_tag
    : FORMOPEN ENDTAG form_content 
    FORMCLOSE
	| FORMOPEN form_attr ENDTAG form_content FORMCLOSE
    ;

	form_attr
	: ACTION | METHODS | ENCTYPE 
	| form_attr ACTION | form_attr METHODS | form_attr ENCTYPE
	;

	textarea_tag
	: TEXTAREAOPEN CONTENT 
	  TEXTAREACLOSE
	;
	
	
    form_content
    : INPUTOPEN 
	| fieldset_tag 
	| label_tag
	| textarea_tag
    | body_content 
    | select_tag 
    INPUTCLOSE
    ;
	
	label_tag
	: LABELOPEN label_content 
	 FORMCLOSE
	; 
	
	label_content
	: select_tag
	;
	

    listing_tag
    : LISTINGOPEN CONTENT
    LISTINGCLOSE
    ;

    menu_tag
    : MENUOPEN ENDTAG li_tag 
    MENUCLOSE
	| MENUOPEN NAME ENDTAG li_tag MENUCLOSE
    ;

    p_tag
    : POPEN ENDTAG text 
    PCLOSE
	| POPEN ALIGN ENDTAG text PCLOSE
    ;

    pre_tag
    : PREOPEN ENDTAG pre_content 
    PRECLOSE
	| PREOPEN ALIGN ENDTAG pre_content PRECLOSE
    ;

    pre_content
    : 
    | br_tag
    | hr_tag
    | a_tag
    | style_tag
    ;
	
	br_tag 
	: BROPEN ENDTAG CLEAR 
	; 
	
	hr_tag
	: HROPEN ENDTAG 
	| HROPEN hr_attr ENDTAG 
	;

	hr_attr
	: ALIGN | SIZE | WIDTH | NOSHADE
	| hr_attr ALIGN | hr_attr SIZE | hr_attr WIDTH | hr_attr NOSHADE
	;

    select_tag
    :SELECTOPEN select_content 
    SELECTCLOSE
    ;

    select_content
    : option_tag
	| optgroup_tag
    ;

   style_tag
   : STYLEOPEN CONTENT STYLECLOSE
   ;

    option_tag
    : OPTIONOPEN ENDTAG CONTENT OPTIONCLOSE
	| OPTIONOPEN option_attr ENDTAG CONTENT OPTIONCLOSE
    ;

	option_attr
	: SELECTED | VALUE 
	| option_attr SELECTED | option_attr VALUE
	;

    ol_tag
    : OLOPEN  ENDTAG li_tag 
    OLCLOSE
	| OLOPEN ol_attr ENDTAG li_tag OLCLOSE
    ;

	ol_attr
	: TYPE | START | COMPACT 
	| ol_attr TYPE | ol_attr START | ol_attr COMPACT
	;
	
	optgroup_tag
	: OPTGROUPOPEN option_tag
	OPTGROUPCLOSE
	; 
	
	physical_style 
	: bdo_tag 
	| big_tag
	| font_tag
	| i_tag
	| s_tag 
	| small_tag
	| span_tag 
	| strike_tag 
	| sub_tag
	| sup_tag
	| tt_tag 
	| u_tag 
	; 
	
	s_tag
	: SOPEN text 
	 SCLOSE
	; 
	
	span_tag
	: SPANOPEN text
	 SPANCLOSE
	; 
	
	strike_tag
	: STRIKEOPEN text 
	  STRIKECLOSE 
	; 
	
	tt_tag 
	: TTOPEN text 
	  TTCLOSE
	; 
	
	u_tag
	: UOPEN text 
	 UCLOSE
	;
	
	

    li_tag 
    : LIOPEN ENDTAG flow LICLOSE
	| LIOPEN li_attr ENDTAG flow LICLOSE 
    ;

	li_attr
	: TYPE | VALUE 
	| li_attr TYPE | li_attr VALUE
	;

    table_tag
    : TABLEOPEN ENDTAG caption_tag colgroup_tag table_content TABLECLOSE
	| TABLEOPEN table_attr ENDTAG caption_tag colgroup_tag table_content TABLECLOSE
    ;

	table_attr 
	: ALIGN | BORDER | WIDTH | CELLSPACING | CELLPADDING 
	| table_attr ALIGN | table_attr BORDER | table_attr WIDTH | table_attr CELLSPACING | table_attr CELLPADDING
	;

    table_content
    : THEADOPEN 
    | TBODYOPEN
    | tr_tag
    | TBODYCLOSE
    ;

    tr_tag
    : TROPEN ENDTAG table_cell TRCLOSE
	| TROPEN tr_attr ENDTAG table_cell TRCLOSE
    ;

	tr_attr
	: ALIGN | VALIGN 
	| tr_attr ALIGN | tr_attr VALIGN 
	;

    table_cell
    : td_tag
    | th_tag
    ;

    td_tag
    : TDOPEN ENDTAG body_content TDCLOSE
	| TDOPEN td_attr ENDTAG body_content TDCLOSE
    ;

	td_attr
	: ALIGN | VALIGN | ROWSPAN | COLSPAN | WIDTH | HEIGHT | NOWRAP 
	| td_attr ALIGN | td_attr VALIGN | td_attr ROWSPAN | td_attr COLSPAN | td_attr WIDTH | td_attr HEIGHT | td_attr NOWRAP
	;

    th_tag
    : THOPEN ENDTAG body_content THCLOSE
	| THOPEN th_attr ENDTAG body_content THCLOSE
    ;

	th_attr
	: ALIGN | VALIGN | ROWSPAN | COLSPAN | WIDTH | HEIGHT | NOWRAP 
	| th_attr ALIGN | th_attr VALIGN | th_attr ROWSPAN | th_attr COLSPAN | th_attr WIDTH | th_attr HEIGHT | th_attr NOWRAP
	;

    ul_tag
    : ULOPEN ENDTAG li_tag
     ULCLOSE
	 | ULOPEN ul_attr ENDTAG li_tag ULCLOSE
    ;

	ul_attr
	: TYPE | COMPACT 
	| ul_attr TYPE | ul_attr COMPACT 
	;

    text
    : text_content
	| text text_content
    ;

    text_content
    : br_tag
    | img_tag 
    | a_tag
    | physical_style
	| content_style
	| applet_tag
	| noscript_tag
	| object_tag
	| CONTENT
    ;
	
	img_tag
	: IMGOPEN SRC ENDTAG text 
	IMGCLOSE
	| IMGOPEN img_attr ENDTAG text 
	IMGCLOSE
	;

	img_attr
	: ALIGN | WIDTH | HEIGHT | VSPACE | ALT | BORDER | USEMAP | ISMAP 
	| img_attr ALIGN | img_attr WIDTH | img_attr HEIGHT | img_attr VSPACE | img_attr ALT | img_attr BORDER | img_attr USEMAP | img_attr ISMAP
	;


    font_tag
    : FONTOPEN ENDTAG text FONTCLOSE
	| FONTOPEN SIZE ENDTAG text FONTCLOSE
	| FONTOPEN COLOR ENDTAG text FONTCLOSE
    ;

    i_tag
    : IOPEN text ICLOSE
    ;

    small_tag
    : SMALLOPEN text SMALLCLOSE
    ;

    sub_tag
    : SUBOPEN text SUBCLOSE
    ;

    sup_tag
    : SUPOPEN text SUPCLOSE
    ;
	
	a_attr
	: NAME | HREF | REL | REV | TITLE | URN | METHODS
	| a_attr NAME | a_attr HREF | a_attr REL | a_attr REV | a_attr TITLE | a_attr URN | a_attr METHODS
	;

 %%
int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  