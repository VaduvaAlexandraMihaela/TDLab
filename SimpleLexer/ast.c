#include "ast.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

Node* createDefaultNode(const char* nodeName, unsigned int linksCount)
{
	Node* retNode = (Node*)malloc(sizeof(Node));
	if (retNode)
	{
		memset(retNode, 0, sizeof(Node));
		if (nodeName)
		{
			strcpy(retNode->type, nodeName);
		}
		retNode->numLinks = linksCount;
		if (linksCount > 0)
		{
			retNode->links = (Node**)malloc(linksCount * sizeof(Node*));
		}
	}
	return retNode;
}

Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize)
{
	if (nodeToResize->numLinks == 0)
	{
		nodeToResize->links = (Node**)malloc(newSize*sizeof(Node*));		
	}
	else
	{
		nodeToResize->links = (Node**)realloc(nodeToResize->links, newSize * sizeof(Node*));
	}
	nodeToResize->numLinks = newSize;
	return nodeToResize;
}

Node* createListNode(const char* listName, Node* firstLink)
{
	Node* retNode = createDefaultNode(listName, 1);
	retNode->links[0] = firstLink;
	return retNode;
}
void addLinkToList(Node* listNode, Node* linkToAdd)
{
	unsigned int numLinks = listNode->numLinks;	
	resizeNodeLinks(listNode, numLinks + 1);
	listNode->links[numLinks] = linkToAdd;
}


Node* createHtmlDocumentNode(Node* tag)
{
	Node* retNode = createDefaultNode("HtmlDocument", 1);
	if (retNode)
	{
		retNode->links[0] = tag;
	}

	return retNode;
}

Node* createTagNode(const char* tagName, Node* tag_cont)
{
	Node* retNode = createDefaultNode(tagName, 1);
	if (retNode)
	{
		retNode->links[0] = tag_cont;
	}

	return retNode;
}

Node* createAttributeNode(const char* attributeName, Node* tag_cont)
{
	Node* retNode = createDefaultNode(attributeName, 1); 
	if (retNode)
	{
		retNode->links[0] = tag_cont; 
	}

	return retNode;
}

Node* createTagWithAttribute(const char* tagName, Node* attribute, Node* tag_cont)
{
	Node* retNode = createDefaultNode(tagName, 2);
	if (retNode)
	{
		retNode->links[0] = tag_cont;
		retNode->links[1] = attribute_list;
	}

	return retNode;
}

void printAst(Node* ast, int level)
{
	int idx = 0;
	if (ast)
	{
		for (idx = 0; idx < level; idx++)
		{
			printf(" ");
		}
		if (ast->type)
		{
			printf("%s ", ast->type);
		}
		if (ast->numLinks)
		{
			printf(" - %d - %s\n", ast->numLinks, ast->extraData);
		}
		else
		{
			printf(" - %s\n",  ast->extraData);
		}
		for (idx = 0; idx < ast->numLinks; idx++)
		{
			
			printAst(ast->links[idx], level + 1);			
		}
	}
}
