/* TODO: TO BE COMPLETED */

#include "global.h"
#include "mycc.h"

struct Keyword
{	char *lexptr;
	int token;
};

static struct Keyword keywords[] =
{
/*	TODO: TO BE COMPLETED */
	{ "do",		DO },
	{ "else",	ELSE },
	{ "for",	FOR },
	{ "if",		IF },
	{ "return",	RETURN },
	{ "while",	WHILE },
	{ NULL }
};

/* init - populates global symbol table with keywords */
void init()
{
	struct Keyword *k;

	for (k = keywords; k->lexptr; k++)
		insert(k->lexptr, k->token);
}

