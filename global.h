#include "javaclass.h"
#include "bytecode.h"

struct Symbol
{
	char *lexptr;
	int  token;
	int  localvar;
};

typedef struct Symbol Symbol;

extern Symbol *lookup(char*);
extern Symbol *insert(char*, int);

extern void init();
extern void error();

extern int yylex();
extern int yyparse();
extern int yyerror(char*);

extern FILE *yyin;
extern int yylineno;

extern int errnum;
