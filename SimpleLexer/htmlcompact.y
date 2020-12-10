%{
 #include "stdio.h"
 #include "ast.h"

 Node* astRoot = NULL;
int yyerror(char * s);
extern int yylex(void);

%}

%union{
	
	Node	*node;
	char* strings;
	int intVal;
}

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

%type <node> htmldocument 
%type <node> html_tag 
%type <node> html_content
%type <node> head_tag 
%type <node> head_content
%type <node> body_tag
%type <node> frameset_tag
%type <node> style_tag
%type <node> script_tag
%type <node> abbr_tag
%type <node> acronym_tag
%type <node> address_tag
%type <node> address_content
%type <node> applet_tag
%type <node> body_content
%type <node> applet_content
%type <node> bdo_tag
%type <node> big_tag
%type <node> body_attr
%type <node> body_attr_list
%type <node> body_content_list
%type <node> caption_tag
%type <node> colgroup_tag
%type <node> colgroup_content
%type <node> col_tag
%type <node> content_style
%type <node> code_tag
%type <node> dfn_tag
%type <node> kbd_tag
%type <node> q_tag
%type <node> strong_tag
%type <node> em_tag
%type <node> fieldset_tag
%type <node> legend_tag
%type <node> del_tag
%type <node> ins_tag
%type <node> map_tag
%type <node> map_content
%type <node> area_tag
%type <node> area_attr
%type <node> area_attr_list
%type <node> frameset_content
%type <node> noframe_tag
%type <node> noscript_tag
%type <node> object_content
%type <node> object_tag
%type <node> a_tag
%type <node> a_content
%type <node> block
%type <node> block_content
%type <node> basefont_tag
%type <node> blockquote_tag
%type <node> center_tag
%type <node> dir_tag
%type <node> div_tag
%type <node> dl_tag
%type <node> dl_content
%type <node> dt_tag
%type <node> dd_tag
%type <node> flow
%type <node> flow_content
%type <node> form_tag
%type <node> form_attr_list
%type <node> form_attr
%type <node> textarea_tag
%type <node> form_content
%type <node> label_tag
%type <node> label_content
%type <node> listing_tag
%type <node> menu_tag
%type <node> p_tag
%type <node> pre_tag
%type <node> pre_content
%type <node> br_tag
%type <node> hr_tag
%type <node> hr_attr_list
%type <node> hr_attr
%type <node> select_tag
%type <node> select_content
%type <node> option_tag
%type <node> option_attr_list
%type <node> option_attr
%type <node> ol_tag
%type <node> ol_attr_list
%type <node> ol_attr
%type <node> optgroup_tag
%type <node> physical_style
%type <node> s_tag
%type <node> span_tag
%type <node> strike_tag
%type <node> tt_tag
%type <node> u_tag
%type <node> li_tag
%type <node> li_attr_list
%type <node> li_attr
%type <node> table_tag
%type <node> table_attr_list
%type <node> table_attr
%type <node> table_content
%type <node> tr_tag
%type <node> tr_attr_list
%type <node> tr_attr
%type <node> table_cell
%type <node> td_tag
%type <node> td_attr_list
%type <node> td_attr
%type <node> th_tag
%type <node> th_attr_list
%type <node> th_attr
%type <node> ul_tag
%type <node> ul_attr_list
%type <node> ul_attr
%type <node> text
%type <node> text_content
%type <node> img_tag
%type <node> img_attr_list
%type <node> img_attr
%type <node> font_tag
%type <node> font_attr_list
%type <node> font_attr
%type <node> i_tag
%type <node> small_tag
%type <node> sub_tag
%type <node> sup_tag
%type <node> a_attr_list
%type <node> a_attr
%type <node> VERSION
%type <node> BGCOLOR
%type <node> BACKGROUND
%type <node> TEXT
%type <node> LINK
%type <node> VLINK
%type <node> ALINK
%type <node> NAME
%type <node> SHAPE
%type <node> COORDS
%type <node> HREF
%type <node> ALT
%type <node> NOHREF
%type <node> CONTENT
%type <node> COMPACT
%type <node> ALIGN
%type <node> ACTION
%type <node> METHODS
%type <node> ENCTYPE
%type <node> CLEAR
%type <node> SIZE
%type <node> NOSHADE
%type <node> SELECTED
%type <node> VALUE
%type <node> TYPE
%type <node> START
%type <node> BORDER
%type <node> WIDTH
%type <node> CELLSPACING
%type <node> CELLPADDING
%type <node> VALIGN
%type <node> HEIGHT
%type <node> NOWRAP
%type <node> ROWSPAN
%type <node> COLSPAN
%type <node> USEMAP
%type <node> ISMAP
%type <node> VSPACE
%type <node> COLOR
%type <node> REL
%type <node> REV
%type <node> TITLE
%type <node> URN

  
%start htmldocument
%%

htmldocument
    : html_tag {$$ = createHtmlDocumentNode($1); astRoot = $$;}
    ;

html_tag
    : HTMLOPEN ENDTAG  html_content  HTMLCLOSE {$$ = createTagNode("HtmlTag",$3);}
	| HTMLOPEN ENDTAG VERSION html_content HTMLCLOSE {$$ = createTagWithAttribute("HtmlTag",$3,$4); }
    ;


    html_content 
    : head_tag body_tag {$$ = createListNode("HtmlContent",$1); addLinkToList($$,$2);}
    | head_tag frameset_tag {$$ = createListNode("HtmlContent",$1); addLinkToList($$,$2);}
    ;

    head_tag 
    : HEADOPEN head_content HEADCLOSE {$$ = createTagNode("HeadTag",$2); }
    ;

    head_content 
    : {$$ = createListNode("HeadContent", NULL); }
    | style_tag {$$ = createListNode("HeadContent",$1); }
    | script_tag {$$ = createListNode("HeadContent",$1); }
    ;
	
	abbr_tag
	: ABBROPEN text
	  ABBRCLOSE {$$ = createTagNode("AbbrTag",$2); }
	;
	
	acronym_tag
	: ACRONYMOPEN text
	  ACRONYMCLOSE {$$ = createTagNode("AcronymTag",$2); }
	;
	
	address_tag
	: ADDRESSOPEN address_content 
	  ADDRESSCLOSE {$$ = createTagNode("ADDRESSTag",$2);}
	;
	
	address_content
	: p_tag {$$ = createListNode("AddressContent", $1); }
	| text { $$ = createListNode("text", $1); }
	;
	
	applet_tag 
	: APPLETOPEN applet_content
	  APPLETCLOSE {$$ = createTagNode("AppletTag",$2); }
	;
	
	body_content
    : { $$ = createListNode("BodyContent",NULL);}
	| hr_tag { addLinkToList($$,$1);}
	| address_tag { addLinkToList($$,$1);}
    | block { addLinkToList($$,$1);}
	| del_tag { addLinkToList($$,$1);}
	| ins_tag { addLinkToList($$,$1);}
	| map_tag { addLinkToList($$,$1);}
    | text { addLinkToList($$,$1);}
    ;
	
	applet_content
	: body_content {$$ = createListNode("AppletContent",$1);}
	;
	
	bdo_tag
	: BDOOPEN body_content 
	  BDOCLOSE {$$ = createTagNode("BdoTag",$2);}
	;
	
	big_tag
	: BIGOPEN text 
	  BIGCLOSE {$$ = createTagNode("BigTag",$2);}
	; 
	
	

    body_tag
    : BODYOPEN ENDTAG body_content_list 
      BODYCLOSE {$$ = createTagNode("BodyTag",$3);}
	 | BODYOPEN body_attr_list ENDTAG body_content_list BODYCLOSE {$$ = createTagWithAttribute("BodyTag",$2,$4); }
    ;

	body_attr
	: BGCOLOR {$$ = createAttributeNode("BGColor",$1);} //createbgnode
	| BACKGROUND {	$$ = createAttributeNode("Background",$1);} 
	| TEXT { $$ = createAttributeNode("Text",$1);} 
	| LINK { $$ = createAttributeNode("Link",$1);}
	| VLINK { $$ = createAttributeNode("VLINK",$1);}
	| ALINK { $$ = createAttributeNode("ALINK",$1);}
	;

	body_attr_list
	: body_attr {$$ = createListNode("BodyAttributeList",$1); }
	| body_attr_list body_attr {$$ = $1; addLinkToList($$, $2); }
	| {$$ = NULL;}
	;

   body_content_list
   : body_content {$$ = createListNode("BodyContent",$1);}
   | body_content_list body_content{
									$$ = $1; 
									addLinkToList($$,$2);
									}
   | 
   ;
	
	
	caption_tag 
	: CAPTIONOPEN body_content 
	  CAPTIONCLOSE {$$ = createTagNode("CaptionTag",$2); }
	 ;
	 
	
	colgroup_tag 
	: COLGROUPOPEN colgroup_content 
	COLGROUPCLOSE {$$ = createTagNode("ColGroupTag",$2); }
	;
	
	colgroup_content
	: col_tag {$$ = createTagNode("CaptionTag",$1); }
	; 
	
	col_tag
	: COLOPEN body_content 
	COLCLOSE {$$ = createTagNode("ColTag",$2); }
	;
	
	content_style 
	: abbr_tag { $$ = createListNode("ContentStyle",$1);}
	| acronym_tag {$$ = createListNode("ContentStyle",$1);}
	| code_tag {$$ = createListNode("ContentStyle",$1);}
	| dfn_tag {$$ = createListNode("ContentStyle",$1);}
	| kbd_tag {$$ = createListNode("ContentStyle",$1);}
	| q_tag {$$ = createListNode("ContentStyle",$1);}
	| strong_tag {$$ = createListNode("ContentStyle",$1);}
	| em_tag {$$ = createListNode("ContentStyle",$1);}
	; 
	
	code_tag
	: CODEOPEN text 
	 CODECLOSE  {$$ = createTagNode("CodeTag",$2); }
	; 
	
	dfn_tag
	: DFNOPEN text 
	  DFNCLOSE  {$$ = createTagNode("DfnTag",$2); }
	; 
	 
	 kbd_tag
	 : KBDOPEN text 
	   KBDCLOSE  {$$ = createTagNode("KbdTag",$2); }
	 ;
	
	q_tag
	: QOPEN text 
	  QCLOSE  {$$ = createTagNode("QTag",$2);}
	; 
	
	strong_tag
	: STRONGOPEN text 
	  STRONGCLOSE  {$$ = createTagNode("StrongTag",$2);}
	; 
	
	em_tag 
	: EMOPEN text 
	  EMCLOSE  {$$ = createTagNode("EmTag",$2);}
	; 
	
	fieldset_tag 
	: FIELDSETOPEN legend_tag form_content 
	  FIELDSETCLOSE  {$$ = createTagNode("FieldsetTag",$2);  addLinkToList($$,$3);}
	; 
	
	legend_tag
	: LEGENDOPEN text 
	  LEGENDCLOSE  {$$ = createTagNode("LegendTag",$2);  }
	 ; 
    
	
   del_tag
   : DELOPEN flow
	 DELCLOSE  {$$ = createTagNode("DelTag",$2);  }
	; 
   
   ins_tag
   : INSOPEN flow
     INSCLOSE  {$$ = createTagNode("InsTag",$2); }
	; 
   
   map_tag
   : MAPOPEN ENDTAG map_content 
	 MAPCLOSE  {$$ = createTagNode("MapTag",$3); }
	| MAPOPEN NAME ENDTAG map_content MAPCLOSE {$$ = createTagWithAttribute("MapTag",$2,$4); }
	; 
	
	map_content 
	: area_tag  {$$ = createTagNode("MapContent",$1);  }
	;
	
	area_tag
	: AREAOPEN ENDTAG text 
	AREACLOSE  {$$ = createTagNode("AreaTag",$3);  }
	| AREAOPEN area_attr_list ENDTAG text AREACLOSE {$$ = createTagWithAttribute("AreaTag",$2,$4);  }
	;
	 
	area_attr
	: SHAPE {$$ = createAttributeNode("shape", $1);}
	| COORDS {$$ = createAttributeNode("coords", $1);}
	| HREF {$$ = createAttributeNode("href", $1);}
	| ALT {$$ = createAttributeNode("alt", $1);}
	| NOHREF {$$ = createAttributeNode("nohref", $1);}


	area_attr_list
	: area_attr {$$ = createListNode("AreaAttributeList", $1); }
	| area_attr_list area_attr {$$ = 1; addLinkToList($$, $2); }
	| {$$ = NULL;}
	;
	 
    
    script_tag
    : SCRIPTOPEN CONTENT  SCRIPTCLOSE {$$ = createTagNode("ScriptTag",$2);}
    ;

   frameset_tag
    : FRAMESETOPEN 
     frameset_content 
    FRAMESETCLOSE {$$= createTagNode("FramesetTag",$2); }
    ;

    frameset_content
    : NOFRAMESOPEN 
     noframe_tag 
    NOFRAMESCLOSE {$$ = createTagNode("FramesetContent", $2); }
    ; 
    
    noframe_tag
    : NOFRAMESOPEN body_content 
    NOFRAMESCLOSE {$$ = createTagNode("NoframeTag",$2);}
    ;
	
	noscript_tag 
	: NOSCRIPTOPEN text
	NOSCRIPTCLOSE {$$ = createTagNode("NoScriptTag",$2); }
	;
	
	object_content 
	: PARAMOPEN body_content
	 PARAMCLOSE {$$ = createTagNode("ObjectContent",$2);}
	; 
	
	object_tag 
	: OBJECTOPEN object_content
	 OBJECTCLOSE {$$ = createTagNode("ObjectTag",$2); }
	; 
	
	
    a_tag
    : AOPEN ENDTAG a_content 
    ACLOSE {$$ = createTagNode("ATag",$3); }
	| AOPEN a_attr_list ENDTAG a_content ACLOSE {$$ = createTagWithAttribute("ATag",$2,$4);}
    ;

    a_content
    : text {$$ = createTagNode("AContent",$1); }
    ;

    block
    : block_content {$$ = createTagNode("Block",$1); }
    ;
    
    block_content
    : {$$ = createListNode("BlockContent", NULL);}
	| basefont_tag {addLinkToList($$,$1);}
    | blockquote_tag {addLinkToList($$,$1);}
    | center_tag {addLinkToList($$,$1);}
    | dir_tag {addLinkToList($$,$1);}
    | div_tag {addLinkToList($$,$1);}
    | dl_tag {addLinkToList($$,$1);}
    | form_tag {addLinkToList($$,$1);}
    | listing_tag {addLinkToList($$,$1);}
    | menu_tag  {addLinkToList($$,$1);}
    | ol_tag {addLinkToList($$,$1);}
    | p_tag {addLinkToList($$,$1);}
    | pre_tag {addLinkToList($$,$1);}
    | table_tag {addLinkToList($$,$1);}
    | ul_tag {addLinkToList($$,$1);}
    ;
    
    basefont_tag
    : 
	BASEFONTOPEN ENDTAG body_content 
    BASEFONTCLOSE {$$ = createTagNode("BaseFontTag",$3); }
	| BASEFONTOPEN HREF ENDTAG body_content BASEFONTCLOSE {$$ = createTagWithAttribute("BaseFontTag",$2,$4);}
    ;
    
    blockquote_tag
    :
    BLOCKQUOTEOPEN  body_content 
    BLOCKQUOTECLOSE {$$ = createTagNode("BlockquoteTag",$2); }
    ;

    center_tag
    : 
	CENTEROPEN body_content 
    CENTERCLOSE {$$ = createTagNode("CenterTag",$2); }
    ;

    dir_tag
    : DIROPEN ENDTAG li_tag 
    DIRCLOSE {$$ = createTagNode("DirTag",$3); }
	| DIROPEN COMPACT ENDTAG li_tag DIRCLOSE {$$ = createTagWithAttribute("DirTag",$2,$4);}
    ;

    div_tag
    : DIVOPEN ENDTAG body_content 
    DIVCLOSE {$$ = createTagNode("DivTag",$3); }
	| DIVOPEN ALIGN ENDTAG body_content DIVCLOSE {$$ = createTagWithAttribute("DivTag",$2,$4);}
    ;

    dl_tag
    : DLOPEN  ENDTAG dl_content 
    DLCLOSE {$$ = createTagNode("DlTag",$3); }
	| DLOPEN COMPACT ENDTAG dl_content DLCLOSE {$$ = createTagWithAttribute("DivTag",$2,$4);}
    ;
    
    dl_content
    : dt_tag dd_tag {$$ = createListNode("DlContent",$1); $$=$1; addLinkToList($$,$2);}
    ;

    dt_tag
    : DTOPEN text 
    DTCLOSE {$$ = createTagNode("DtTag",$2);}
    ;

    dd_tag
    : DDOPEN flow 
    DDCLOSE {$$ = createTagNode("DDTag",$2); }
    ;

    flow
    : flow_content {$$ = createTagNode("Flow",$1); }

    flow_content
    : block {$$ = createListNode("FlowContent",$1);}
    | text { addLinkToList($$,$1);}
    ;

    form_tag
    : FORMOPEN ENDTAG form_content 
    FORMCLOSE {$$ = createTagNode("FormTag",$3); }
	| FORMOPEN form_attr_list ENDTAG form_content FORMCLOSE {$$ = createTagWithAttribute("FormTag",$2,$4); }
    ;

	form_attr_list
	: form_attr {$$ = createListNode("FormAttributeList",$1); }
	| form_attr_list form_attr {$$ = $1; addLinkToList($$,$2); }
	| {$$ = NULL;}
	;

	form_attr
	: ACTION {$$ = createAttributeNode("Action",$1);}
	| METHODS {$$ = createAttributeNode("Methods",$1);}
	| ENCTYPE {$$ = createAttributeNode("Enctype",$1);}
	;

	textarea_tag
	: TEXTAREAOPEN CONTENT 
	  TEXTAREACLOSE {$$ = createTagNode("TextareaTag",$2); }
	;
	
	
    form_content
    : INPUTOPEN {$$ = createListNode("FormContent",NULL);}
	| fieldset_tag { addLinkToList($$, $1);}
	| label_tag { addLinkToList($$, $1);}
	| textarea_tag { addLinkToList($$, $1);}
    | body_content { addLinkToList($$, $1);}
    | select_tag { addLinkToList($$, $1);}
    INPUTCLOSE {$$ = createListNode("FormContent",NULL);}
    ;
	
	label_tag
	: LABELOPEN label_content 
	 FORMCLOSE {$$ = createTagNode("LabelTag",$2); }
	; 
	
	label_content
	: select_tag {$$ = createTagNode("LabelContent",$1); }
	;
	

    listing_tag
    : LISTINGOPEN CONTENT
    LISTINGCLOSE {$$ = createTagNode("ListingTag",$2); }
    ;

    menu_tag
    : MENUOPEN ENDTAG li_tag 
    MENUCLOSE {$$ = createTagNode("MenuTag",$3); }
	| MENUOPEN NAME ENDTAG li_tag MENUCLOSE {$$ = createTagWithAttrivute("MenuTag", $2, $4); }
    ;

    p_tag
    : POPEN ENDTAG text 
    PCLOSE {$$ = createTagNode("PTag",$3); }
	| POPEN ALIGN ENDTAG text PCLOSE {$$ = createTagWithAttribute("PTag", $2, $4);}
    ;

    pre_tag
    : PREOPEN ENDTAG pre_content 
    PRECLOSE {$$ = createTagNode("PreTag",$3); }
	| PREOPEN ALIGN ENDTAG pre_content PRECLOSE {$$ = createTagWithAttribute("PreTag", $2, $4); }
    ;

    pre_content
    : {$$ = createListNode("PreContent", NULL);}
    | br_tag { addLinkToList($$,$1); }
    | hr_tag { addLinkToList($$,$1); }
    | a_tag { addLinkToList($$,$1); }
    | style_tag { addLinkToList($$,$1); }
    ;
	
	br_tag 
	: BROPEN ENDTAG CLEAR {$$ = createTagNode("BrTag",$3);}
	; 
	
	hr_tag
	: HROPEN ENDTAG { $$ =  createTagNode("HRTag", NULL); }
	| HROPEN hr_attr_list ENDTAG {$$ = createTagWithAttribute("HRTag",$2,NULL); }
	;

	hr_attr_list
	: hr_attr {$$ = createListNode("HrAttributeList", $1); } 
	| hr_attr_list hr_attr { $$ = $1; addLinkToList($$, $2); } 
	| {$$ = NULL; }
	;

	hr_attr
	: ALIGN { $$ = createAttributeNode("align", $1); }
	| SIZE { $$ = createAttributeNode("size", $1); }
	| WIDTH { $$ = createAttributeNode("width", $1); }
	| NOSHADE { $$ = createAttributeNode("noshade", $1); }
	;

    select_tag
    :SELECTOPEN select_content 
    SELECTCLOSE {$$ = createTagNode("SelectTag",$2); }
    ;

    select_content
    : option_tag {$$ = createListNode("SelectContent", $1); }
	| optgroup_tag { $$ = createListNode("SelectContent", $1); }
    ;

   style_tag
   : STYLEOPEN CONTENT STYLECLOSE {$$ = createTagNode("StyleTag",$2); }
   ;

    option_tag
    : OPTIONOPEN ENDTAG CONTENT OPTIONCLOSE {$$ = createTagNode("OptionTag",$3); }
	| OPTIONOPEN option_attr_list ENDTAG CONTENT OPTIONCLOSE {$$ = createTagWithAttribute("OptionTag",$2,$4); }
    ;

	option_attr_list
	: option_attr { $$ = createListNode("OptionAttributeList", $1); }
	| option_attr_list option_attr { $$=$1; addLinkToList($$,$2); }
	| {$$ = NULL; }
	;

	option_attr
	: SELECTED {$$ = createAttributeNode("selected",$1); }
	| VALUE {$$ = createAttributeNode("value",$1); }
	;

    ol_tag
    : OLOPEN  ENDTAG li_tag 
    OLCLOSE {$$ = createTagNode("OlTag",$3); }
	| OLOPEN ol_attr_list ENDTAG li_tag OLCLOSE {$$ = createTagWithAttribute("OlTag",$2,$4); }
    ;

	ol_attr_list
	: ol_attr {$$ = createListNode("OlAttributeList",$1); } 
	| ol_attr_list ol_attr { $$= $1; addLinkToList($$,$2);}
	| {$$ = NULL; }

	ol_attr
	: TYPE {$$ = createAttributeNode("type",$1); }
	| START {$$ = createAttributeNode("start",$1); }
	| COMPACT {$$ = createAttributeNode("compact",$1); }
	;
	
	optgroup_tag
	: OPTGROUPOPEN option_tag
	OPTGROUPCLOSE {$$ = createTagNode("OptGroupTag",$2); }
	; 
	
	physical_style 
	: bdo_tag {$$ = createListNode("PhysicalStyle",$1); }
	| big_tag { $$ = createListNode("PhysicalStyle",$1); }
	| font_tag {$$ = createListNode("PhysicalStyle",$1); }
	| i_tag { $$ = createListNode("PhysicalStyle",$1); }
	| s_tag { $$ = createListNode("PhysicalStyle",$1); }
	| small_tag { $$ = createListNode("PhysicalStyle",$1); }
	| span_tag { $$ = createListNode("PhysicalStyle",$1); }
	| strike_tag {$$ = createListNode("PhysicalStyle",$1); }
	| sub_tag { $$ = createListNode("PhysicalStyle",$1);}
	| sup_tag { $$ = createListNode("PhysicalStyle",$1); }
	| tt_tag { $$ = createListNode("PhysicalStyle",$1); }
	| u_tag {$$ = createListNode("PhysicalStyle",$1); }
	; 
	
	s_tag
	: SOPEN text 
	 SCLOSE {$$ = createTagNode("STag",$2); }
	; 
	
	span_tag
	: SPANOPEN text
	 SPANCLOSE {$$ = createTagNode("SpanTag",$2); }
	; 
	
	strike_tag
	: STRIKEOPEN text 
	  STRIKECLOSE {$$ = createTagNode("StrikeTag",$2); }
	; 
	
	tt_tag 
	: TTOPEN text 
	  TTCLOSE {$$ = createTagNode("TTTag",$2); }
	; 
	
	u_tag
	: UOPEN text 
	 UCLOSE {$$ = createTagNode("UTag",$2);}
	;
	
	

    li_tag 
    : LIOPEN ENDTAG flow LICLOSE {$$ = createTagNode("LiTag",$3); }
	| LIOPEN li_attr_list ENDTAG flow LICLOSE {$$ = createTagWithAttribute("LiTag", $2, $4); }
    ;

	li_attr_list
	: li_attr {$$ = createListNode("LiAttributeList",$1); }
	| li_attr_list li_attr {$$ = $1; addLinkToList($$,$2); }
	| {$$ = NULL;}
	;

	li_attr
	: TYPE {$$ = createAttributeNode("type", $1); }
	| VALUE {$$ = createAttributeNode("value", $1); }
	;

    table_tag
    : TABLEOPEN ENDTAG caption_tag colgroup_tag table_content TABLECLOSE {$$ = createTagNode("TableTag",$3);  addLinkToList($$, $4); addLinkToList($$, $5);}
	| TABLEOPEN table_attr_list ENDTAG caption_tag colgroup_tag table_content TABLECLOSE {$$ = createTagWithAttribute("TableTag",$2,$4);  addLinkToList($$,$5); addLinkToList($$, $6);}
    ;

	table_attr_list 
	: table_attr { $$ = createListNode("TableAttributeList",$1);}
	| table_attr_list table_attr {$$ = $1; addLinkToList($$,$2);}
	| {$$ = NULL;}
	;

	table_attr 
	: ALIGN {$$= createAttributeNode("align", $1); }
	| BORDER {$$= createAttributeNode("border", $1);} 
	| WIDTH { $$= createAttributeNode("width", $1); }
	| CELLSPACING { $$= createAttributeNode("cellspacing", $1); }
	| CELLPADDING { $$= createAttributeNode("cellpadding", $1); }
	;

    table_content
    : THEADOPEN {createListNode("TableContent", NULL); }
    | TBODYOPEN {createListNode("TableContent", NULL); }
    | tr_tag {createListNode("TableContent", $1); }
    | TBODYCLOSE
    ;

    tr_tag
    : TROPEN ENDTAG table_cell TRCLOSE {$$ = createTagNode("TrTag",$3); }
	| TROPEN tr_attr_list ENDTAG table_cell TRCLOSE {$$ = createTagWithAttribute("TrTag", $2, $4);  }
    ;

	tr_attr_list 
	: tr_attr {$$ = createListNode("TrAttributeKust",$1);} 
	| tr_attr_list tr_attr {$$ = $1; addLinkToList($$,$2); } 
	| {$$ = NULL;}
	;

	tr_attr
	: ALIGN {$$ = createAttributeNode("align", $1); }
	| VALIGN {$$ = createAttributeNode("valign", $1); }
	;

    table_cell
    : td_tag {$$ = createListNode("TableCell", $1); }
    | th_tag {$$ = createListNode("TableCell", $1); }
    ;

    td_tag
    : TDOPEN ENDTAG body_content TDCLOSE {$$ = createTagNode("TdTag",$3);}
	| TDOPEN td_attr_list ENDTAG body_content TDCLOSE {$$ = createTagWithAttribute("TdTag", $2, $4);  }
    ;

	td_attr_list 
	: td_attr { $$ = createListNode("TdAttributeList", $1); }
	| td_attr_list td_attr {$$ = $1; addLinkToList($$, $2); }
	| {$$ = NULL; }
	;

	td_attr
	: ALIGN {$$ = createAttributeNode("align",$1); }
	| VALIGN {$$ = createAttributeNode("valign",$1); }
	| ROWSPAN {$$ = createAttributeNode("rowspan",$1); }
	| COLSPAN {$$ = createAttributeNode("colspan",$1); }
	| WIDTH {$$ = createAttributeNode("width",$1); }
	| HEIGHT {$$ = createAttributeNode("height",$1); }
	| NOWRAP {$$ = createAttributeNode("nowrap",$1); }
	;

    th_tag
    : THOPEN ENDTAG body_content THCLOSE {$$ = createTagNode("ThTag",$3); }
	| THOPEN th_attr_list ENDTAG body_content THCLOSE {$$ = createTagWithAttribute("ThTag", $2, $4); }
    ;

	th_attr_list 
	: th_attr { $$ = createListNode("ThAttributeList", $1); }
	| th_attr_list td_attr {$$ = $1; addLinkToList($$, $2); }
	| {$$ = NULL; }
	;

	th_attr
	: ALIGN {$$ = createAttributeNode("align",$1); }
	| VALIGN {$$ = createAttributeNode("valign",$1); }
	| ROWSPAN {$$ = createAttributeNode("rowspan",$1); }
	| COLSPAN {$$ = createAttributeNode("colspan",$1); }
	| WIDTH {$$ = createAttributeNode("width",$1); }
	| HEIGHT {$$ = createAttributeNode("height",$1); }
	| NOWRAP {$$ = createAttributeNode("nowrap",$1); }
	;

    ul_tag
    : ULOPEN ENDTAG li_tag
     ULCLOSE {$$ = createTagNode("UlTag",$3); }
	 | ULOPEN ul_attr_list ENDTAG li_tag ULCLOSE {$$ = createTagWithAttribute("UlTag", $2, $4); }
    ;

	ul_attr_list
	: ul_attr {$$ = createListNode("UlAttributeList", $1);}
	| ul_attr_list ul_attr {$$ = $1; addLinkToList($$,$2);}
	| {$$ = NULL; }
	;

	ul_attr
	: TYPE {$$ = createAttributeNode("type", $1); }
	| COMPACT {$$ = createAttributeNode("compact", $1); }
	;

    text
    : text_content { $$ = createListNode("TextTags", $1);}
	| text text_content { $$ = $1; 
							addLinkToList($$,$2);
					}
    ;

    text_content
    : br_tag { $$ = createTagNode("TextContentTags", $1); }
    | img_tag { $$ = createTagNode("TextContentTags", $1); }
    | a_tag { $$ = createTagNode("TextContentTags", $1); }
    | physical_style{ $$ = createTagNode("TextContentTags", $1); }
	| content_style { $$ = createTagNode("TextContentTags", $1); }
	| applet_tag { $$ = createTagNode("TextContentTags", $1); }
	| noscript_tag { $$ = createTagNode("TextContentTags", $1); }
	| object_tag { $$ = createTagNode("TextContentTags", $1); }
	| CONTENT { $$ = createTagNode("TextContentTags", $1); }
    ;
	
	img_tag
	: IMGOPEN SRC ENDTAG text 
	IMGCLOSE {$$ = createTagNode("ImgTag",$4);}
	| IMGOPEN img_attr_list ENDTAG text 
	IMGCLOSE {$$ = createTagWithAttribute("ImgTag",$2,$4); }
	;

	img_attr_list 
	: img_attr {$$ = createListNode("ImgAttributeList", $1); }
	| img_attr_list img_attr {$$ = $1; addLinkToList($$,$2);}
	| {$$ = NULL;}
	;

	img_attr
	: ALIGN {$$ = createAttributeNode("align", $1); }
	| WIDTH {$$ = createAttributeNode("width", $1); }
	| HEIGHT {$$ = createAttributeNode("height", $1); }
	| VSPACE {$$ = createAttributeNode("vspace", $1); }
	| ALT {$$ = createAttributeNode("alt", $1); }
	| BORDER {$$ = createAttributeNode("border", $1); }
	| USEMAP {$$ = createAttributeNode("usemap", $1); }
	| ISMAP {$$ = createAttributeNode("ismap", $1); }
	;


    font_tag
    : FONTOPEN ENDTAG text FONTCLOSE { $$ = createTagNode("FontTag", $3); }
	| FONTOPEN font_attr_list ENDTAG text FONTCLOSE {$$ = createTagWithAttribute("FontTag", $2, $4); }
    ;

	font_attr_list 
	: font_attr {$$ = createListNode("FontAttributeList", $1);}
	| font_attr_list font_attr {$$ = $1; addLinkToList($$, $2); }
	| {$$ = NULL;}
	;

	font_attr 
	: SIZE {$$ = createAttributeNode("size",$1); }
	| COLOR {$$ = createAttributeNode("color",$1); }
	;

    i_tag
    : IOPEN text ICLOSE {$$ = createTagNode("ITag",$2); }
    ;

    small_tag
    : SMALLOPEN text SMALLCLOSE {$$ = createTagNode("SmallTag",$2); }
    ;

    sub_tag
    : SUBOPEN text SUBCLOSE {$$ = createTagNode("SubTag",$2); }
    ;

    sup_tag
    : SUPOPEN text SUPCLOSE {$$ = createTagNode("SupTag",$2); }
    ;
	
	a_attr_list
	: a_attr {$$ = createListNode("AAttributeList",$1); }
	| a_attr_list a_attr {$$ = $1; addLinkToList($$,$2);}
	| {$$ = NULL; }
	;

	a_attr
	: NAME {$$ = createAttributeNode("name", $1); }
	| HREF {$$ = createAttributeNode("href", $1); }
	| REL {$$ = createAttributeNode("rel", $1); }
	| REV {$$ = createAttributeNode("rev", $1); }
	| TITLE {$$ = createAttributeNode("title", $1); }
	| URN {$$ = createAttributeNode("urn", $1); }
	| METHODS {$$ = createAttributeNode("methods", $1); }
	;

 %%
int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  