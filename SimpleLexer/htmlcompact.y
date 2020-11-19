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
  
%start htmldocument
%%

htmldocument
    : html_tag
    ;

html_tag
    : HTMLOPEN   
      html_content  
      HTMLCLOSE
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
    : BODYOPEN body_content_list 
      BODYCLOSE
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
   : MAPOPEN map_content 
	 MAPCLOSE
	; 
	
	map_content 
	: area_tag
	;
	
	area_tag
	: AREAOPEN text 
	  AREACLOSE
	 ;
	 
	 
    
    script_tag
    : SCRIPTOPEN CONTENT 
    SCRIPTCLOSE
    ;

   frameset_tag
    : FRAMESETOPEN 
    |frameset_content 
    FRAMESETCLOSE
    ;

    frameset_content
    : NOFRAMESOPEN 
    |noframe_tag 
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
    : AOPEN a_content 
    ACLOSE 
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
	BASEFONTOPEN  body_content 
    BASEFONTCLOSE
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
    : DIROPEN li_tag 
    DIRCLOSE
    ;

    div_tag
    : DIVOPEN body_content 
    DIVCLOSE
    ;

    dl_tag
    : DLOPEN  dl_content 
    DLCLOSE
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
    : FORMOPEN form_content 
    FORMCLOSE
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
    : MENUOPEN li_tag 
    MENUCLOSE
    ;

    p_tag
    : POPEN  text 
    PCLOSE
    ;

    pre_tag
    : PREOPEN  pre_content 
    PRECLOSE
    ;

    pre_content
    : 
    | br_tag
    | hr_tag
    | a_tag
    | style_tag
    ;
	
	br_tag 
	: BROPEN
	; 
	
	hr_tag
	: HROPEN
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
    : OPTIONOPEN CONTENT OPTIONCLOSE
    ;

    ol_tag
    : OLOPEN li_tag 
    OLCLOSE
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
    : LIOPEN flow LICLOSE
    ;

    table_tag
    : TABLEOPEN caption_tag colgroup_tag table_content TABLECLOSE
    ;

    table_content
    : THEADOPEN 
    | TBODYOPEN
    | tr_tag
    | TBODYCLOSE
    ;

    tr_tag
    : TROPEN table_cell TRCLOSE
    ;

    table_cell
    : td_tag
    | th_tag
    ;

    td_tag
    : TDOPEN body_content TDCLOSE
    ;

    th_tag
    : THOPEN body_content THCLOSE
    ;

    ul_tag
    : ULOPEN li_tag
     ULCLOSE
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
	: IMGOPEN text 
	IMGCLOSE
	;


    font_tag
    : FONTOPEN text FONTCLOSE
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
	
	

 %%
int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  