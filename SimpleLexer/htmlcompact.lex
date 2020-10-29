%{
#include <stdio.h>
#include "symbols.h"

%}

alpha [a-zA-Z]
digit [0-9]
/* this regex does not require http/https protocol for urls */
url [-a-zA-Z0-9@:%._\+~#=]{1,256}\.[a-zA-Z0-9()]{1,6}\b([-a-zA-Z0-9()@:%_\+.~#?&//=]*)

L = [a-zA-Z_]+
D = [0-9]+
LineTerminator = [ ,\t,\r,\n]+



A_OPEN_TAG <(A|a)
A_CLOSE_TAG <\/(A|a)>
ABBR_OPEN_TAG <(A|a)(B|b)(B|b)(R|r)
ABBR_CLOSE_TAG <\/(A|a)(B|b)(B|b)(R|r)>
ACRONYM_OPEN_TAG <(A|a)(C|c)(R|r)(O|o)(N|n)(Y|y)(M|m)
ACRONYM_CLOSE_TAG <\/(A|a)(C|c)(R|r)(O|o)(N|n)(Y|y)(M|m)>
ADDRESS_OPEN_TAG <(A|a)(D|d)(D|d)(R|r)(E|e)(S|s)(S|s)
ADDRESS_CLOSE_TAG <\/(A|a)(D|d)(D|d)(R|r)(E|e)(S|s)(S|s)>
APPLET_OPEN_TAG <(A|a)(P|p)(P|p)(L|l)(E|e)(T|t)
APPLET_CLOSE_TAG <\/(A|a)(P|p)(P|p)(L|l)(E|e)(T|t)>
AREA_OPEN_TAG <(A|a)(R|r)(E|e)(A|a)
AREA_CLOSE_TAG <\/(A|a)(R|r)(E|e)(A|a)>
B_OPEN_TAG <(B|b)
B_CLOSE_TAG <\/(B|b)>
BASE_OPEN_TAG <(B|b)(A|a)(S|s)(E|e)
BASE_CLOSE_TAG <\/(B|b)(A|a)(S|s)(E|e)>
BASEFONT_OPEN_TAG <(B|b)(A|a)(S|s)(E|e)(F|f)(O|o)(N|n)(T|t)
BASEFONT_CLOSE_TAG <\/(B|b)(A|a)(S|s)(E|e)(F|f)(O|o)(N|n)(T|t)> 
BDO_OPEN_TAG <(B|b)(D|d)(O|o)
BDO_CLOSE_TAG <\/(B|b)(D|d)(O|o)>
BIG_OPEN_TAG <(B|b)(I|i)(G|g)
BIG_CLOSE_TAG <\/(B|b)(I|i)(G|g)>
BLOCKQUOTE_OPEN_TAG <(B|b)(L|l)(O|o)(C|c)(K|k)(Q|q)(U|u)(O|o)(T|t)(E|e)
BLOCKQUOTE_CLOSE_TAG <\/(B|b)(L|l)(O|o)(C|c)(K|k)(Q|q)(U|u)(O|o)(T|t)(E|e)> 
BODY_OPEN_TAG <(B|b)(O|o)(D|d)(Y|y)
BODY_CLOSE_TAG <\/(B|b)(O|o)(D|d)(Y|y)>
BR_OPEN_TAG <(B|b)(R|r)
BR_CLOSE_TAG <\/(B|b)(R|r)>
BUTTON_OPEN_TAG <(B|b)(U|u)(T|t)(T|t)(O|o)(N|n)
BUTTON_CLOSE_TAG <\/(B|b)(U|u)(T|t)(T|t)(O|o)(N|n)>
CAPTION_OPEN_TAG <(C|c)(A|a)(P|p)(T|t)(I|i)(O|o)(N|n)
CAPTION_CLOSE_TAG <\/(C|c)(A|a)(P|p)(T|t)(I|i)(O|o)(N|n)>
CENTER_OPEN_TAG <(C|c)(E|e)(N|n)(T|t)(E|e)(R|r)
CENTER_CLOSE_TAG <\/(C|c)(E|e)(N|n)(T|t)(E|e)(R|r)>
CITE_OPEN_TAG <(C|c)(I|i)(T|t)(E|e)
CITE_CLOSE_TAG <\/(C|c)(I|i)(T|t)(E|e)>
CODE_OPEN_TAG <(C|c)(O|o)(D|d)(E|e)
CODE_CLOSE_TAG <\/(C|c)(O|o)(D|d)(E|e)>
COL_OPEN_TAG <(C|c)(O|o)(L|l)
COL_CLOSE_TAG <\/(C|c)(O|o)(L|l)>
COLGROUP_OPEN_TAG <(C|c)(O|o)(L|l)(G|g)(R|r)(O|o)(U|u)(P|p)
COLGROUP_CLOSE_TAG <\/(C|c)(O|o)(L|l)(G|g)(R|r)(O|o)(U|u)(P|p)>
DD_OPEN_TAG <(D|d)(D|d)
DD_CLOSE_TAG <\/(D|d)(D|d)> 
DEL_OPEN_TAG <(D|d)(E|e)(L|l)
DEL_CLOSE_TAG <\/(D|d)(E|e)(L|l)>
DFN_OPEN_TAG <(D|d)(F|f)(N|n)
DFN_CLOSE_TAG <\/(D|d)(F|f)(N|n)>
DIR_OPEN_TAG <(D|d)(I|i)(R|r)
DIR_CLOSE_TAG <\/(D|d)(I|i)(R|r)>
DIV_OPEN_TAG <(D|d)(I|i)(V|v)
DIV_CLOSE_TAG <\/(D|d)(I|i)(V|v)>
DL_OPEN_TAG <(D|d)(L|l)
DL_CLOSE_TAG <\/(D|d)(L|l)>
DT_OPEN_TAG <(D|d)(T|t)
DT_CLOSE_TAG <\/(D|d)(T|t)>
EM_OPEN_TAG <(E|e)(M|m)
EM_CLOSE_TAG <\/(E|e)(M|m)>
FIELDSET_OPEN_TAG <(F|f)(I|i)(E|e)(L|l)(D|d)(S|s)(E|e)(T|t)
FIELDSET_CLOSE_TAG <\/(F|f)(I|i)(E|e)(L|l)(D|d)(S|s)(E|e)(T|t)>
FONT_OPEN_TAG <(F|f)(O|o)(N|n)(T|t)
FONT_CLOSE_TAG <\/(F|f)(O|o)(N|n)(T|t)>
FORM_OPEN_TAG <(F|f)(O|o)(R|r)(M|m)
FORM_CLOSE_TAG <\/(F|f)(O|o)(R|r)(M|m)>
FRAME_OPEN_TAG <(F|f)(R|r)(A|a)(M|m)(E|e)
FRAME_CLOSE_TAG <\/(F|f)(R|r)(A|a)(M|m)(E|e)>
FRAMESET_OPEN_TAG <(F|f)(R|r)(A|a)(M|m)(E|e)(S|s)(E|e)(T|t)
FRAMESET_CLOSE_TAG <\/(F|f)(R|r)(A|a)(M|m)(E|e)(S|s)(E|e)(T|t)>
HEAD_OPEN_TAG <(H|h)(E|e)(A|a)(D|d)
HEAD_CLOSE_TAG <\/(H|h)(E|e)(A|a)(D|d)>
Hn_OPEN_TAG <(H|h)(N|n)
Hn_CLOSE_TAG <\/(H|h)(N|n)>
HR_OPEN_TAG <(H|h)(R|r)
HR_CLOSE_TAG <\/(H|h)(R|r)>
HTML_OPEN_TAG <(H|h)(T|t)(M|m)(L|l)
HTML_CLOSE_TAG <\/(H|h)(T|t)(M|m)(L|l)>
I_OPEN_TAG <(I|i)
I_CLOSE_TAG <\/(I|i)>
IFRAME_OPEN_TAG <(I|i)(F|f)(R|r)(A|a)(M|m)(E|e)
IFRAME_CLOSE_TAG <\/(I|i)(F|f)(R|r)(A|a)(M|m)(E|e)>
IMG_OPEN_TAG <(I|i)(M|m)(G|g)
IMG_CLOSE_TAG <\/(I|i)(M|m)(G|g)>
INPUT_OPEN_TAG <(I|i)(N|n)(P|p)(U|u)(T|t)
INPUT_CLOSE_TAG <\/(I|i)(N|n)(P|p)(U|u)(T|t)>
INS_OPEN_TAG <(I|i)(N|n)(S|s)
INS_CLOSE_TAG <\/(I|i)(N|n)(S|s)>
ISINDEX_OPEN_TAG <(I|i)(S|s)(I|i)(N|n)(D|d)(E|e)(X|x)
ISINDEX_CLOSE_TAG <\/(I|i)(S|s)(I|i)(N|n)(D|d)(E|e)(X|x)>
KBD_OPEN_TAG <(K|k)(B|b)(D|d)
KBD_CLOSE_TAG <\/(K|k)(B|b)(D|d)>
LABEL_OPEN_TAG <(L|l)(A|a)(B|b)(E|e)(L|l)
LABEL_CLOSE_TAG <\/(L|l)(A|a)(B|b)(E|e)(L|l)>
LEGEND_OPEN_TAG <(L|l)(E|e)(G|e)(E|e)(N|n)(D|d)
LEGEND_CLOSE_TAG <\/(L|l)(E|e)(G|e)(E|e)(N|n)(D|d)>
LI_OPEN_TAG <(L|l)(I|i)
LI_CLOSE_TAG <\/(L|l)(I|i)>
LINK_OPEN_TAG <(L|l)(I|i)(N|n)(K|k)
LINK_CLOSE_TAG <\/(L|l)(I|i)(N|n)(K|k)>
LISTING_OPEN_TAG <(L|l)(I|i)(S|s)(T|t)(I|i)(N|n)(G|g)
LISTING_CLOSE_TAG <\/(L|l)(I|i)(S|s)(T|t)(I|i)(N|n)(G|g)> 
MAP_OPEN_TAG <(M|m)(A|a)(P|p)
MAP_CLOSE_TAG <\/(M|m)(A|a)(P|p)>
MENU_OPEN_TAG <(M)(E)(N)(U)
MENU_CLOSE_TAG <\/(M)(E)(N)(U)>
META_OPEN_TAG <(M)(E)(T)(A)
META_CLOSE_TAG <\/(M)(E)(T)(A)>
NEXTID_OPEN_TAG <(N|n)(E|e)(X|x)(T|t)(I|i)(D|d)
NEXTID_CLOSE_TAG <\/(N|n)(E|e)(X|x)(T|t)(I|i)(D|d)>
NOFRAMES_OPEN_TAG <(N|n)(O|o)(F|f)(R|r)(A|a)(M|m)(E|e)(S|s)
NOFRAMES_CLOSE_TAG <\/(N|n)(O|o)(F|f)(R|r)(A|a)(M|m)(E|e)(S|s)>
NOSCRIPT_OPEN_TAG <(N|n)(O|o)(S|s)(C|c)(R|r)(I|i)(P|p)(T|t)
NOSCRIPT_CLOSE_TAG <\/(N|n)(O|o)(S|s)(C|c)(R|r)(I|i)(P|p)(T|t)>
OBJECT_OPEN_TAG <(O|o)(B|b)(J|j)(E|e)(C|c)(T|t)
OBJECT_CLOSE_TAG <\/(O|o)(B|b)(J|j)(E|e)(C|c)(T|t)>
OL_OPEN_TAG <(O|o)(L|l)
OL_CLOSE_TAG <\/(O|o)(L|l)>
OPTGROUP_OPEN_TAG <(O|o)(P|p)(T|t)(G|g)(R|r)(O|o)(U|u)(P|p)
OPTGROUP_CLOSE_TAG <\/(O|o)(P|p)(T|t)(G|g)(R|r)(O|o)(U|u)(P|p)>
OPTION_OPEN_TAG <(O|o)(P|p)(T|t)(I|i)(O|o)(N|n)
OPTION_CLOSE_TAG <\/(O|o)(P|p)(T|t)(I|i)(O|o)(N|n)>
P_OPEN_TAG <(P|p)
P_CLOSE_TAG <\/(P|p)>
PARAM_OPEN_TAG <(P|p)(A|a)(R|r)(A|a)(M|m)
PARAM_CLOSE_TAG <\/(P|p)(A|a)(R|r)(A|a)(M|m)>
PLAINTEXT_OPEN_TAG <(P|p)(L|l)(A|a)(I|i)(N|n)(T|t)(E|e)(X|x)(T|t)
PLAINTEXT_CLOSE_TAG <\/(P|p)(L|l)(A|a)(I|i)(N|n)(T|t)(E|e)(X|x)(T|t)>
PRE_OPEN_TAG <(P|p)(R|r)(E|e)
PRE_CLOSE_TAG <\/(P|p)(R|r)(E|e)>
Q_OPEN_TAG <(Q|q)
Q_CLOSE_TAG <\/(Q|q)>
S_OPEN_TAG <(S|s)
S_CLOSE_TAG <\/(S|s)>
SAMP_OPEN_TAG <(S|s)(A|a)(M|m)(P|p)
SAMP_CLOSE_TAG <\/(S|s)(A|a)(M|m)(P|p)>
SCRIPT_OPEN_TAG <(S|s)(C|c)(R|r)(I|i)(P|p)(T|t)
SCRIPT_CLOSE_TAG <\/(S|s)(C|c)(R|r)(I|i)(P|p)(T|t)>
SELECT_OPEN_TAG <(S|s)(E|e)(L|l)(E|e)(C|c)(T|t)
SELECT_CLOSE_TAG <\/(S|s)(E|e)(L|l)(E|e)(C|c)(T|t)>
SMALL_OPEN_TAG <(S|s)(M|m)(A|a)(L|l)(L|l)
SMALL_CLOSE_TAG <\/(S|s)(M|m)(A|a)(L|l)(L|l)>
SPAN_OPEN_TAG <(S|s)(P|a)(A|a)(N|n)
SPAN_CLOSE_TAG <\/(S|s)(P|a)(A|a)(N|n)>
STRIKE_OPEN_TAG <(S|s)(T|t)(R|r)(I|i)(K|k)(E|e)
STRIKE_CLOSE_TAG <\/(S|s)(T|t)(R|r)(I|i)(K|k)(E|e)>
STRONG_OPEN_TAG = <(S|s)(T|t)(R|r)(O|o)(N|n)(G|g)
STRONG_CLOSE_TAG = <\/(S|s)(T|t)(R|r)(O|o)(N|n)(G|g)>
STYLE_OPEN_TAG <(S|s)(T|t)(Y|y)(L|l)(E|e)
STYLE_CLOSE_TAG <\/(S|s)(T|t)(Y|y)(L|l)(E|e)>
SUB_OPEN_TAG <(S|s)(U|u)(B|b)
SUB_CLOSE_TAG <\/(S|s)(U|u)(B|b)>
SUP_OPEN_TAG <(S|s)(U|u)(P|p)
SUP_CLOSE_TAG <\/(S|s)(U|u)(P|p)>
TABLE_OPEN_TAG <(T|t)(A|a)(B|b)(L|l)(E|e)
TABLE_CLOSE_TAG <\/(T|t)(A|a)(B|b)(L|l)(E|e)>
TBODY_OPEN_TAG <(T|t)(B|b)(O|o)(D|d)(Y|y)
TBODY_CLOSE_TAG <\/(T|t)(B|b)(O|o)(D|d)(Y|y)>
TD_OPEN_TAG <(T|t)(D|d)
TD_CLOSE_TAG <\/(T|t)(D|d)>
TEXTAREA_OPEN_TAG <(T|t)(E|e)(X|x)(T|T)(A|a)(R|r)(E|e)(A|a)
TEXTAREA_CLOSE_TAG <\/(T|t)(E|e)(X|x)(T|T)(A|a)(R|r)(E|e)(A|a)>
TFOOT_OPEN_TAG <(T|t)(F|f)(O|o)(O|o)(T|t)
TFOOT_CLOSE_TAG <\/(T|t)(F|f)(O|o)(O|o)(T|t)>
TH_OPEN_TAG <(T|t)(H|h)
TH_CLOSE_TAG <\/(T|t)(H|h)>
THEAD_OPEN_TAG <(T|t)(H|h)(R|r)(E|e)(A|a)(D|d)
THEAD_CLOSE_TAG <\/(T|t)(H|h)(R|r)(E|e)(A|a)(D|d)> 
TITLE_OPEN_TAG <(T|t)(I|i)(T|t)(L|l)(E|e)
TITLE_CLOSE_TAG <\/(T|t)(I|i)(T|t)(L|l)(E|e)>
TR_OPEN_TAG <(T|t)(R|r)
TR_CLOSE_TAG <\/(T|t)(R|r)>
TT_OPEN_TAG <(T|t)(T|t)
TT_CLOSE_TAG <\/(T|t)(T|t)>
U_OPEN_TAG <(U|u)
U_CLOSE_TAG <\/(U|u)>
UL_OPEN_TAG <(U|u)(L|l)
UL_CLOSE_TAG <\/(U|u)(L|l)>
VAR_OPEN_TAG <(V|v)(A|a)(R|r)
VAR_CLOSE_TAG <\/(V|v)(A|a)(R|r)>
XMP_OPEN_TAG <(X|x)(M|m)(P|p)
XMP_CLOSE_TAG <\/(X|x)(M|m)(P|p)>

NAME name = \"[^\"]*\"
HREF href = \"[^\"]*\"
REL rel = \"[^\"]*\"
REV rev = \"[^\"]*\"
TITLE title = \"[^\"]*\"
URN urn = \"[^\"]*\"
METHODS methods = \"[^\"]*\"
SHAPE shape = \"[^\"]*\"
COORDS coords = \"[^\"]*\"
ALT alt = \"[^\"]*\"
NOHREF nohref
SIZE size = \"[^\"]*\"
BGCOLOR bgcolor = \"[^\"]*\"
BACKGROUND background = \"[^\"]*\"
BORDER border = \"[^\"]*\"
ID id = \"[^\"]*\"
TEXT text = \"[^\"]*\"
LINK link = \"[^\"]*\"
VLINK vlink = \"[^\"]*\"
ALINK alink = \"[^\"]*\"
CLEAR clear = (all|left|right)
COMPACT compact 
ALIGN align = (left|center|right|left|right)
COLOR color = \"[^\"]*\"
ACTION action = \"[^\"]*\"
ENCTYPE enctype = \"[^\"]*\"
WIDTH width = \"[^\"]*\"
NOSHADE noshade 
VERSION version = \"[^\"]*\"
SRC src = \"[^\"]*\"
HEIGHT height = \"[^\"]*\"
VSPACE vspace = \"[^\"]*\"


USEMAP usemap = \"[^\"]*\"
ISMAP ismap = \"[^\"]*\"
TYPE type = \"[^\"]*\"
MAXLENGTH maxlength = \"[^\"]*\"
VALUE value = \"[^\"]*\"
CHECKED checked 
PROMPT prompt = \"[^\"]*\"



HTTP-EQUIV http-equiv = \"[^\"]*\"
CONTENT content = \"[^\"]*\"
N n = \"[^\"]*\"
START start = \"[^\"]*\"
SELECTED selected
MULTIPLE multiple 
CELLSPACING cellspacing = \"[^\"]*\"
CELLPADDING cellpadding = \"[^\"]*\"
ROWSPAN rowspan = \"[^\"]*\"
COLSPAN colspan = \"[^\"]*\"
NOWRAP nowrap

%%



	{A_OPEN_TAG} {count(); return opena;}
	{A_CLOSE_TAG} {count(); return closea;} 
	{ABBR_OPEN_TAG} {count(); return openabbr;}
	{ABBR_CLOSE_TAG} {count(); return closeabbr;}
	{ACRONYM_OPEN_TAG} {count(); return openacronym;}
	{ACRONYM_CLOSE_TAG} {count(); return closeacronym;}
	{ADDRESS_OPEN_TAG} {count(); return openaddress;}
	{ADDRESS_CLOSE_TAG} {count(); return closeaddress;}
	{APPLET_OPEN_TAG} {count(); return openapplet;}
	{APPLET_CLOSE_TAG} {count(); return closeapplet;}
	{AREA_OPEN_TAG} {count(); return openarea;}
	{AREA_CLOSE_TAG} {count(); return closearea;}
	{B_OPEN_TAG} {count(); return openb;} 
	{B_CLOSE_TAG} {count(); return closeb;}
	{BASE_OPEN_TAG} {count(); return openbase;}
	{BASE_CLOSE_TAG} {count(); return closebase;}
	{BASEFONT_OPEN_TAG} {count(); return openbasefont;}
	{BASEFONT_CLOSE_TAG} {count(); return closebasefont;}
	{BDO_OPEN_TAG} {count(); return openbdo;}
	{BDO_CLOSE_TAG} {count(); return closebdo;}
	{BIG_OPEN_TAG} {count(); return openbig;}
	{BIG_CLOSE_TAG} {count(); return symbol(sum.closebig);}
	{BLOCKQUOTE_OPEN_TAG} {count(); return openblockquote;}
	{BLOCKQUOTE_CLOSE_TAG} {count(); return closeblockquote;}
	{BODY_OPEN_TAG} {count(); return openbody;}
	{BODY_CLOSE_TAG} {count(); return closebody;} 
	{BR_OPEN_TAG} {count(); return openbr;} 
	{BR_CLOSE_TAG} {count(); return closebr;} 
	{BUTTON_OPEN_TAG} {count(); return openbutton;}
	{BUTTON_CLOSE_TAG} {count(); return closebutton;} 
	{CAPTION_OPEN_TAG} {count(); return opencaption;}
	{CAPTION_CLOSE_TAG} {count(); return closecaption;}
	{CENTER_OPEN_TAG} {count(); return opencenter;}
	{CENTER_CLOSE_TAG} {count(); return closecenter;}
	{CITE_OPEN_TAG} {count(); return opencite;} 
	{CITE_CLOSE_TAG} {count(); return closecite;} 
	{CODE_OPEN_TAG} {count(); return opencode;}
	{CODE_CLOSE_TAG} {count(); return closecode;}
	{COL_OPEN_TAG} {count(); return opencol;}
	{COL_CLOSE_TAG} {count(); return closecol;}
	{COLGROUP_OPEN_TAG} {count(); return opencolgroup;}
	{COLGROUP_CLOSE_TAG} {count(); return closecolgroup;}
	{DD_OPEN_TAG} {count(); return opendd;} 
	{DD_CLOSE_TAG} {count(); return closedd;}
	{DEL_OPEN_TAG} {count(); return opendel;}
 	{DEL_CLOSE_TAG} {count(); returm closedel;}
	{DFN_OPEN_TAG} {count(); return opendfn;} 
	{DFN_CLOSE_TAG}  {count(); return closedfn;}
	{DIR_OPEN_TAG} {count(); return opendir;}
	{DIR_CLOSE_TAG} {count(); return closedir;} 
	{DIV_OPEN_TAG} {count(); return opendiv;}
	{DIV_CLOSE_TAG} {count(); return closediv;}
	{DL_OPEN_TAG} {count(); return opendl;}
	{DL_CLOSE_TAG} {count(); return closedl;}
	{DT_OPEN_TAG} {count(); return opendt;}
	{DT_CLOSE_TAG} {count(); return closedt;}
	{EM_OPEN_TAG} {count(); return openem;} 
	{EM_CLOSE_TAG} {count(); return closeem;}
	{FIELDSET_OPEN_TAG} {count(); return openfieldset;} 
	{FIELDSET_CLOSE_TAG} {count(); return closefieldset;}
	{FONT_OPEN_TAG} {count(); return openfont;}
	{FONT_CLOSE_TAG} {count(); return closefont;} 
	{FORM_OPEN_TAG}	{count(); return openform;}
	{FORM_CLOSE_TAG} {count(); return closeform;}
	{FRAME_OPEN_TAG} {count(); return openframe;}
	{FRAME_CLOSE_TAG} {count(); return closeframe;}
	{FRAMESET_OPEN_TAG} {count(); return openframeset;}
	{FRAMESET_CLOSE_TAG} {count(); return closeframeset;}
	{HEAD_OPEN_TAG} {count(); return openhead;}
	{HEAD_CLOSE_TAG} {count(); return closehead;} 
	{Hn_OPEN_TAG} {count(); return openhn;}
	{Hn_CLOSE_TAG} {count(); return closehn;}
	{HR_OPEN_TAG} {count(); return openhr;}
	{HR_CLOSE_TAG} {count(); return closehr;}
	{HTML_OPEN_TAG} {count(); return openhtml;}
	{HTML_CLOSE_TAG} {count(); return closehtml;} 
	{I_OPEN_TAG} {count(); return openi;}
	{I_CLOSE_TAG} {count(); return closei;}
	{IFRAME_OPEN_TAG} {count(); return openiframe;}
	{IFRAME_CLOSE_TAG} {count(); return closeiframe;}
	{IMG_OPEN_TAG} {count(); return openimg;}
	{IMG_CLOSE_TAG} {count(); return closeimg;}
	{INPUT_OPEN_TAG} {count(); return openinput;}
	{INPUT_CLOSE_TAG} {count(); return closeinput;}
	{INS_OPEN_TAG} {count(); return openins;}
	{INS_CLOSE_TAG} {count(); return closeins;}
	{ISINDEX_OPEN_TAG} {count(); return openisindex;}
	{ISINDEX_CLOSE_TAG} {count(); return closeisindex;}
	{KBD_OPEN_TAG} {count(); return openkbd;}
	{KBD_CLOSE_TAG} {count(); return closekbd;}
	{LABEL_OPEN_TAG} {count(); return openlabel;}
	{LABEL_CLOSE_TAG} {count(); return closelabel;} 
	{LEGEND_OPEN_TAG} {count(); return openlegend;}
	{LEGEND_CLOSE_TAG} {count();  return closelegend;}
	{LI_OPEN_TAG} {count(); return openli;}
	{LI_CLOSE_TAG} {count(); return closeli;}
	{LINK_OPEN_TAG} {count(); return openlink;}
	{LINK_CLOSE_TAG} {count(); return closelink;}
	{LISTING_OPEN_TAG} {count(); return openlisting;}
	{LISTING_CLOSE_TAG} {count(); return closelisting;}
	{MAP_OPEN_TAG} {count(); return openmap;}
	{MAP_CLOSE_TAG} {count(); return closemap;}
	{MENU_OPEN_TAG} {count(); return openmenu;} 
	{MENU_CLOSE_TAG} {count(); return closemenu;}
	{META_OPEN_TAG} {count(); return openmeta;}
	{META_CLOSE_TAG} {count(); return closemeta;} 
	{NEXTID_OPEN_TAG} {count(); return opennextid;}
	{NEXTID_CLOSE_TAG} {count(); return closenextid;}
	{NOFRAMES_OPEN_TAG} {count(); return opennoframes;}
	{NOFRAMES_CLOSE_TAG} {count(); return closenoframes;}
	{NOSCRIPT_OPEN_TAG} {count(); return opennoscript;}
	{NOSCRIPT_CLOSE_TAG} {count(); return closenoscript;} 
	{OBJECT_OPEN_TAG} {count(); return openobject;}
	{OBJECT_CLOSE_TAG} {count(); return closeobject;}
	{OL_OPEN_TAG } {count(); return openol;}
	{OL_CLOSE_TAG} {count(); return closeol;}
	{OPTGROUP_OPEN_TAG} {count(); return openoptgroup;}
	{OPTGROUP_CLOSE_TAG} {count(); return closeoptgroup;}
	{OPTION_OPEN_TAG} {count(); return openoption;}
	{OPTION_CLOSE_TAG} {count(); return closeoption;}
	{P_OPEN_TAG} {count(); return openp;}
	{P_CLOSE_TAG} {count(); return closep;}
	{PARAM_OPEN_TAG} {count(); return openparam;} 
	{PARAM_CLOSE_TAG} {count(); return closeparam;}
	{PLAINTEXT_OPEN_TAG} {count(); return openplaintext;}
	{PLAINTEXT_CLOSE_TAG} {count(); return closeplaintext;}
	{PRE_OPEN_TAG} {count(); return openpre; }
	{PRE_CLOSE_TAG} {count(); return closepre; }
	{Q_OPEN_TAG} {count(); return openq; }
	{Q_CLOSE_TAG} {count(); return closeq; }
	{S_OPEN_TAG} {count(); return sopen;}
	{S_CLOSE_TAG} {count(); return sclose; }
	{SAMP_OPEN_TAG} {count(); return sampopen; }
	{SAMP_CLOSE_TAG} {count(); return sampclose; }
	{SCRIPT_OPEN_TAG} {count(); return scriptopen; }
	{SCRIPT_CLOSE_TAG} {count(); return scriptclose; }
	{SELECT_OPEN_TAG} {count(); return selectopen; }
	{SELECT_CLOSE_TAG } {count(); return selectclose; }
	{SMALL_OPEN_TAG} {count(); return smallopen; }
	{SMALL_CLOSE_TAG} {count(); return smallclose; }
	{SPAN_OPEN_TAG} {count(); return spanopen; }
	{SPAN_CLOSE_TAG} {count(); return spanclose; }
	{STRIKE_OPEN_TAG} {count(); return strikeopen; }
	{STRIKE_CLOSE_TAG} {count(); return strikeclose; }
	{STRONG_OPEN_TAG} {count(); return (strongopen); }
	{STRONG_CLOSE_TAG} {count(); return strongclose; }
	{STYLE_OPEN_TAG} {count(); return styleopen; }
	{STYLE_CLOSE_TAG} {count(); return styleclose; }
	{SUB_OPEN_TAG} {count(); return subopen; }
	{SUB_CLOSE_TAG}  {count(); return subclose; }
	{SUP_OPEN_TAG}   {count(); return supopen; }
	{SUP_CLOSE_TAG}  {count(); return supclose; }
	{TABLE_OPEN_TAG} {count(); return tableopen; }
	{TABLE_CLOSE_TAG} {count(); return tableclose; }
	{TBODY_OPEN_TAG}  {count(); return tbodyopen; }
	{TBODY_CLOSE_TAG} {count(); return tbodyclose;}
	{TD_OPEN_TAG} {count(); return tdopen;}
	{TD_CLOSE_TAG} {count(); return tdclose;}
	{TEXTAREA_OPEN_TAG} {count(); return textareaopen; }
	{TEXTAREA_CLOSE_TAG} {count(); return textareaclose; }
	{TFOOT_OPEN_TAG} {count(); return tfootopen; }
	{TFOOT_CLOSE_TAG} {count(); return tfootclose; }
	{TH_OPEN_TAG} {count(); return thopen;}
	{TH_CLOSE_TAG} {count(); return thclose;}
	{THEAD_OPEN_TAG} {count(); return theadopen; }
	{THEAD_CLOSE_TAG} {count(); return theadclose;}
	{TITLE_OPEN_TAG} {count(); return titleopen; }
	{TITLE_CLOSE_TAG} {count(); return titleclose; }
	{TR_OPEN_TAG} {count(); return tropen; }
	{TR_CLOSE_TAG} {count(); return trclose;}
	{TT_OPEN_TAG} {count(); return ttopen; }
	{TT_CLOSE_TAG} {count(); return ttclose; }
	{U_OPEN_TAG} {count(); return uopen;}
	{U_CLOSE_TAG} {count(); return uclose;}
	{UL_OPEN_TAG} {count(); return ulopen;}
	{UL_CLOSE_TAG} {count(); return ulclose;}
	{VAR_OPEN_TAG} {count(); return varopen;}
	{VAR_CLOSE_TAG}  {count(); return varclose; }
	{XMP_OPEN_TAG} {count(); return xmpopen;}
	{XMP_CLOSE_TAG} {count(); return xmpclose;}


	{NAME} {count(); return NAME;} 
	{HREF} {count(); return HREF;} 
	{REL} {count(); return REL;} 
	{REV} {count(); return REV;} 
	{TITLE} {count(); return TITLE;}
	{URN} {count(); return URN;} 
	{METHODS} {count(); return METHODS;} 
	{SHAPE} {count(); return SHAPE;}
	{COORDS} {count(); return COORDS;}
	{ALT} {count(); return ALT;}
	{NOHREF} {count(); return NOHREF;}
	{SIZE} {count(); return SIZE;}
	{BGCOLOR} {count(); return BGCOLOR;}
	{BACKGROUND} {count(); return BACKGROUND;}
	{TEXT} {count(); return TEXT;}
	{LINK} {count(); return LINK;} 
	{VLINK} {count(); return VLINK;}
	{ALINK} {count(); return ALINK;}
	{CLEAR} {count(); return CLEAR;} 
	{COMPACT} {count(); return COMPACT;}
	{ALIGN} {count(); return ALIGN;} 
	{SIZE} {count(); return SIZE;}  
	{COLOR} {count(); return COLOR;}
	{ACTION}  {count(); return ACTION;}
	{ENCTYPE} {count(); return ENCTYPE;} 
	{WIDTH} {count(); return WIDTH;} 
	{NOSHADE} {count(); return NOSHADE;} 
	{VERSION} {count(); return VERSION;}
	{SRC} {count(); return SRC;} 
	{HEIGHT} {count(); return HEIGHT;}
	{VSPACE} {count(); return VSPACE;}
	{ALT} {count(); return ALT;}
	{BORDER} {count(); return BORDER;}
	{USEMAP} {count(); return USEMAP;}
	{ISMAP} {count(); return ISMAP;}
	{TYPE} {count(); return TYPE;}
	{MAXLENGTH} {count(); return MAXLENGTH;}
	{VALUE} {count(); return VALUE;}
	{CHECKED} {count(); return CHECKED;}
	{PROMPT} {count(); return PROMPT;}
	{URN} {count(); return URN;}
	{TITLE} {count(); return TITLE;}
	{ID} {count(); return ID;}
	{HTTP-EQUIV} {count(); return HTTP_EQUIV;}
	{CONTENT} {count(); return CONTENT;}
	{N} {count(); return N;}
	{START} {count(); return START;}
	{SELECTED} {count(); return SELECTED;}
	{MULTIPLE} {count(); return MULTIPLE;}
	{CELLSPACING} {count(); return CELLSPACING;}
	{CELLPADDING} {count(); return CELLPADDING;}
	{ROWSPAN} {count(); return ROWSPAN;}
	{COLSPAN} {count(); return COLSPAN;}
	{NOWRAP} {count(); return NOWRAP;}
%%

int yywrap()
{
	return 0;
}

int column = 0;

int count(){
    int i;

    for(i = 0; yytext[i] != '\0'; i++){
        if(yytext[i] == '\n')
            column = 0;
        else if (yytext[i] == '\t')
            column += 8 - (column % 8);
        else
            column ++;
    }
    ECHO;
}