%{
#include <stdio.h>
%}


%token opena
%token closea 
%token openabbr 
%token closeabbr  
%token openacronym 
%token closeacronym 
%token openaddress 
%token closeaddress 
%token openapplet
%token closeapplet  
%token openarea  
%token closearea 
%token openb  
%token closeb  
%token openbase 
%token closebase 
%token openbasefont
%token closebasefont 
%token openbdo  
%token closebdo  
%token openbig 
%token closebig  
%token openblockquote 
%token closeblockquote 
%token openbody
%token closebody 
%token openbr 
%token closebr 
%token openbutton 
%token closebutton 
%token opencaption 
%token closecaption 
%token opencenter
%token closecenter 
%token opencite 
%token closecite 
%token opencode 
%token closecode 
%token opencol 
%token closecol 
%token opencolgroup 
%token closecolgroup 
%token opendd 
%token closedd 
%token opendel
%token closedel 
%token opendfn 
%token closedfn 
%token opendir 
%token closedir 
%token opendiv 
%token closediv
%token opendl 
%token closedl 
%token opendt
%token closedt
%token openem
%token closeem 
%token openfieldset
%token closefieldset 
%token openfont
%token closefont
%token openform
%token closeform
%token openframe 
%token closeframe 
%token openframeset 
%token closeframeset 
%token openhead 
%token closehead 
%token openhn
%token closehn
%token openhr 
%token closehr 
%token openhtml 
%token closehtml 
%token openi 
%token closei
%token openiframe
%token closeiframe
%token openimg
%token closeimg
%token openinput
%token closeinput 
%token openins
%token closeins
%token openisindex 
%token closeisindex
%token openkbd 
%token closekbd
%token openlabel
%token closelabel
%token openlegend
%token closelegend
%token openli 
%token closeli
%token openlink
%token closelink 
%token openlisting 
%token closelisting 
%token openmap 
%token closemap
%token openmenu
%token closemenu 
%token openmeta 
%token closemeta
%token opennextid 
%token closenextid
%token opennoframes
%token closenoframes 
%token opennoscript
%token closenoscript
%token openobject
%token closeobject
%token openol 
%token closeol 
%token openoptgroup 
%token closeoptgroup 
%token openoption 
%token closeoption 
%token openp
%token closep
%token openparam
%token closeparam
%token openplaintext
%token closeplaintext
%token openpre 
%token openq
%token closeq
%token sopen 
%token sclose
%token sampopen
%token sampclose
%token scriptopen
%token scriptclose 
%token selectopen
%token selectclose
%token smallopen
%token smallclose
%token spanopen 
%token spanclose
%token strikeopen 
%token strikeclose 
%token strongopen
%token strongclose
%token styleopen
%token styleclose 
%token subopen
%token subclose
%token supopen 
%token supclose 
%token tableopen
%token tableclose
%token tbodyopen 
%token tbodyclose
%token tdopen
%token tdclose 
%token textareaopen 
%token textareaclose
%token tfootopen 
%token tfootclose
%token thopen
%token thclose 
%token theadopen 
%token theadclose 
%token titleopen
%token titleclose 
%token tropen
%token trclose
%token ttopen 
%token ttclose 
%token uopen 
%token uclose 
%token ulopen
%token ulclose 
%token varopen
%token varclose 
%token xmpopen 
%token xmpclose
%token closepre
%token NAME
%token HREF
%token REL 
%token REV
%token METHODS
%token SHAPE
%token COORDS
%token NOHREF
%token SIZE
%token BGCOLOR
%token BACKGROUND
%token TEXT 
%token LINK
%token VLINK
%token ALINK
%token CLEAR 
%token COMPACT 
%token ALIGN 
%token COLOR
%token ACTION 
%token ENCTYPE
%token WIDTH 
%token NOSHADE 
%token VERSION
%token SRC
%token HEIGHT 
%token VSPACE
%token ALT
%token BORDER 
%token USEMAP
%token ISMAP 
%token TYPE
%token MAXLENGTH 
%token VALUE 
%token CHECKED 
%token PROMPT 
%token URN 
%token TITLE
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
%token opens
%token closes
%token Content

%start INIT 
%% 

INIT 
	: HTML_TAG 
	; 

HTML_TAG 
	: openhtml Content closehtml
	| openhtml VERSION Content closehtml
	;
	
ABBR_TAG 
	: openabbr Content closeabbr
	;

ACRONYM_TAG 
	: openacronym Content closeacronym
	;

 ADDRESS_TAG 
	: openaddress Content closeaddress
	;

APPLET_TAG 
	: openapplet Content closeapplet
	;

B_TAG 
	: openb Content closeb
	;

BLOCKQUOTE_TAG 
	: openblockquote Content closeblockquote
	;

BUTTON_TAG 
	: openbutton Content closebutton
	;

CAPTION_TAG 
	: opencaption Content closecaption
	;

CENTER_TAG 
	: opencenter Content closecenter
	;

CITE_TAG 
	: opencite Content closecite
	;

COL_TAG 
	: opencol Content closecol
	;

CODE_TAG 
	: opencode Content closecode
	;


COLGROUP_TAG 
	: opencolgroup Content closecolgroup
	;

DD_TAG 
	: opendd Content closedd
	;

DEL_TAG 
	: opendel Content closedel
	;

DFN_TAG 
	: opendfn Content closedfn
	;

BIG_TAG 
	: openbig Content closebig
	;

BDO_TAG 
	: openbdo Content closebdo
	;
	
DT_TAG 
	: opendt Content closedt
	;

EM_TAG 
	: openem Content closeem
	;

FIELDSET_TAG 
	: openfieldset Content closefieldset
	;

FRAME_TAG 
	: openframe Content closeframe
	;

FRAMESET_TAG 
	: openframeset Content closeframeset
	;

HEAD_TAG 
	: openhead Content closehead
	;

I_TAG 
	: openi Content closei
	;

IFRAME_TAG 
	: openiframe Content closeiframe
	;

INS_TAG 
	: openins Content closeins
	;

KBD_TAG 
	: openkbd Content closekbd
	;

LABEL_TAG 
	: openlabel Content closelabel
	;

LEGEND_TAG 
	: openlegend Content closelegend
	;

LISTING_TAG 
	: openlisting Content closelisting
	;

NOFRAMES_TAG 
	: opennoframes Content closenoframes
	;

NOSCRIPT_TAG 
	: opennoscript Content closenoscript
	;

OBJECT_TAG 
	: openobject Content closeobject
	;

OPTGROUP_TAG 
	: openoptgroup Content closeoptgroup
	;
	
PARAM_TAG 
	: openparam Content closeparam
	;

PLAINTEXT_TAG 
	: openplaintext Content closeplaintext
	;

Q_TAG 
	: openq Content closeq
	;

S_TAG 
	: opens Content closes
	;

SAMP_TAG 
	: sampopen Content sampclose
	;

SCRIPT_TAG 
	: scriptopen Content scriptclose
	;

SMALL_TAG 
	: smallopen Content smallclose
	;

SPAN_TAG 
	: spanopen Content spanclose
	;

STRIKE_TAG 
	: strikeopen Content strikeclose
	;

STRONG_TAG 
	: strongopen Content strongclose
	;

STYLE_TAG 
	: styleopen Content styleclose
	;

SUB_TAG 
	: subopen Content subclose
	;

SUP_TAG 
	: subopen Content supclose
	;

TBODY_TAG 
	: tbodyopen Content tbodyclose
	;

THEAD_TAG 
	: theadopen Content theadclose
	;

TITLE_TAG 
	: titleopen Content titleclose
	;

TT_TAG 
	: tropen Content ttclose
	;

U_TAG 
	: uopen Content uclose
	;

VAR_TAG 
	: varopen Content varclose
	;

XMP_TAG 
	: xmpopen Content xmpclose
	;

MENU_TAG 
	: openmenu Content closemenu 
    | openmenu COMPACT Content closemenu
;

A_TAG 
	: opena Content closea 
    | opena HREF Content closea
    | opena REL Content closea
    | opena REV Content closea
    | opena TITLE Content closea
    | opena URN Content closea
    | opena METHODS Content closea

	;

AREA_TAG 
	: openarea Content closearea
    | openarea SHAPE Content closearea 
    | openarea COORDS Content closearea
    | openarea HREF Content closearea
    | openarea ALT Content closearea
    | openarea NOHREF Content closearea
	;

BASE_TAG 
	: openbase Content closebase 
    | openbase HREF Content closebase
	;

BODY_TAG 
	: openbody Content closebody 
    | openbody BGCOLOR Content closebody 
    | openbody BACKGROUND Content closebody 
    | openbody TEXT Content closebody 
    | openbody LINK Content closebody 
    | openbody VLINK Content closebody 
    | openbody ALINK Content closebody 
	;

BR_TAG 
	: openbr Content closebr 
    | openbr CLEAR Content closebr 
	;

DIR_TAG 
	: opendir Content closedir
    | opendir COMPACT Content closedir
	;

DIV_TAG 
	: opendiv Content closediv
    | opendiv ALIGN Content opendiv
	;

DL_TAG 
	: opendl Content closedl
    | opendl COMPACT Content closedl
	;

FONT_TAG 
	:openfont Content closefont
    | openfont SIZE Content closefont
    | openfont COLOR Content closefont
	;

FORM_TAG 
	: openform Content closeform
    | openform ACTION Content closeform
    | openform METHODS Content closeform
    | openform ENCTYPE Content closeform
	;

HN_TAG 
	: openhn Content closehn
    | openhn ALIGN Content closehn
	;

HR_TAG 
	: openhr Content closehr
    | openhr ALIGN Content closehr
    | openhr SIZE Content closehr
    | openhr WIDTH Content closehr
    | openhr NOSHADE Content closehr
	;

IMG_TAG 
	: openimg Content closeimg
    | openimg SRC Content closeimg
    | openimg ALIGN Content closeimg
    | openimg WIDTH Content closeimg
    | openimg HEIGHT Content closeimg
    | openimg VSPACE Content closeimg
    | openimg ALT Content closeimg
    | openimg BORDER Content closeimg
    | openimg USEMAP Content closeimg
    | openimg ISMAP Content closeimg
	;

INPUT_TAG 
	: openinput Content closeinput
    | openinput TYPE Content closeinput
    | openinput NAME Content closeinput
    | openinput SIZE Content closeinput
    | openinput MAXLENGTH Content closeinput
    | openinput VALUE Content closeinput
    | openinput CHECKED Content closeinput
    | openinput SRC Content closeinput
    | openinput ALIGN Content closeinput
	;

ISINDEX_TAG 
	: openisindex Content closeisindex
    | openisindex PROMPT Content closeisindex
	;

LI_TAG 
	: openli Content closeli
    | openli SIZE Content closeli
    | openli VALUE Content closeli
	;

LINK_TAG 
	: openlink Content closelink
    | openlink HREF Content closelink
    | openlink REL Content closelink
    | openlink REV Content closelink
    | openlink URN Content closelink
    | openlink METHODS Content closelink
    | openlink TITLE Content closelink
    | openlink ID Content closelink
	;

MAP_TAG 
	: openmap Content closemap
    | openmap NAME Content closemap
	;

META_TAG 
	: openmeta Content closemeta
    | openmeta NAME Content closemeta
    | openmeta CONTENT Content closemeta
    | openmeta HTTP_EQUIV Content closemeta
	;

NEXTID_TAG 
	: opennextid Content closenextid
	;

OL_TAG 
	: openol Content closeol
    | openol TYPE Content closeol
    | openol START Content closeol
    | openol COMPACT Content closeol
	;

OPTION_TAG 
	: openoption Content closeoption
    | openoption SELECTED Content closeoption
    | openoption VALUE Content closeoption
	;

P_TAG 
	: openp Content closep
    | openp WIDTH Content closep
	;

PRE_TAG 
	: openpre Content closepre
    | openpre WIDTH Content closepre
	;

SELECT_TAG 
	: selectopen Content selectclose
    | selectopen NAME Content selectclose
    | selectopen SIZE Content selectclose
    | selectopen MULTIPLE Content selectclose
	;

TABLE_TAG 
	: tableopen Content tableclose
    | tableopen ALIGN Content tableclose
    | tableopen BORDER Content tableclose
    | tableopen WIDTH Content tableclose
    | tableopen CELLSPACING Content tableclose
    | tableopen CELLPADDING Content tableclose
	;

TD_TAG 
	: tdopen Content tdclose
    | tdopen ALIGN Content tdclose
    | tdopen ROWSPAN Content tdclose
    | tdopen COLSPAN Content tdclose
    | tdopen WIDTH Content tdclose
    | tdopen HEIGHT Content tdclose
    | tdopen NOWRAP Content tdclose   
	;

TEXTAREA_TAG 
	: textareaopen Content textareaclose
    | textareaopen NAME Content textareaclose
    | textareaopen ROWSPAN Content textareaclose
    | textareaopen COLSPAN Content textareaclose
	;

TH_TAG 
	: thopen Content thclose
    | thopen ALIGN Content thclose
    | thopen ROWSPAN Content thclose
    | thopen COLSPAN Content thclose
    | thopen WIDTH Content thclose
    | thopen HEIGHT Content thclose
    | thopen NOWRAP Content thclose
	;

TR_TAG 
	: tropen Content trclose
    | tropen ALIGN Content trclose
    ;

UL_TAG 
	: ulopen Content ulclose
    | ulopen TYPE Content ulclose
    | ulopen COMPACT Content ulclose
	;

BASEFONT_TAG 
	: openbasefont Content closebasefont
    | openbasefont SIZE Content closebasefont
	;
%%
void yyerror(const char *s) {
  cout << "EEW, parse error!  Message: " << s << endl;
  // exit:
  exit(-1);
}

