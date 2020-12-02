// SimpleLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "ast.h"
//#include "symbols.h"
#include "htmlcompact.tab.h"
#include <errno.h>

extern FILE* yyin;
//extern int yylex(void);
extern int yyparse(void);
extern int yydebug;
extern Node* astRoot;

//const char* symbols[] = {
//"ENDTAG",  
//"ABBROPEN", 
//"ABBRCLOSE", 
//"ACRONYMOPEN", 
//"ACROBYMCLOSE", 
//"ADDRESSOPEN",
//"ADDRESSCLOSE", 
//"APPLETOPEN",
//"APPLETCLOSE", 
//"AREAOPEN", 
//"AREACLOSE", 
//"BASEOPEN", 
//"BASECLOSE", 
//"BASEFONTOPEN",
//"BASEFONTCLOSE", 
//"BDOOPEN", 
//"BDOCLOSE", 
//"BIGOPEN",
//"BIGCLOSE", 
//"BODYOPEN", 
//"BODYCLOSE", 
//"BLOCKQUOTEOPEN",
//"BLOCKQUOTECLOSE", 
//"BUTTONOPEN", 
//"BUTTONCLOSE", 
//"CAPTIONOPEN", 
//"CAPTIONCLOSE", 
//"CODEOPEN", 
//"CODECLOSE", 
//"COLOPEN", 
//"COLCLOSE", 
//"COLGROUPOPEN", 
//"COLGROUPCLOSE", 
//"DDOPEN", 
//"DDCLOSE", 
//"DELOPEN", 
//"DELCLOSE", 
//"DFNOPEN", 
//"DFNCLOSE", 
//"DIROPEN", 
//"DIRCLOSE", 
//"DIVOPEN",
//"DIVCLOSE", 
//"DLOPEN", 
//"DLCLOSE", 
//"DTOPEN", 
//"DTCLOSE", 
//"EMOPEN", 
//"EMCLOSE", 
//"FIELDSETOPEN", 
//"FIELDSETCLOSE", 
//"FRAMEOPEN", 
//"FRAMECLOSE", 
//"FRAMESETOPEN", 
//"FRAMESETCLOSE", 
//"NOFRAMESOPEN", 
//"NOFRAMESCLOSE", 
//"FORMOPEN", 
//"FORMCLOSE", 
//"HEADOPEN", 
//"HEADCLOSE", 
//"HNOPEN", 
//"HNCLOSE", 
//"HTMLOPEN", 
//"HTMLCLOSE", 
//"INPUTOPEN", 
//"INPUTCLOSE", 
//"IFRAMEOPEN", 
//"IFRAMECLOSE", 
//"INSOPEN", 
//"INSCLOSE", 
//"KBDOPEN", 
//"KBDCLOSE", 
//"LABELOPEN", 
//"LABELCLOSE", 
//"LEGENDOPEN", 
//"LEGENDCLOSE", 
//"LISTINGOPEN", 
//"LISTINGCLOSE", 
//"MAPOPEN", 
//"MAPCLOSE", 
//"MENUOPEN", 
//"MENUCLOSE", 
//"METAOPEN", 
//"METACLOSE", 
//"NEXTIDOPEN", 
//"NEXTIDCLOSE", 
//"NOSCRIPTOPEN", 
//"NOSCRIPTCLOSE",
//"SELECTOPEN", 
//"SELECTCLOSE", 
//"OPTIONOPEN", 
//"OPTIONCLOSE", 
//"OBJECTOPEN", 
//"OBJECTCLOSE", 
//"OPTGROUPOPEN", 
//"OPTGROUPCLOSE", 
//"PARAMOPEN", 
//"PARAMCLOSE", 
//"PLAINTEXTOPEN",
//"PLAINTEXTCLOSE", 
//"PREOPEN", 
//"PRECLOSE", 
//"QOPEN", 
//"QCLOSE", 
//"SOPEN", 
//"SCLOSE", 
//"SAMPOPEN", 
//"SAMPCLOSE", 
//"SCRIPTOPEN", 
//"SCRIPTCLOSE", 
//"SPANOPEN", 
//"SPANCLOSE", 
//"STRIKEOPEN", 
//"STRIKECLOSE", 
//"STRONGOPEN", 
//"STRONGCLOSE", 
//"STYLEOPEN", 
//"STYLECLOSE", 
//"TABLEOPEN", 
//"TABLECLOSE", 
//"TROPEN", 
//"TRCLOSE", 
//"TDOPEN", 
//"TDCLOSE", 
//"THOPEN", 
//"THCLOSE", 
//"THEADOPEN", 
//"THEADCLOSE", 
//"TBODYOPEN", 
//"TBODYCLOSE", 
//"TEXTAREAOPEN", 
//"TEXTAREACLOSE", 
//"TFOOTOPEN", 
//"TFOOTCLOSE", 
//"TITLEOPEN", 
//"TITLECLOSE", 
//"TTOPEN", 
//"TTCLOSE", 
//"IMGOPEN", 
//"IMGCLOSE", 
//"AOPEN", 
//"ACLOSE", 
//"LINKOPEN", 
//"LINKCLOSE", 
//"ULOPEN", 
//"ULCLOSE", 
//"LIOPEN", 
//"LICLOSE", 
//"OLOPEN", 
//"OLCLOSE", 
//"POPEN", 
//"PCLOSE", 
//"IOPEN", 
//"ICLOSE", 
//"UOPEN", 
//"UCLOSE", 
//"SMALLOPEN", 
//"SMALLCLOSE", 
//"SUPOPEN", 
//"SUPCLOSE", 
//"SUBOPEN", 
//"SUBCLOSE", 
//"CENTEROPEN", 
//"CENTERCLOSE",   
//"FONTOPEN", 
//"FONTCLOSE", 
//"HROPEN", 
//"HRCLOSE", 
//"BROPEN", 
//"BRCLOSE", 
//"NAME", 
//"HREF", 
//"REL", 
//"REV",
//"TITLE", 
//"URN", 
//"METHODS",  
//"SHAPE", 
//"COORDS", 
//"ALT", 
//"NOHREF", 
//"BGCOLOR", 
//"BACKGROUND", 
//"TEXT", 
//"LINK", 
//"VLINK", 
//"ALINK", 
//"CLEAR", 
//"COMPACT", 
//"ALIGN", 
//"SIZE", 
//"COLOR", 
//"ACTION", 
//"ENCTYPE", 
//"WIDTH", 
//"NOSHADE",
//"VERSION", 
//"SRC",
//"HEIGHT",
//"VSPACE", 
//"BORDER",
//"USEMAP",
//"ISMAP",
//"TYPE",
//"MAXLENGTH",
//"VALUE", 
//"CHECKED", 
//"PROMPT",
//"ID",
//"HTTP_EQUIV", 
//"CONTENT",
//"N", 
//"START", 
//"SELECTED", 
//"MULTIPLE", 
//"CELLSPACING", 
//"CELLPADDING", 
//"ROWSPAN",
//"COLSPAN",
//"NOWRAP",
//"END_OF_INSTRUCTION"
//"BOPEN"
//"BCLOSE"};

int main()
{

	//yydebug = 1;
	yyin = fopen("input.csrc", "rt");
	if (yyin != NULL)
	{
		int result = yyparse();
		switch (result)
		{
		case 0:
			printf("Parse successfull.\n");
			break;

		case 1:
			printf("Invalid input encountered\n");
			break;

		case 2:
			printf("Out of memory\n");
			break;

		default:
			break;
		}
		printAst(astRoot, 0);
		fclose(yyin);
	}
	else
	{
		printf("Fisier inexistent");
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
