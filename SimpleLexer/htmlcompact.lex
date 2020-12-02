%{
#include <stdio.h>
#include "ast.h"
#include "htmlcompact.tab.h"

void count();
%}
alpha [a-zA-Z]
digit [0-9]

url [-a-zA-Z0-9@:%._\+~#=]{1,256}\.[a-zA-Z0-9()]{1,6}\b([-a-zA-Z0-9()@:%_\+.~#?&//=]*)
image [/img/ig]

abbr_open_tag 	 (?:<abbr>)
abbr_close_tag 	 (?:<\/abbr>)
acronym_open_tag (?:<acronym>)
acronym_close_tag (?:<\/acronym>)
address_open_tag (?:<address>)
address_close_tag (?:\/address)
applet_open_tag (?:<applet>)
applet_close_tag (?:<\/applet>)
area_open_tag 	(?:<area)
area_close_tag	 (?:<\/area>)
base_open_tag	 (?:<base)
base_close_tag	 (?:<\/base>)
basefont_open_tag (?:<basefont)
basefont_close_tag (?:<\/basefont>)
bdo_open_tag 	 (?:<bdo>)
bdo_close_tag 	 (?:<\/bdo>)
big_open_tag	 (?:<big>)
big_close_tag	 (?:<\/big>)
blockquote_open_tag (?:<blockquote>)
blockquote_close_tag (?:<\/blockquote>)
button_open_tag (?:<button>)
button_close_tag (?:<\/button>)
caption_open_tag (?:<caption>)
caption_close_tag (?:<\/caption>)
body_open		 (?:<body)
body_close       (?:<\/body>)
code_open_tag 	 (?:<code>)
code_close_tag 	 (?:<\/code>)
col_open_tag 	 (?:<col>)
col_close_tag 	 (?:<\/col>)
colgroup_open_tag (?:<colgroup>)
colgroup_close_tag (?:<\/colgroup>)
dd_open_tag 	 (?:<dd>)
dd_close_tag 	 (?:<\/dd>)
del_open_tag 	 (?:<del>)
del_close_tag 	 (?:<\/del>)
dfn_open_tag 	 (?:<dfn>)
dfn_close_tag 	 (?:<\/dfn>)
dir_open_tag 	 (?:<dir)
dir_close_tag 	 (?:<\/dir>)
div_open_tag 	 (?:<div)
div_close_tag 	 (?:<\/div>)
dl_open_tag 	 (?:<dl)
dl_close_tag 	 (?:<\/dl>)
dt_open_tag		 (?:<dt>)
dt_close_tag	 (?:<\/dt>)
em_open_tag 	 (?:<em>)
em_close_tag 	 (?:<\/em>)
fieldset_open_tag (?:<fieldset>)
fieldset_close_tag (?:<\/fieldset>)
frame_open       (?:<frame>)
frame_close      (?:<\/frame>)
frameset_open    (?:<frameset>)
frameset_close   (?:<\/frameset>)
noframes_open    (?:<noframes>)
noframes_close   (?:<>\/noframes)
form_open        (?:<form)
form_close       (?:<\/form>)
head_open_tag 	 (?:<head>)
head_close_tag 	 (?:<\/head>)
hn_open_tag 	 (?:<hn>)
hn_close_tag 	 (?:<\/hn>)
html_open_tag 	 (?:<html)
html_close_tag 	 (?:<\/html>)
input_open       (?:<input>)
input_close      (?:<\/input>)
iframe_open_tag  (?:<iframe>)
iframe_close_tag (?:<\/iframe>)
ins_open_tag 	 (?:<ins>)
ins_close_tag 	 (?:<\/ins>)
isindex_open_tag (?:<isindex>)
isindex_close_tag (?:<\/isindex>)
kbd_open_tag 	 (?:<kbd>)
kbd_close_tag 	 (?:<\/kbd>)
label_open_tag 	 (?:<label>)
label_close_tag  (?:<\/label>)
legend_open_tag  (?:<legend>)
legend_close_tag (?:<\/legend>)
listing_open_tag (?:<listing>)
listing_close_tag (?:<\/listing>)
map_open_tag 	 (?:<map)
map_close_tag 	 (?:<\/map>)
menu_open_tag 	 (?:<menu)
menu_close_tag 	 (?:<\/menu>)
meta_open_tag 	 (?:<meta>)
meta_close_tag 	 (?:<\/meta>)
nextid_open_tag  (?:<nextid>)
nextid_close_tag (?:<\/nextid>)
noscript_open_tag (?:<noscript>)
noscript_close_tag (?:<\/noscript>)
object_open_tag  (?:<object>)
object_close_tag (?:<\/object>)
optgroup_open_tag (?:<optgroup>)
optgroup_close_tag (?:<\/optgroup>)
param_open_tag 	 (?:<param>)
param_close_tag  (?:<\/param>)
plaintext_open_tag (?:<plaintext>)
plaintext_close_tag (?:<\/plaintext>)
pre_open_tag 	 (?:<pre)
pre_close_tag 	 (?:<\/pre>)
q_open_tag		 (?:<q>)
q_close_tag 	 (?:<\/q>)
s_open_tag 		 (?:<s>)
s_close_tag 	 (?:<\/s>)
samp_open_tag 	 (?:<samp>)
samp_close_tag   (?:<\/samp>)
script_open_tag  (?:<script>)
script_close_tag (?:<\/script>)
span_open_tag 	 (?:<span>)
span_close_tag   (?:<\/span>)
strike_open_tag  (?:<strike>)
strike_close_tag (?:<\/strike>)
strong_open_tag  (?:<strong>)
strong_close_tag (?:<\/strong>)
style_open_tag   (?:<style>)
style_close_tag  (?:<\/style>)
select_open      (?:<select>)
select_close     (?:<\/select>)
option_open      (?:<option)
option_close     (?:<\/option>)
table_open       (?:<table)
table_close      (?:<\/table>)
tr_open          (?:<tr)
tr_close         (?:<\/tr>)
td_open          (?:<td)
td_close         (?:<\/td>)
th_open          (?:<th)
th_close         (?:<\/th>)
thead_open       (?:<thead>)
thead_close      (?:<\/thead>)
tbody_open       (?:<tbody>)
tbody_close      (?:<\/tbody>)
textarea_open_tag (?:<textarea>)
textarea_close_tag (?:<\/textarea>)
tfoot_open_tag 	 (?:<tfoot>)
tfoot_close_tag  (?:<\/tfoot>)
title_open_tag 	 (?:<title>)
title_close_tag  (?:<\/title>)
tt_open_tag 	 (?:<tt>)
tt_close_tag 	 (?:<\/tt>)
img_open         (?:<img>)
img_close        (?:<\/img>)
a_open           (?:<a)
a_close          (?:<\/a>)
link_open        (?:<link>)
link_close       (?:<\/link>)
ul_open          (?:<ul>)
ul_close         (?:<\/ul>)
li_open          (?:<li)
li_close         (?:<\/li>)
ol_open          (?:<ol)
ol_close         (?:<\/ol>)
b_open           (?:<b>)
b_close          (?:<\/b>)
i_open           (?:<i>)
i_close          (?:<\/i>)
u_open           (?:<u>)
u_close          (?:<\/u>)
small_open       (?:<small>)
small_close      (?:<\/small>)
sup_open         (?:<sup>)
sup_close        (?:<\/sup>)
sub_open         (?:<sub>)
sub_close        (?:<\/sub>)
center_open      (?:<center>)
center_close     (?:<\/center>)
font_open        (?:<font)
font_close       (?:<\/font>)
var_open_tag 	 (?:<var>)
var_close_tag 	 (?:<\/var>)
xmp_open_tag 	 (?:<xmp>)
xmp_close_tag 	 (?:<\/xmp>)
hr_open          (?:<hr)
hr_close         (?:<\/hr>)
p_open           (?:<p)
p_close          (?:<\/p>)
br_open          (?:<br)
br_close         (?:<\/br>)


NAME 			(?i:name=\"[^\"]*\")
HREF 			(?i:href=\"[^\"]*\")
REL 			(?i:rel=\"[^\"]*\")
REV 			(?i:rev=\"[^\"]*\")
TITLE 			(?:title=\"[^\"]*\")
URN 			(?i:urn=\"[^\"]*\")
METHODS 		(?i:methods=\"[^\"]*\")
SHAPE 			(?i:shape=\"[^\"]*\")
COORDS 			(?i:coords=\"[^\"]*\")
ALT 			(?i:alt=\"[^\"]*\")
NOHREF 			(?i:nohref)
SIZE 			(?i:size=\"[^\"]*\")
BGCOLOR 		(?i:bgcolor=\"[^\"]*\")
BACKGROUND 		(?i:background=\"[^\"]*\")
BORDER 			(?i:border=\"[^\"]*\")
ID 				(?i:id=\"[^\"]*\")
TEXT 			(?i:text=\"[^\"]*\")
LINK 			(?i:link=\"[^\"]*\")
VLINK 			(?i:vlink=\"[^\"]*\")
ALINK 			(?i:alink=\"[^\"]*\")
CLEAR 			(?i:clear=(all|left|right))
COMPACT 		(?i:compact)
ALIGN 			(?i:align=(left|center|right|left|right))
COLOR 			(?i:color=\"[^\"]*\")
ACTION 			(?i:action=\"[^\"]*\")
ENCTYPE 		(?i:enctype=\"[^\"]*\")
WIDTH 			(?i:width=\"[^\"]*\")
NOSHADE 		(?i:noshade)
VERSION 		(?i:version=\"[^\"]*\")
SRC 			(?i:src=\"[^\"]*\")
HEIGHT 			(?i:height=\"[^\"]*\")
VSPACE 			(?i:vspace=\"[^\"]*\")
USEMAP 			(?i:usemap=\"[^\"]*\")
ISMAP 			(?i:ismap=\"[^\"]*\")
TYPE 			(?i:type=\"[^\"]*\")
MAXLENGTH 		(?i:maxlength=\"[^\"]*\")
VALUE 			(?i:value=\"[^\"]*\")
CHECKED 		(?i:checked)
PROMPT 			(?i:prompt=\"[^\"]*\")
HTTP-EQUIV 		(?i:http-equiv=\"[^\"]*\")
N 				(?i:n=\"[^\"]*\")
START 			(?i:start=\"[^\"]*\")
SELECTED 		(?i:selected)
MULTIPLE 		(?i:multiple)
CELLSPACING 	(?i:cellspacing=\"[^\"]*\")
CELLPADDING 	(?i:cellpadding=\"[^\"]*\")
ROWSPAN 		(?i:rowspan=\"[^\"]*\")
COLSPAN 		(?i:colspan=\"[^\"]*\")
NOWRAP 			(?i:nowrap)
CONTENT 		(?i:([A-Za-z_\-0-9])+)
VALIGN			(?i:(top|middle|bottom|baseline))


%%
"@**@"			      { comment(); }
">"   {count(); return(ENDTAG); }  

{VALIGN}			{count(); return(VALIGN); }
{abbr_open_tag}		{count(); return(ABBROPEN); }
{abbr_close_tag}	{count(); return(ABBRCLOSE); }
{acronym_open_tag}	{count(); return (ACRONYMOPEN); }
{acronym_close_tag}	{count(); return (ACRONYMCLOSE); }
{address_open_tag}	{count(); return (ADDRESSOPEN); }
{address_close_tag}	{count(); return (ADDRESSCLOSE); }
{applet_open_tag}	{count(); return (APPLETOPEN); }
{applet_close_tag}	{count(); return (APPLETCLOSE); }
{area_open_tag}		{count(); return (AREAOPEN); }
{area_close_tag}	{count(); return (AREACLOSE); }
{base_open_tag}		{count(); return (BASEOPEN);}
{base_close_tag}	{count(); return (BASECLOSE); }
{basefont_open_tag}	{count(); return (BASEFONTOPEN); }
{basefont_close_tag} {count(); return (BASEFONTCLOSE); }
{bdo_open_tag}		{count(); return (BDOOPEN); }
{bdo_close_tag}		{count(); return (BDOCLOSE); }
{big_open_tag}		{count(); return (BIGOPEN); }
{big_close_tag}		{count(); return (BIGCLOSE); }
{body_open}         {count(); return (BODYOPEN); }
{body_close}        {count(); return (BODYCLOSE); }
{blockquote_open_tag} {count(); return (BLOCKQUOTEOPEN); }
{blockquote_close_tag} {count(); return (BLOCKQUOTECLOSE); }
{button_open_tag}	{count(); return (BUTTONOPEN); }
{button_close_tag}	{count(); return (BUTTONCLOSE); }
{caption_open_tag}	{count(); return (CAPTIONOPEN); }
{caption_close_tag}	{count(); return (CAPTIONCLOSE); }
{code_open_tag}		{count(); return (CODEOPEN); }
{code_close_tag}	{count(); return (CODECLOSE); }
{col_open_tag}		{count(); return (COLOPEN); }
{col_close_tag}		{count(); return (COLCLOSE); }
{colgroup_open_tag} {count(); return (COLGROUPOPEN); }
{colgroup_close_tag} {count(); return (COLGROUPCLOSE); }
{dd_open_tag}		{count(); return (DDOPEN); }
{dd_close_tag}		{count(); return (DDCLOSE); }
{del_open_tag}		{count(); return (DELOPEN); }
{del_close_tag}		{count(); return (DELCLOSE); }
{dfn_open_tag}		{count(); return (DFNOPEN); }
{dfn_close_tag}		{count(); return (DFNCLOSE); }
{dir_open_tag}		{count(); return (DIROPEN); }
{dir_close_tag}		{count(); return (DIRCLOSE); }
{div_open_tag}		{count(); return (DIVOPEN); }
{div_close_tag}		{count(); return (DIVCLOSE); }
{dl_open_tag}		{count(); return (DLOPEN); }
{dl_close_tag}		{count(); return (DLCLOSE); }
{dt_open_tag}		{count(); return (DTOPEN); }
{dt_close_tag}		{count(); return (DTCLOSE); }
{em_open_tag}		{count(); return (EMOPEN); }
{em_close_tag}		{count(); return (EMCLOSE); }
{fieldset_open_tag}	{count(); return (FIELDSETOPEN); }
{fieldset_close_tag} {count(); return (FIELDSETCLOSE); }
{frame_open}        {count(); return (FRAMEOPEN); }
{frame_close}       {count(); return (FRAMECLOSE); }
{frameset_open}     {count(); return (FRAMESETOPEN); }
{frameset_close}    {count(); return (FRAMESETCLOSE); }
{noframes_open}     {count(); return (NOFRAMESOPEN); }
{noframes_close}    {count(); return (NOFRAMESCLOSE); }
{form_open}         {count(); return (FORMOPEN); }
{form_close}        {count(); return (FORMCLOSE); }
{head_open_tag}		{count(); return (HEADOPEN); }
{head_close_tag}	{count(); return (HEADCLOSE); }
{hn_open_tag}		{count(); return (HNOPEN); }
{hn_close_tag}		{count(); return (HNCLOSE); }
{html_open_tag}		{count(); return (HTMLOPEN); }
{html_close_tag}	{count(); return (HTMLCLOSE); }
{input_open}        {count(); return (INPUTOPEN); }
{input_close}       {count(); return (INPUTCLOSE); }
{iframe_open_tag}	{count(); return (IFRAMEOPEN); }
{iframe_close_tag}	{count(); return (IFRAMECLOSE); }
{ins_open_tag}		{count(); return (INSOPEN); }
{ins_close_tag}		{count(); return (INSCLOSE); }
{kbd_open_tag}		{count(); return (KBDOPEN); }
{kbd_close_tag}		{count(); return (KBDCLOSE); }
{label_open_tag}	{count(); return (LABELOPEN); }
{label_close_tag}	{count(); return (LABELCLOSE); }
{legend_open_tag}	{count(); return (LEGENDOPEN); }
{legend_close_tag}	{count(); return (LEGENDCLOSE); }
{listing_open_tag}	{count(); return (LISTINGOPEN); }
{listing_close_tag}	{count(); return (LISTINGCLOSE); }
{map_open_tag}		{count(); return (MAPOPEN); }
{map_close_tag}		{count(); return (MAPCLOSE); }
{menu_open_tag}		{count(); return (MENUOPEN); }
{menu_close_tag}	{count(); return (MENUCLOSE); }
{meta_open_tag}		{count(); return (METAOPEN); }
{meta_close_tag}	{count(); return (METACLOSE); }
{nextid_open_tag}	{count(); return (NEXTIDOPEN);}
{nextid_close_tag}	{count(); return (NEXTIDCLOSE); }
{noscript_open_tag}	{count(); return (NOSCRIPTOPEN); }
{noscript_close_tag} {count(); return (NOSCRIPTCLOSE); }
{select_open}       {count(); return (SELECTOPEN); }
{select_close}      {count(); return (SELECTCLOSE); }
{option_open}       {count(); return (OPTIONOPEN); }
{option_close}      {count(); return (OPTIONCLOSE); }
{object_open_tag}	{count(); return (OBJECTOPEN); }
{object_close_tag}	{count(); return (OBJECTCLOSE); }
{optgroup_open_tag}	{count(); return (OPTGROUPOPEN); }
{optgroup_close_tag} {count(); return (OPTGROUPCLOSE); }
{param_open_tag}	{count(); return (PARAMOPEN); }
{param_close_tag}	{count(); return (PARAMCLOSE); }
{plaintext_open_tag} {count(); return (PLAINTEXTOPEN); }
{plaintext_close_tag} {count(); return (PLAINTEXTCLOSE); }
{pre_open_tag}		{count(); return (PREOPEN); }
{pre_close_tag}		{count(); return (PRECLOSE); }
{q_open_tag}		{count(); return (QOPEN);}
{q_close_tag}		{count(); return (QCLOSE); }
{s_open_tag}		{count(); return (SOPEN); }
{s_close_tag}		{count(); return (SCLOSE); }
{samp_open_tag}		{count(); return (SAMPOPEN); }
{samp_close_tag}	{count(); return (SAMPCLOSE); }
{script_open_tag}	{count(); return (SCRIPTOPEN); }
{script_close_tag}	{count(); return (SCRIPTCLOSE); }
{span_open_tag}		{count(); return (SPANOPEN); }
{span_close_tag}	{count(); return (SPANCLOSE); }
{strike_open_tag}	{count(); return (STRIKEOPEN); }
{strike_close_tag}	{count(); return (STRIKECLOSE); }
{strong_open_tag}	{count(); return (STRONGOPEN); }
{strong_close_tag}	{count(); return (STRONGCLOSE); }
{style_open_tag}	{count(); return (STYLEOPEN); }
{style_close_tag}	{count(); return (STYLECLOSE); }
{table_open}        {count(); return (TABLEOPEN); }
{table_close}       {count(); return (TABLECLOSE); }
{tr_open}           {count(); return (TROPEN); }
{tr_close}          {count(); return (TRCLOSE); }
{td_open}           {count(); return (TDOPEN); }
{td_close}          {count(); return (TDCLOSE); }
{th_open}           {count(); return (THOPEN); }
{th_close}          {count(); return (THCLOSE); }
{thead_open}        {count(); return (THEADOPEN); }
{thead_close}       {count(); return (THEADCLOSE); }
{tbody_open}        {count(); return (TBODYOPEN); }
{tbody_close}       {count(); return (TBODYCLOSE); }
{textarea_open_tag}	{count(); return (TEXTAREAOPEN); }
{textarea_close_tag} {count(); return (TEXTAREACLOSE); }
{tfoot_open_tag}	{count(); return (TFOOTOPEN); }
{tfoot_close_tag}	{count(); return (TFOOTCLOSE); }
{title_open_tag}	{count(); return (TITLEOPEN); }
{title_close_tag}	{count(); return (TITLECLOSE); }
{tt_open_tag}		{count(); return (TTOPEN); }
{tt_close_tag}		{count(); return (TTCLOSE); }
{img_open}          {count(); return (IMGOPEN); }
{img_close}          {count(); return (IMGCLOSE); }
{a_open}            {count(); return (AOPEN); }
{a_close}           {count(); return(ACLOSE); }
{link_open}         {count(); return(LINKOPEN); }
{link_close}        {count(); return(LINKCLOSE); }
{ul_open}           {count(); return(ULOPEN); }
{ul_close}          {count(); return(ULCLOSE); }
{li_open}           {count(); return(LIOPEN); }
{li_close}          {count(); return(LICLOSE);}
{ol_open}           {count(); return(OLOPEN); }
{ol_close}          {count(); return(OLCLOSE); }
{b_open}            {count(); return(BOPEN); }
{b_close}           {count(); return(BCLOSE); }
{i_open}            {count(); return(IOPEN); }
{i_close}           {count(); return(ICLOSE); }
{u_open}            {count(); return(UOPEN); }
{u_close}           {count(); return(UCLOSE);}
{small_open}        {count(); return(SMALLOPEN); }
{small_close}       {count(); return(SMALLCLOSE); }
{sup_open}          {count(); return(SUPOPEN); }
{sup_close}         {count(); return(SUPCLOSE); }
{sub_open}          {count(); return(SUBOPEN);}
{sub_close}         {count(); return(SUBCLOSE); }
{center_open}       {count(); return(CENTEROPEN); }
{center_close}      {count(); return(CENTERCLOSE); }     
{font_open}         {count(); return(FONTOPEN); }
{font_close}        {count(); return(FONTCLOSE); }
{hr_open}           {count(); return(HROPEN); }
{hr_close}          {count(); return(HRCLOSE); }
{p_open}            {count(); return(POPEN); }
{p_close}           {count(); return(PCLOSE); }
{br_open}           {count(); return(BROPEN); }
{br_close}          {count(); return(BRCLOSE); }
{NAME} 			{count(); return (NAME); } 
{HREF} 			{count(); return (HREF); } 
{REL} 			{count(); return (REL); } 
{REV} 			{count(); return (REV); } 
{TITLE} 		{count(); return (TITLE); }
{URN} 			{count(); return (URN); } 
{METHODS} 		{count(); return (METHODS); } 
{SHAPE} 		{count(); return (SHAPE); }
{COORDS} 		{count(); return (COORDS); }
{ALT} 			{count(); return (ALT); }
{NOHREF} 		{count(); return (NOHREF); }
{BGCOLOR} 		{count(); return (BGCOLOR); }
{BACKGROUND} 	{count(); return (BACKGROUND); }
{TEXT} 			{count(); return (TEXT); }
{LINK} 			{count(); return (LINK); } 
{VLINK} 		{count(); return (VLINK); }
{ALINK} 		{count(); return (ALINK); }
{CLEAR} 		{count(); return (CLEAR); } 
{COMPACT} 		{count(); return (COMPACT); }
{ALIGN} 		{count(); return (ALIGN); } 
{SIZE} 			{count(); return (SIZE); }  
{COLOR} 		{count(); return (COLOR); }
{ACTION}  		{count(); return (ACTION); }
{ENCTYPE} 		{count(); return (ENCTYPE); } 
{WIDTH} 		{count(); return (WIDTH); } 
{NOSHADE} 		{count(); return (NOSHADE); } 
{VERSION} 		{count(); return (VERSION); }
{SRC} 			{count(); return (SRC); } 
{HEIGHT} 		{count(); return (HEIGHT); }
{VSPACE} 		{count(); return (VSPACE); }
{BORDER} 		{count(); return (BORDER); }
{USEMAP} 		{count(); return (USEMAP); }
{ISMAP} 		{count(); return (ISMAP); }
{TYPE} 			{count(); return (TYPE); }
{MAXLENGTH} 	{count(); return (MAXLENGTH); }
{VALUE} 		{count(); return (VALUE); }
{CHECKED} 		{count(); return (CHECKED); }
{PROMPT} 		{count(); return (PROMPT); }
{ID} 			{count(); return (ID); }
{HTTP-EQUIV} 	{count(); return (HTTP_EQUIV); }
{CONTENT} 		{count(); return (CONTENT); }
{N} 			{count(); return (N); }
{START} 		{count(); return (START); }
{SELECTED} 		{count(); return (SELECTED); }
{MULTIPLE} 		{count(); return (MULTIPLE); }
{CELLSPACING} 	{count(); return (CELLSPACING); }
{CELLPADDING} 	{count(); return (CELLPADDING); }
{ROWSPAN} 		{count(); return (ROWSPAN); }
{COLSPAN} 		{count(); return (COLSPAN); }
{NOWRAP} 		{count(); return (NOWRAP); }



[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}
int check_type()
{

return(IDENTIFIER);

}
