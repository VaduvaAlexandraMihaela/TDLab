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
  
%start htmldocument
%%

htmldocument
    : html_tag {$$ = createHtmlDocumentNode($1); astRoot = $$;}
    ;

html_tag
    : HTMLOPEN ENDTAG  html_content  HTMLCLOSE {$$ = createTagNode("HtmlTag",$3); astRoot = $$}
	  | HTMLOPEN ENDTAG VERSION html_content HTMLCLOSE {$$ = createTagWithAttribute("HtmlTag",$3,$4); astRoot = $$;}
    ;


    html_content 
    : head_tag body_tag {$$ = createListNode("HtmlContent",$1); astRoot = $$; addLinkToList($$,$2);}
    | head_tag frameset_tag {$$ = createListNode("HtmlContent",$1); astRoot = $$; addLinkToList($$,$2);}
    ;

    head_tag 
    : HEADOPEN head_content HEADCLOSE {$$ = createTagNode("HeadTag",$2); astRoot = $$;}
    ;

    head_content 
    : 
    | style_tag {$$ = createListNode("HeadContent",$1); astRoot = $$;}
    | script_tag {$$ = createListNode("HeadContent",$1); astRoot = $$;}
    ;
	
	abbr_tag
	: ABBROPEN text
	  ABBRCLOSE {$$ = createTagNode("AbbrTag",$2); astRoot = $$;}
	;
	
	acronym_tag
	: ACRONYMOPEN text
	  ACRONYMCLOSE {$$ = createTagNode("AcronymTag",$2); astRoot = $$;}
	;
	
	address_tag
	: ADDRESSOPEN address_content 
	  ADDRESSCLOSE {$$ = createTagNode("ADDRESSTag",$2); astRoot = $$;}
	;
	
	address_content
	: p_tag {$$ = createListNode("AddressContent", $1); astRoot = $$;}
	| text { addLinkToList($$,$1); }
	;
	
	applet_tag 
	: APPLETOPEN applet_content
	  APPLETCLOSE {$$ = createTagNode("AppletTag",$2); astRoot = $$;}
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
      BODYCLOSE {$$ = createTagNode("BodyTag",$3); astRoot = $$;}
	 | BODYOPEN body_attr ENDTAG body_content_list BODYCLOSE {$$ = createTagWithAttribute("BodyTag",$2,$3); astRoot = $$;}
    ;

	body_attr
	: BGCOLOR {$$ = createListNode("BodyAttributeList",$1);}
	| BACKGROUND {	$$ = createListNode("BodyAttributeList",$1);} 
	| TEXT { $$ = createListNode("BodyAttributeList",$1);} 
	| LINK { $$ = createListNode("BodyAttributeList",$1);}
	| VLINK { $$ = createListNode("BodyAttributeList",$1);}
	| ALINK { $$ = createListNode("BodyAttributeList",$1);}
	| body_attr BGCOLOR { $$ = $1; addLinkToList($$, $2);}
	| body_attr BACKGROUND { $$ = $1; addLinkToList($$, $2);}
	| body_attr TEXT { $$ = $1; addLinkToList($$, $2);}
	| body_attr LINK { $$ = $1; addLinkToList($$, $2);}
	| body_attr VLINK { $$ = $1; addLinkToList($$, $2);}
	| body_attr ALINK { $$ = $1; addLinkToList($$, $2);}
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
	  CAPTIONCLOSE {$$ = createTagNode("CaptionTag",$2); astRoot = $$; }
	 ;
	 
	
	colgroup_tag 
	: COLGROUPOPEN colgroup_content 
	COLGROUPCLOSE {$$ = createTagNode("ColGroupTag",$2); astRoot = $$; }
	;
	
	colgroup_content
	: col_tag {$$ = createTagNode("CaptionTag",$2); astRoot = $$; }
	; 
	
	col_tag
	: COLOPEN body_content 
	COLCLOSE {$$ = createTagNode("ColTag",$2); astRoot = $$; }
	;
	
	content_style 
	: abbr_tag { $$ = createListNode("ContentStyle",$1);}
	| acronym_tag {addLinkToList($$,$1);}
	| code_tag {addLinkToList($$,$1);}
	| dfn_tag {addLinkToList($$,$1);}
	| kbd_tag {addLinkToList($$,$1);}
	| q_tag {addLinkToList($$,$1);}
	| strong_tag {addLinkToList($$,$1);}
	| em_tag {addLinkToList($$,$1);}
	; 
	
	code_tag
	: CODEOPEN text 
	 CODECLOSE  {$$ = createTagNode("CodeTag",$2); astRoot = $$; }
	; 
	
	dfn_tag
	: DFNOPEN text 
	  DFNCLOSE  {$$ = createTagNode("DfnTag",$2); astRoot = $$; }
	; 
	 
	 kbd_tag
	 : KBDOPEN text 
	   KBDCLOSE  {$$ = createTagNode("KbdTag",$2); astRoot = $$; }
	 ;
	
	q_tag
	: QOPEN text 
	  QCLOSE  {$$ = createTagNode("QTag",$2); astRoot = $$; }
	; 
	
	strong_tag
	: STRONGOPEN text 
	  STRONGCLOSE  {$$ = createTagNode("StrongTag",$2); astRoot = $$; }
	; 
	
	em_tag 
	: EMOPEN text 
	  EMCLOSE  {$$ = createTagNode("EmTag",$2); astRoot = $$; }
	; 
	
	fieldset_tag 
	: FIELDSETOPEN legend_tag form_content 
	  FIELDSETCLOSE  {$$ = createTagNode("FieldsetTag",$2); astRoot = $$; addLinkToList($$,$3);}
	; 
	
	legend_tag
	: LEGENDOPEN text 
	  LEGENDCLOSE  {$$ = createTagNode("LegendTag",$2); astRoot = $$; }
	 ; 
    
	
   del_tag
   : DELOPEN flow
	 DELCLOSE  {$$ = createTagNode("DelTag",$2); astRoot = $$; }
	; 
   
   ins_tag
   : INSOPEN flow
     INSCLOSE  {$$ = createTagNode("InsTag",$2); astRoot = $$; }
	; 
   
   map_tag
   : MAPOPEN ENDTAG map_content 
	 MAPCLOSE  {$$ = createTagNode("MapTag",$2); astRoot = $$; }
	| MAPOPEN NAME ENDTAG map_content MAPCLOSE {$$ = createTagWithAttribute("MapTag",$2,$4); astRoot = $$;}
	; 
	
	map_content 
	: area_tag  {$$ = createTagNode("MapContent",$2); astRoot = $$; }
	;
	
	area_tag
	: AREAOPEN ENDTAG text 
	AREACLOSE  {$$ = createTagNode("AreaTag",$2); astRoot = $$; }
	| AREAOPEN area_attr ENDTAG text AREACLOSE {$$ = createTagWithAttribute("AreaTag",$2,$4); astRoot = $$; }
	;
	 
	area_attr
	: SHAPE {$$ = createListNode("AreaAttributes", $1);}
	| COORDS {$$ = createListNode("AreaAttributes", $1);}
	| HREF {$$ = createListNode("AreaAttributes", $1);}
	| ALT {$$ = createListNode("AreaAttributes", $1);}
	| NOHREF {$$ = createListNode("AreaAttributes", $1);}
	| area_attr SHAPE {$$ = $1; addLinkToList($$,$2);}
	| area_attr COORDS {$$ = $1; addLinkToList($$,$2);}
	| area_attr HREF {$$ = $1; addLinkToList($$,$2);}
	| area_attr ALT {$$ = $1; addLinkToList($$,$2);}
	| area_attr NOHREF {$$ = $1; addLinkToList($$,$2);}
	;
	 
    
    script_tag
    : SCRIPTOPEN CONTENT  SCRIPTCLOSE {$$ = createTagNode("ScriptTag",$2); astRoot = $$;}
    ;

   frameset_tag
    : FRAMESETOPEN 
     frameset_content 
    FRAMESETCLOSE {$$= createTagNode("FramesetTag",$2); astRoot = $$;}
    ;

    frameset_content
    : NOFRAMESOPEN 
     noframe_tag 
    NOFRAMESCLOSE {$$ = createTagNode("FramesetContent", $2); astRoot = $$;}
    ; 
    
    noframe_tag
    : NOFRAMESOPEN body_content 
    NOFRAMESCLOSE {$$ = createTagNode("NoframeTag",$2); astRoot = $$;}
    ;
	
	noscript_tag 
	: NOSCRIPTOPEN text
	NOSCRIPTCLOSE {$$ = createTagNode("NoScriptTag",$2); astRoot = $$;}
	;
	
	object_content 
	: PARAMOPEN body_content
	 PARAMCLOSE {$$ = createTagNode("ObjectContent",$2); astRoot = $$;}
	; 
	
	object_tag 
	: OBJECTOPEN object_content
	 OBJECTCLOSE {$$ = createTagNode("ObjectTag",$2); astRoot = $$;}
	; 
	
	
    a_tag
    : AOPEN ENDTAG a_content 
    ACLOSE {$$ = createTagNode("ATag",$2); astRoot = $$;}
	| AOPEN a_attr ENDTAG a_content ACLOSE {$$ = createTagWithAttribute("ATag",$2,$4); astRoot = $$;}
    ;

    a_content
    : text {$$ = createTagNode("AContent",$1); astRoot = $$;}
    ;

    block
    : block_content {$$ = createTagNode("Block",$1); astRoot = $$;}
    ;
    
    block_content
    : 
	| basefont_tag {$$ = createListNode("BlockContent", $1);}
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
    BASEFONTCLOSE {$$ = createTagNode("BaseFontTag",$3); astRoot = $$;}
	| BASEFONTOPEN HREF ENDTAG body_content BASEFONTCLOSE {$$ = createTagWithAttribute("BaseFontTag",$2,$4); astRoot = $$;}
    ;
    
    blockquote_tag
    :
    BLOCKQUOTEOPEN  body_content 
    BLOCKQUOTECLOSE {$$ = createTagNode("BlockquoteTag",$2); astRoot = $$;}
    ;

    center_tag
    : 
	CENTEROPEN body_content 
    CENTERCLOSE {$$ = createTagNode("CenterTag",$2); astRoot = $$;}
    ;

    dir_tag
    : DIROPEN ENDTAG li_tag 
    DIRCLOSE {$$ = createTagNode("DirTag",$3); astRoot = $$;}
	| DIROPEN COMPACT ENDTAG li_tag DIRCLOSE {$$ = createTagWithAttribute("DirTag",$2,$4);}
    ;

    div_tag
    : DIVOPEN ENDTAG body_content 
    DIVCLOSE {$$ = createTagNode("DivTag",$3); astRoot = $$;}
	| DIVOPEN ALIGN ENDTAG body_content DIVCLOSE {$$ = createTagWithAttribute("DivTag",$2,$4);}
    ;

    dl_tag
    : DLOPEN  ENDTAG dl_content 
    DLCLOSE {$$ = createTagNode("DlTag",$3); astRoot = $$;}
	| DLOPEN COMPACT ENDTAG dl_content DLCLOSE {$$ = createTagWithAttribute("DivTag",$2,$4);}
    ;
    
    dl_content
    : dt_tag dd_tag {$$ = createListNode("DlContent",$1); $$=$1; addLinkToList($$,$2);}
    ;

    dt_tag
    : DTOPEN text 
    DTCLOSE {$$ = createTagNode("DtTag",$2); astRoot = $$;}
    ;

    dd_tag
    : DDOPEN flow 
    DDCLOSE {$$ = createTagNode("DDTag",$2); astRoot = $$;}
    ;

    flow
    : flow_content {$$ = createTagNode("Flow",$1); astRoot = $$;}

    flow_content
    : block {$$ = createListNode("FlowContent",$1);}
    | text { addLinkToList($$,$1);}
    ;

    form_tag
    : FORMOPEN ENDTAG form_content 
    FORMCLOSE {$$ = createTagNode("FormTag",$3); astRoot = $$;}
	| FORMOPEN form_attr ENDTAG form_content FORMCLOSE {$$ = createTagWithAttribute("FormTag",$2,$4); astRoot = $$;}
    ;

	form_attr
	: ACTION {$$ = createListNode("FormAttributes",$1);}
	| METHODS {$$ = createListNode("FormAttributes",$1);}
	| ENCTYPE {$$ = createListNode("FormAttributes",$1);}
	| form_attr ACTION {$$ = $1; addLinkToList($$,$2);}
	| form_attr METHODS {$$ = $1; addLinkToList($$,$2);}
	| form_attr ENCTYPE {$$ = $1; addLinkToList($$,$2);}
	;

	textarea_tag
	: TEXTAREAOPEN CONTENT 
	  TEXTAREACLOSE {$$ = createTagNode("TextareaTag",$2); astRoot = $$;}
	;
	
	
    form_content
    : INPUTOPEN {$$ = createListNode("FormContent",NULL);}
	| fieldset_tag { addLinkToList($$, $1);}
	| label_tag { addLinkToList($$, $1);}
	| textarea_tag { addLinkToList($$, $1);}
    | body_content { addLinkToList($$, $1);}
    | select_tag { addLinkToList($$, $1);}
    INPUTCLOSE
    ;
	
	label_tag
	: LABELOPEN label_content 
	 FORMCLOSE {$$ = createTagNode("LabelTag",$2); astRoot = $$;}
	; 
	
	label_content
	: select_tag {$$ = createTagNode("LabelContent",$1); astRoot = $$;}
	;
	

    listing_tag
    : LISTINGOPEN CONTENT
    LISTINGCLOSE {$$ = createTagNode("ListingTag",$2); astRoot = $$;}
    ;

    menu_tag
    : MENUOPEN ENDTAG li_tag 
    MENUCLOSE {$$ = createTagNode("MenuTag",$3); astRoot = $$;}
	| MENUOPEN NAME ENDTAG li_tag MENUCLOSE {$$ = createTagWithAttrivute("MenuTag", $2, $4); astRoot = $$;}
    ;

    p_tag
    : POPEN ENDTAG text 
    PCLOSE {$$ = createTagNode("PTag",$3); astRoot = $$;}
	| POPEN ALIGN ENDTAG text PCLOSE {$$ = createTagWithAttribute("PTag", $2, $4); astRoot = $$;}
    ;

    pre_tag
    : PREOPEN ENDTAG pre_content 
    PRECLOSE {$$ = createTagNode("PreTag",$3); astRoot = $$;}
	| PREOPEN ALIGN ENDTAG pre_content PRECLOSE {$$ = createTagWithAttribute("PreTag", $2, $4); astRoot = $$;}
    ;

    pre_content
    : {$$ = createListNode("PreContent", NULL);}
    | br_tag { addLinkToList($$,$1); }
    | hr_tag { addLinkToList($$,$1); }
    | a_tag { addLinkToList($$,$1); }
    | style_tag { addLinkToList($$,$1); }
    ;
	
	br_tag 
	: BROPEN ENDTAG CLEAR {$$ = createTagNode("BrTag",$3); astRoot = $$;}
	; 
	
	hr_tag
	: HROPEN ENDTAG { $$ =  createTagNode("HRTag", NULL); astRoot = $$;}
	| HROPEN hr_attr ENDTAG {$$ = createTagWithAttribute("HRTag",$2,NULL); astRoot = $$;}
	;

	hr_attr
	: ALIGN { $$ = createListNode("HrAttributes", $1); }
	| SIZE { $$ = createListNode("HrAttributes", $1); }
	| WIDTH { $$ = createListNode("HrAttributes", $1); }
	| NOSHADE { $$ = createListNode("HrAttributes", $1); }
	| hr_attr ALIGN { $$= $1; addLinkToList($$,$2); }
	| hr_attr SIZE { $$ = $1; addLinkToList($$,$2); }
	| hr_attr WIDTH { $$ = $1; addLinkToList($$,$2); }
	| hr_attr NOSHADE { $$ = $1; addLinkToList($$,$2); }
	;

    select_tag
    :SELECTOPEN select_content 
    SELECTCLOSE {$$ = createTagNode("SelectTag",$2); astRoot = $$;}
    ;

    select_content
    : option_tag {$$ = createListNode("SelectContent", $1); }
	| optgroup_tag { $$ = createListNode("SelectContent", $1); }
    ;

   style_tag
   : STYLEOPEN CONTENT STYLECLOSE {$$ = createTagNode($1,$2); astRoot=$$;}
   ;

    option_tag
    : OPTIONOPEN ENDTAG CONTENT OPTIONCLOSE {$$ = createTagNode("OptionTag",$3); astRoot = $$;}
	| OPTIONOPEN option_attr ENDTAG CONTENT OPTIONCLOSE {$$ = createTagWithAttribute("OptionTag",$2,$4); astRoot = $$;}
    ;

	option_attr
	: SELECTED {$$ = createListNode("OptionAttributes",$1); }
	| VALUE {$$ = createListNode("OptionAttributes",$1); }
	| option_attr SELECTED {$$ = $1; addLinkToList($$, $2); }
	| option_attr VALUE {$$ = $1; addLinkToList($$, $2); }
	;

    ol_tag
    : OLOPEN  ENDTAG li_tag 
    OLCLOSE {$$ = createTagNode("OlTag",$3); astRoot = $$;}
	| OLOPEN ol_attr ENDTAG li_tag OLCLOSE {$$ = createTagWithAttribute("OlTag",$2,$4); astRoot = $$;}
    ;

	ol_attr
	: TYPE {$$ = createListNode("OlAttributes",$1); }
	| START {$$ = createListNode("OlAttributes",$1); }
	| COMPACT {$$ = createListNode("OlAttributes",$1); }
	| ol_attr TYPE {$$ = $1; addLinkToList($$,$2); }
	| ol_attr START {$$ = $1; addLinkToList($$,$2); }
	| ol_attr COMPACT {$$ = $1; addLinkToList($$,$2); }
	;
	
	optgroup_tag
	: OPTGROUPOPEN option_tag
	OPTGROUPCLOSE {$$ = createTagNode("OptGroupTag",$2); astRoot = $$;}
	; 
	
	physical_style 
	: bdo_tag {$$ = createListNode("PhysicalStyle",$1); }
	| big_tag { addLinkToList($$,$1); }
	| font_tag { addLinkToList($$,$1); }
	| i_tag { addLinkToList($$,$1); }
	| s_tag { addLinkToList($$,$1); }
	| small_tag { addLinkToList($$,$1); }
	| span_tag { addLinkToList($$,$1); }
	| strike_tag { addLinkToList($$,$1); }
	| sub_tag { addLinkToList($$,$1); }
	| sup_tag { addLinkToList($$,$1); }
	| tt_tag { addLinkToList($$,$1); }
	| u_tag { addLinkToList($$,$1); }
	; 
	
	s_tag
	: SOPEN text 
	 SCLOSE {$$ = createTagNode("STag",$2); astRoot = $$;}
	; 
	
	span_tag
	: SPANOPEN text
	 SPANCLOSE {$$ = createTagNode("SpanTag",$2); astRoot = $$;}
	; 
	
	strike_tag
	: STRIKEOPEN text 
	  STRIKECLOSE {$$ = createTagNode("StrikeTag",$2); astRoot = $$;}
	; 
	
	tt_tag 
	: TTOPEN text 
	  TTCLOSE {$$ = createTagNode("TTTag",$2); astRoot = $$;}
	; 
	
	u_tag
	: UOPEN text 
	 UCLOSE {$$ = createTagNode("UTag",$2); astRoot = $$;}
	;
	
	

    li_tag 
    : LIOPEN ENDTAG flow LICLOSE {$$ = createTagNode("LiTag",$3); astRoot = $$;}
	| LIOPEN li_attr ENDTAG flow LICLOSE {$$ = createTagWithAttribute("LiTag", $2, $4); astRoot = $$; }
    ;

	li_attr
	: TYPE {$$ = createListNode("LiAttributes", $1); }
	| VALUE {$$ = createListNode("LiAttributes", $1); }
	| li_attr TYPE {$$ = $1; addLinkToList($$, $2); }
	| li_attr VALUE {$$ = $1; addLinkToList($$, $2); }
	;

    table_tag
    : TABLEOPEN ENDTAG caption_tag colgroup_tag table_content TABLECLOSE {$$ = createTagNode("TableTag",$3); astRoot = $$; addLinkToList($$, $4); addLinkToList($$, $5);}
	| TABLEOPEN table_attr ENDTAG caption_tag colgroup_tag table_content TABLECLOSE {$$ = createTagWithAttribute("TableTag",$2,$4); astRoot = $$; addLinkToList($$,$5); addLinkToList($$, $6);}
    ;

	table_attr 
	: ALIGN {$$= createListNode("TableAttributes", $1); }
	| BORDER {$$= createListNode("TableAttributes", $1);} 
	| WIDTH { $$= createListNode("TableAttributes", $1); }
	| CELLSPACING { $$= createListNode("TableAttributes", $1); }
	| CELLPADDING { $$= createListNode("TableAttributes", $1); }
	| table_attr ALIGN {$$= $1; addLinkToList($$, $2); }
	| table_attr BORDER {$$= $1; addLinkToList($$, $2); }
	| table_attr WIDTH {$$= $1; addLinkToList($$, $2); }
	| table_attr CELLSPACING {$$= $1; addLinkToList($$, $2); }
	| table_attr CELLPADDING {$$= $1; addLinkToList($$, $2); }
	;

    table_content
    : THEADOPEN {createListNode("TableContent", $1); }
    | TBODYOPEN 
    | tr_tag { addLinkToList($$, $1); }
    | TBODYCLOSE
    ;

    tr_tag
    : TROPEN ENDTAG table_cell TRCLOSE {$$ = createTagNode("TrTag",$3); astRoot = $$;}
	| TROPEN tr_attr ENDTAG table_cell TRCLOSE {$$ = createTagWithAttribute("TrTag", $2, $4); astRoot = $$; }
    ;

	tr_attr
	: ALIGN {$$ = createListNode("TrAttributes", $1); }
	| VALIGN {$$ = createListNode("TrAttributes", $1); }
	| tr_attr ALIGN {$$ = $1; addLinkToList($$, $2); }
	| tr_attr VALIGN {$$ = $1; addLinkToList($$, $2); }
	;

    table_cell
    : td_tag {$$ = createListNode("TableCell", $1); }
    | th_tag { addLinkToList($$,$1); }
    ;

    td_tag
    : TDOPEN ENDTAG body_content TDCLOSE {$$ = createTagNode("TdTag",$3); astRoot = $$;}
	| TDOPEN td_attr ENDTAG body_content TDCLOSE {$$ = createTagWithAttribute("TdTag", $2, $4); astRoot = $$; }
    ;

	td_attr
	: ALIGN {$$ = createListNode("TdAttributes",$1); }
	| VALIGN {$$ = createListNode("TdAttributes",$1); }
	| ROWSPAN {$$ = createListNode("TdAttributes",$1); }
	| COLSPAN {$$ = createListNode("TdAttributes",$1); }
	| WIDTH {$$ = createListNode("TdAttributes",$1); }
	| HEIGHT {$$ = createListNode("TdAttributes",$1); }
	| NOWRAP {$$ = createListNode("TdAttributes",$1); }
	| td_attr ALIGN {$$= $1; addLinkToList($$, $2); }
	| td_attr VALIGN {$$= $1; addLinkToList($$, $2); }
	| td_attr ROWSPAN {$$= $1; addLinkToList($$, $2); }
	| td_attr COLSPAN {$$= $1; addLinkToList($$, $2); }
	| td_attr WIDTH {$$= $1; addLinkToList($$, $2); }
	| td_attr HEIGHT {$$= $1; addLinkToList($$, $2); }
	| td_attr NOWRAP {$$= $1; addLinkToList($$, $2); }
	;

    th_tag
    : THOPEN ENDTAG body_content THCLOSE {$$ = createTagNode("ThTag",$3); astRoot = $$;}
	| THOPEN th_attr ENDTAG body_content THCLOSE {$$ = createTagWithAttribute("ThTag", $2, $4); astRoot = $$; }
    ;

	th_attr
	: ALIGN {$$ = createListNode("ThAttributes",$1); }
	| VALIGN {$$ = createListNode("ThAttributes",$1); }
	| ROWSPAN {$$ = createListNode("ThAttributes",$1); }
	| COLSPAN {$$ = createListNode("ThAttributes",$1); }
	| WIDTH {$$ = createListNode("ThAttributes",$1); }
	| HEIGHT {$$ = createListNode("ThAttributes",$1); }
	| NOWRAP {$$ = createListNode("ThAttributes",$1); }
	| th_attr ALIGN {$$ = $1; addLinkToList($$,$2); }
	| th_attr VALIGN {$$ = $1; addLinkToList($$,$2); }
	| th_attr ROWSPAN {$$ = $1; addLinkToList($$,$2); }
	| th_attr COLSPAN {$$ = $1; addLinkToList($$,$2); }
	| th_attr WIDTH {$$ = $1; addLinkToList($$,$2); }
	| th_attr HEIGHT {$$ = $1; addLinkToList($$,$2); }
	| th_attr NOWRAP {$$ = $1; addLinkToList($$,$2); }
	;

    ul_tag
    : ULOPEN ENDTAG li_tag
     ULCLOSE {$$ = createTagNode("UlTag",$3); astRoot = $$;}
	 | ULOPEN ul_attr ENDTAG li_tag ULCLOSE {$$ = createTagWithAttribute("UlTag", $2, $4); astRoot = $$; }
    ;

	ul_attr
	: TYPE {$$ = createListNode("UlAttributes", $1); }
	| COMPACT {$$ = createListNode("UlAttributes", $1); }
	| ul_attr TYPE {$$ = $1; addLinkToList($$, $2); }
	| ul_attr COMPACT {$$ = $1; addLinkToList($$, $2); }
	;

    text
    : text_content { $$ = createListNode("TextTags", $1);}
	| text text_content { $$ = $1; 
							addLinkToList($$,$2);
					}
    ;

    text_content
    : br_tag { $$ = createListNode("TextContentTags", $$); astRoot = $$; addLinkToList($$,$1);}
    | img_tag {addLinkToList($$,$1);}
    | a_tag {addLinkToList($$,$1);}
    | physical_style {addLinkToList($$,$1);}
	| content_style {addLinkToList($$,$1);}
	| applet_tag {addLinkToList($$,$1);}
	| noscript_tag {addLinkToList($$,$1);}
	| object_tag {addLinkToList($$,$1);}
	| CONTENT {addLinkToList($$,$1);}
    ;
	
	img_tag
	: IMGOPEN SRC ENDTAG text 
	IMGCLOSE {$$ = createTagNode("ImgTag",$4);}
	| IMGOPEN img_attr ENDTAG text 
	IMGCLOSE {$$ = createTagWithAttribute("ImgTag",$2,$4); }
	;

	img_attr
	: ALIGN {$$ = createListNode("ImgAttributes", $1); }
	| WIDTH {$$ = createListNode("ImgAttributes", $1); }
	| HEIGHT {$$ = createListNode("ImgAttributes", $1); }
	| VSPACE {$$ = createListNode("ImgAttributes", $1); }
	| ALT {$$ = createListNode("ImgAttributes", $1); }
	| BORDER {$$ = createListNode("ImgAttributes", $1); }
	| USEMAP {$$ = createListNode("ImgAttributes", $1); }
	| ISMAP {$$ = createListNode("ImgAttributes", $1); }
	| img_attr ALIGN { $$ =$1; addLinkToList($$, $2); }
	| img_attr WIDTH { $$ =$1; addLinkToList($$, $2); }
	| img_attr HEIGHT { $$ =$1; addLinkToList($$, $2); }
	| img_attr VSPACE { $$ =$1; addLinkToList($$, $2); }
	| img_attr ALT { $$ =$1; addLinkToList($$, $2); }
	| img_attr BORDER { $$ =$1; addLinkToList($$, $2); }
	| img_attr USEMAP { $$ =$1; addLinkToList($$, $2); }
	| img_attr ISMAP { $$ =$1; addLinkToList($$, $2); }
	;


    font_tag
    : FONTOPEN ENDTAG text FONTCLOSE { $$ = createTagNode("FontTag", $3); }
	| FONTOPEN font_attr ENDTAG text FONTCLOSE {$$ = createTagWithAttribute("FontTag", $2, $4); }
    ;

	font_attr 
	: SIZE {$$ = createListNode("FontAttributes",$1); }
	| COLOR {$$ = createListNode("FontAttributes",$1); }
	| font_attr SIZE { $$ =$1; addLinkToList($$, $2); }
	| font_attr COLOR { $$ =$1; addLinkToList($$, $2); }
	;

    i_tag
    : IOPEN text ICLOSE {$$ = createTagNode("ITag",$2); astRoot = $$;}
    ;

    small_tag
    : SMALLOPEN text SMALLCLOSE {$$ = createTagNode("SmallTag",$2); astRoot = $$;}
    ;

    sub_tag
    : SUBOPEN text SUBCLOSE {$$ = createTagNode("SubTag",$2); astRoot = $$;}
    ;

    sup_tag
    : SUPOPEN text SUPCLOSE {$$ = createTagNode("SupTag",$2); astRoot = $$;}
    ;
	
	a_attr
	: NAME {$$ = createListNode("ATagAttributes", $1); }
	| HREF {$$ = createListNode("ATagAttributes", $1); }
	| REL {$$ = createListNode("ATagAttributes", $1); }
	| REV {$$ = createListNode("ATagAttributes", $1); }
	| TITLE {$$ = createListNode("ATagAttributes", $1); }
	| URN {$$ = createListNode("ATagAttributes", $1); }
	| METHODS {$$ = createListNode("ATagAttributes", $1); }
	| a_attr NAME {$$ = $1; addLinkToList($$, $2); }
	| a_attr HREF {$$ = $1; addLinkToList($$, $2); }
	| a_attr REL {$$ = $1; addLinkToList($$, $2); }
	| a_attr REV {$$ = $1; addLinkToList($$, $2); }
	| a_attr TITLE {$$ = $1; addLinkToList($$, $2); }
	| a_attr URN {$$ = $1; addLinkToList($$, $2); }
	| a_attr METHODS {$$ = $1; addLinkToList($$, $2); }
	;

 %%
int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  