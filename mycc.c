#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20050813

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 4 "mycc.y"
#include "global.h"
static struct ClassFile cf;
#line 9 "mycc.y"
typedef union
{ 
  Symbol *sym;  /* token value yylval.sym is the symbol table entry of an ID */
  unsigned num; /* token value yylval.num is the value of an int constant */
  float flt;    /* token value yylval.flt is the value of a float constant */
  char *str;    /* token value yylval.str is the value of a string constant */
  unsigned loc; /* location of instruction to backpatch */
} YYSTYPE;
#line 34 "mycc.c"
#define ID 257
#define INT8 258
#define INT16 259
#define INT32 260
#define FLT 261
#define STR 262
#define DO 263
#define ELSE 264
#define FOR 265
#define IF 266
#define RETURN 267
#define WHILE 268
#define PA 269
#define NA 270
#define TA 271
#define DA 272
#define MA 273
#define AA 274
#define XA 275
#define OA 276
#define LA 277
#define RA 278
#define OR 279
#define AN 280
#define EQ 281
#define NE 282
#define LE 283
#define GE 284
#define LS 285
#define RS 286
#define AR 287
#define PP 288
#define NN 289
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    4,    4,    4,    4,    4,    4,    4,    4,
    4,    4,    5,    5,    5,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    1,    2,    3,
};
short yylen[] = {                                         2,
    2,    0,    1,    2,   11,    7,    9,   11,   17,    3,
    3,    2,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    2,    2,    2,    2,    3,    2,    2,    2,    2,
    2,    1,    1,    1,    1,    1,    1,    0,    0,    0,
};
short yydefred[] = {                                      2,
    0,    0,    0,   53,   54,   55,   56,   57,   58,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    3,    0,
    2,    0,    0,    1,    0,   12,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   50,   51,    0,    0,
    0,    0,    0,   58,   48,   49,    0,    0,    0,    0,
    0,    0,   47,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    4,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   10,    0,   46,   11,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   58,
    0,    0,    0,    0,    0,    0,    0,    0,   58,    0,
   60,   60,    6,    0,   60,   58,    0,   58,   58,    0,
   58,    0,    7,    0,    0,   58,    8,    0,    5,    0,
   58,    0,   60,   58,    9,
};
short yydgoto[] = {                                       1,
   40,  111,  124,   24,   25,
};
short yysindex[] = {                                      0,
  -20,  -57,  215,    0,    0,    0,    0,    0,    0,  -35,
  -34,    1,  -32, -248, -219,    1,    1,    1,    0,    1,
    0,    1, -218,    0,   24,    0,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    0,    0,    1,  -20,
    1,    1,   57,    0,    0,    0,   71,   71,   71,   83,
  -33,  125,    0,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    0,    1,    1,
    1,    1,  125,  125,  125,  125,  125,  125,  125,  125,
  125,  125,  125, -226,   97,  125,    0,    1,    0,    0,
  240,  156,  125,  125,  125,  125,  125,  125,  156,  240,
  352,  352,   71,   71,  125,  125,  125,  125,    3,    0,
   12,  125,    1,    1,  -20,   16,  125,  125,    0,  -20,
    0,    0,    0, -196,    0,    0,   15,    0,    0,   35,
    0,  -20,    0,   19,    1,    0,    0,  125,    0,   38,
    0,  -20,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,   13,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -14,  273,  375,    0,
    0,  -40,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -37,  -24,  -11,    6,   18,   22,   23,   39,
   46,   70,   73,    0,    0,   44,    0,    0,    0,    0,
  -27,  -23,   95,  105,  114,  117,  119,  120,   11,   50,
  415,  424,  385,  407,  141,  143,  145,  147,    0,    0,
    0,   44,    0,    0,    0,    0,   44,   30,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   74,    0,    0,
    0,    0,    0,    0,    0,
};
short yygindex[] = {                                     91,
  531,   77,   28,  -19,  538,
};
#define YYTABLESIZE 704
short yytable[] = {                                      18,
   43,   26,   23,   14,   41,   42,   20,   44,   45,   16,
   24,   17,   18,   24,   25,   23,   15,   25,   43,   20,
   84,   14,   16,   44,   17,   19,   44,   44,   44,   16,
   44,   24,   44,   18,   15,   25,   23,   46,   19,   53,
   20,  109,  113,   16,   44,   17,   17,   16,   28,   52,
   52,   28,  115,   52,   52,   52,  120,   52,   18,   52,
   72,   62,   19,   20,   17,   66,   64,  128,   65,   28,
   67,   52,   52,  131,   52,  134,   18,  137,  141,   21,
   19,   20,   68,   70,   59,   71,   22,   26,   59,   21,
   26,   90,   22,   72,   62,  119,   24,   21,   66,   64,
  125,   65,   21,   67,   22,   22,   52,   72,   26,   44,
   23,   51,  136,   13,   60,   87,   70,   69,   71,   72,
   62,    0,  143,   89,   66,   64,   22,   65,   23,   67,
   70,   13,   71,   72,   62,   29,   52,    0,   66,   64,
    0,   65,   70,   67,   71,   30,    0,   63,  126,  127,
   69,    0,  129,   29,   33,  110,   70,   34,   71,   35,
   36,   72,   62,   30,   69,  140,   66,   64,    0,   65,
  144,   67,   33,   26,    0,   34,   69,   35,   36,    0,
   63,   27,    0,   31,   70,   32,   71,   41,  116,    0,
   69,    0,   72,  121,  122,    0,    0,   66,   64,   27,
   65,   31,   67,   32,    0,   41,   63,    0,    0,    0,
    0,    0,    0,    0,    0,   70,    0,   71,   69,    0,
   63,    0,    2,    3,    4,    5,    6,    7,    8,    9,
    0,   10,   11,   12,   13,    2,    3,    4,    5,    6,
    7,    8,    9,    0,   10,   11,   12,   13,   63,   69,
    0,   24,   24,    0,   14,   15,   25,    3,    4,    5,
    6,    7,    8,    0,   44,   44,    0,   14,   15,    0,
    0,    0,    0,    0,    0,   39,   72,    0,    0,   63,
    0,   66,   64,    0,   65,    0,   67,    0,   14,   15,
   28,   52,   52,   52,   52,   52,   52,   52,   52,   70,
    0,   71,   54,   55,   56,   57,   58,   59,   60,   61,
   45,    0,    0,   45,   45,   45,    0,   45,    0,   45,
    0,    0,    0,    0,    0,    0,    0,    0,   26,   26,
    0,   45,    0,   69,    0,   54,   55,   56,   57,   58,
   59,   60,   61,    0,    0,    0,    0,    0,    0,    0,
    0,   56,   57,   58,   59,   60,   61,    0,    0,    0,
    0,   54,   55,   56,   57,   58,   59,   60,   61,    0,
    0,    0,    0,    0,    0,   54,   55,   56,   57,   58,
   59,   60,   61,    0,    0,    0,    0,    0,   72,    0,
    0,    0,    0,   66,    0,    0,   45,    0,   67,    0,
    0,    0,    0,   54,   55,   56,   57,   58,   59,   60,
   61,   70,   42,   71,    0,   42,   42,   42,    0,   42,
    0,   42,   39,    0,    0,   39,   39,   39,    0,   39,
    0,   39,    0,   42,   54,    0,   56,   57,   58,   59,
   60,   61,    0,   39,   40,   69,    0,   40,   40,   40,
    0,   40,   37,   40,    0,   37,    0,   37,    0,   37,
    0,   38,    0,    0,   38,   40,   38,    0,   38,    0,
    0,    0,    0,   37,    0,    0,    0,    0,    0,    0,
    0,    0,   38,   27,   28,   29,   30,   31,   32,   33,
   34,   35,   36,    0,    0,    0,    0,    0,   42,    0,
    0,    0,   37,   38,    0,    0,    0,    0,   39,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   56,   57,   58,   59,   60,   61,    0,    0,    0,    0,
   40,    0,    0,    0,    0,    0,    0,    0,   37,    0,
    0,    0,    0,    0,    0,    0,    0,   38,    0,   43,
    0,   45,   45,   47,   48,   49,    0,   50,    0,   52,
    0,    0,    0,    0,   73,   74,   75,   76,   77,   78,
   79,   80,   81,   82,   88,    0,   83,    0,   85,   86,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   91,   92,   93,   94,   95,   96,   97,   98,   99,
  100,  101,  102,  103,  104,    0,  105,  106,  107,  108,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  112,    0,    0,    0,    0,
    0,    0,   56,   57,   58,   59,   60,   61,    0,    0,
  114,    0,    0,    0,    0,    0,    0,    0,    0,  123,
  117,  118,    0,   42,   42,    0,  130,    0,  132,  133,
    0,  135,    0,   39,   39,    0,  139,    0,    0,    0,
    0,  142,  138,    0,  145,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   40,   40,    0,    0,    0,
    0,    0,    0,   37,   37,    0,    0,    0,    0,    0,
    0,    0,   38,   38,
};
short yycheck[] = {                                      33,
   41,   59,   36,   41,   40,   40,   40,   40,  257,   43,
   38,   45,   33,   41,   38,   36,   41,   41,   59,   40,
   40,   59,   43,   38,   45,   59,   41,   42,   43,   41,
   45,   59,   47,   33,   59,   59,   36,  257,   59,  258,
   40,  268,   40,   43,   59,   45,   41,   59,   38,   37,
   38,   41,   41,   41,   42,   43,   41,   45,   41,   47,
   37,   38,   41,   41,   59,   42,   43,  264,   45,   59,
   47,   59,   60,   59,   62,   41,   59,   59,   41,   41,
   59,   59,   59,   60,   41,   62,   41,   38,   59,  123,
   41,  125,  126,   37,   38,  115,  124,   59,   42,   43,
  120,   45,  123,   47,   59,  126,   94,   37,   59,  124,
   41,   21,  132,   41,   41,   59,   60,   94,   62,   37,
   38,   -1,  142,   41,   42,   43,  126,   45,   59,   47,
   60,   59,   62,   37,   38,   41,  124,   -1,   42,   43,
   -1,   45,   60,   47,   62,   41,   -1,  124,  121,  122,
   94,   -1,  125,   59,   41,   59,   60,   41,   62,   41,
   41,   37,   38,   59,   94,  138,   42,   43,   -1,   45,
  143,   47,   59,  124,   -1,   59,   94,   59,   59,   -1,
  124,   41,   -1,   41,   60,   41,   62,   41,  112,   -1,
   94,   -1,   37,  117,  118,   -1,   -1,   42,   43,   59,
   45,   59,   47,   59,   -1,   59,  124,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   60,   -1,   62,   94,   -1,
  124,   -1,  256,  257,  258,  259,  260,  261,  262,  263,
   -1,  265,  266,  267,  268,  256,  257,  258,  259,  260,
  261,  262,  263,   -1,  265,  266,  267,  268,  124,   94,
   -1,  279,  280,   -1,  288,  289,  280,  257,  258,  259,
  260,  261,  262,   -1,  279,  280,   -1,  288,  289,   -1,
   -1,   -1,   -1,   -1,   -1,   61,   37,   -1,   -1,  124,
   -1,   42,   43,   -1,   45,   -1,   47,   -1,  288,  289,
  280,  279,  280,  281,  282,  283,  284,  285,  286,   60,
   -1,   62,  279,  280,  281,  282,  283,  284,  285,  286,
   38,   -1,   -1,   41,   42,   43,   -1,   45,   -1,   47,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  279,  280,
   -1,   59,   -1,   94,   -1,  279,  280,  281,  282,  283,
  284,  285,  286,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  281,  282,  283,  284,  285,  286,   -1,   -1,   -1,
   -1,  279,  280,  281,  282,  283,  284,  285,  286,   -1,
   -1,   -1,   -1,   -1,   -1,  279,  280,  281,  282,  283,
  284,  285,  286,   -1,   -1,   -1,   -1,   -1,   37,   -1,
   -1,   -1,   -1,   42,   -1,   -1,  124,   -1,   47,   -1,
   -1,   -1,   -1,  279,  280,  281,  282,  283,  284,  285,
  286,   60,   38,   62,   -1,   41,   42,   43,   -1,   45,
   -1,   47,   38,   -1,   -1,   41,   42,   43,   -1,   45,
   -1,   47,   -1,   59,  279,   -1,  281,  282,  283,  284,
  285,  286,   -1,   59,   38,   94,   -1,   41,   42,   43,
   -1,   45,   38,   47,   -1,   41,   -1,   43,   -1,   45,
   -1,   38,   -1,   -1,   41,   59,   43,   -1,   45,   -1,
   -1,   -1,   -1,   59,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   59,  269,  270,  271,  272,  273,  274,  275,
  276,  277,  278,   -1,   -1,   -1,   -1,   -1,  124,   -1,
   -1,   -1,  288,  289,   -1,   -1,   -1,   -1,  124,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  281,  282,  283,  284,  285,  286,   -1,   -1,   -1,   -1,
  124,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  124,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  124,   -1,   12,
   -1,  279,  280,   16,   17,   18,   -1,   20,   -1,   22,
   -1,   -1,   -1,   -1,   27,   28,   29,   30,   31,   32,
   33,   34,   35,   36,   44,   -1,   39,   -1,   41,   42,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   54,   55,   56,   57,   58,   59,   60,   61,   62,
   63,   64,   65,   66,   67,   -1,   69,   70,   71,   72,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   88,   -1,   -1,   -1,   -1,
   -1,   -1,  281,  282,  283,  284,  285,  286,   -1,   -1,
  110,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  119,
  113,  114,   -1,  279,  280,   -1,  126,   -1,  128,  129,
   -1,  131,   -1,  279,  280,   -1,  136,   -1,   -1,   -1,
   -1,  141,  135,   -1,  144,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  279,  280,   -1,   -1,   -1,
   -1,   -1,   -1,  279,  280,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  279,  280,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 289
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,"'$'","'%'","'&'",0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,
0,0,0,0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'","'|'","'}'","'~'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","INT8","INT16","INT32","FLT",
"STR","DO","ELSE","FOR","IF","RETURN","WHILE","PA","NA","TA","DA","MA","AA",
"XA","OA","LA","RA","OR","AN","EQ","NE","LE","GE","LS","RS","AR","PP","NN",
};
char *yyrule[] = {
"$accept : stmts",
"stmts : stmts stmt",
"stmts :",
"stmt : ';'",
"stmt : expr ';'",
"stmt : IF '(' expr M ')' stmt N ELSE L stmt L",
"stmt : IF '(' expr M ')' stmt L",
"stmt : WHILE '(' L expr M ')' stmt N L",
"stmt : DO L stmt WHILE '(' expr M N L ')' ';'",
"stmt : FOR '(' expr ';' L expr M N ';' L expr N ')' L stmt N L",
"stmt : RETURN expr ';'",
"stmt : '{' stmts '}'",
"stmt : error ';'",
"expr : ID '=' expr",
"expr : ID PA expr",
"expr : ID NA expr",
"expr : ID TA expr",
"expr : ID DA expr",
"expr : ID MA expr",
"expr : ID AA expr",
"expr : ID XA expr",
"expr : ID OA expr",
"expr : ID LA expr",
"expr : ID RA expr",
"expr : expr OR expr",
"expr : expr AN expr",
"expr : expr '|' expr",
"expr : expr '^' expr",
"expr : expr '&' expr",
"expr : expr EQ expr",
"expr : expr NE expr",
"expr : expr '<' expr",
"expr : expr '>' expr",
"expr : expr LE expr",
"expr : expr GE expr",
"expr : expr LS expr",
"expr : expr RS expr",
"expr : expr '+' expr",
"expr : expr '-' expr",
"expr : expr '*' expr",
"expr : expr '/' expr",
"expr : expr '%' expr",
"expr : '!' expr",
"expr : '~' expr",
"expr : '+' expr",
"expr : '-' expr",
"expr : '(' expr ')'",
"expr : '$' INT8",
"expr : PP ID",
"expr : NN ID",
"expr : ID PP",
"expr : ID NN",
"expr : ID",
"expr : INT8",
"expr : INT16",
"expr : INT32",
"expr : FLT",
"expr : STR",
"L :",
"M :",
"N :",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 145 "mycc.y"

int main(int argc, char **argv)
{
	int index1, index2, index3;
	int label1, label2;

	// set up new class file structure
	init_ClassFile(&cf);

	// class has public access
	cf.access = ACC_PUBLIC;

	// class name is "Code"
	cf.name = "Code";

	// no fields
	cf.field_count = 0;

	// one method
	cf.method_count = 1;

	// allocate array of methods (just one "main" in our example)
	cf.methods = (struct MethodInfo*)malloc(cf.method_count * sizeof(struct MethodInfo));

	if (!cf.methods)
		error("Out of memory");

	// method has public access and is static
	cf.methods[0].access = ACC_PUBLIC | ACC_STATIC;

	// method name is "main"
	cf.methods[0].name = "main";

	// method descriptor of "void main(String[] arg)"
	cf.methods[0].descriptor = "([Ljava/lang/String;)V";

	// max operand stack size of this method
	cf.methods[0].max_stack = 100;

	// the number of local variables in the local variable array
	//   local variable 0 contains "arg"
	//   local variable 1 contains "val"
	//   local variable 2 contains "i" and "result"
	cf.methods[0].max_locals = 100;

	// set up new bytecode buffer
	init_code();
	
	// generate prologue code

/*LOC*/ /*CODE*/			/*SOURCE*/
/*000*/	emit(aload_0);
/*001*/	emit(arraylength);		// arg.length
/*002*/	emit2(newarray, T_INT);
/*004*/	emit(astore_1);			// val = new int[arg.length]
/*005*/	emit(iconst_0);
/*006*/	emit(istore_2);			// i = 0
	label1 = pc;			// label1:
/*007*/	emit(iload_2);
/*008*/	emit(aload_0);
/*009*/	emit(arraylength);
	label2 = pc;
/*010*/	emit3(if_icmpge, PAD);		// if i >= arg.length then goto label2
/*013*/	emit(aload_1);
/*014*/	emit(iload_2);
/*015*/	emit(aload_0);
/*016*/	emit(iload_2);
/*017*/	emit(aaload);			// push arg[i] parameter for parseInt
	index1 = constant_pool_add_Methodref(&cf, "java/lang/Integer", "parseInt", "(Ljava/lang/String;)I");
/*018*/	emit3(invokestatic, index1);	// invoke Integer.parseInt(arg[i])
/*021*/	emit(iastore);			// val[i] = Integer.parseInt(arg[i])
/*022*/	emit32(iinc, 2, 1);		// i++
/*025*/	emit3(goto_, label1 - pc);	// goto label1
	backpatch(label2, pc - label2);	// label2:

	// end of prologue code

	init();

	if (argc > 1)
		if (!(yyin = fopen(argv[1], "r")))
			error("Cannot open file for reading");

	
	if (yyparse() || errnum > 0)
		error("Compilation errors: class file not saved");

	fprintf(stderr, "Compilation successful: saving %s.class\n", cf.name);

	// generate epilogue code

	index2 = constant_pool_add_Fieldref(&cf, "java/lang/System", "out", "Ljava/io/PrintStream;");
/*036*/	emit3(getstatic, index2);	// get static field System.out of type PrintStream
/*039*/	emit(iload_2);			// push parameter for println()
	index3 = constant_pool_add_Methodref(&cf, "java/io/PrintStream", "println", "(I)V");
/*040*/	emit3(invokevirtual, index3);	// invoke System.out.println(result)
/*043*/	emit(return_);			// return

	// end of epilogue code

	// length of bytecode is in the emitter's pc variable
	cf.methods[0].code_length = pc;
	
	// must copy code to make it persistent
	cf.methods[0].code = copy_code();

	if (!cf.methods[0].code)
		error("Out of memory");

	// save class file to "Calc.class"
	save_classFile(&cf);

	return 0;
}
#line 519 "mycc.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 4:
#line 53 "mycc.y"
{ emit(pop); /* does not leave a value on the stack */ }
break;
case 5:
#line 55 "mycc.y"
{ backpatch(yyvsp[-7].loc, yyvsp[-2].loc - yyvsp[-7].loc); 
						  backpatch(yyvsp[-4].loc, yyvsp[0].loc - yyvsp[-4].loc);   }
break;
case 6:
#line 59 "mycc.y"
{ backpatch(yyvsp[-3].loc, yyvsp[0].loc - yyvsp[-3].loc); 
	/*					  backpatch($7, $8 - $7);*/
						}
break;
case 7:
#line 63 "mycc.y"
{ backpatch(yyvsp[-4].loc, yyvsp[0].loc - yyvsp[-4].loc); backpatch(yyvsp[-1].loc, yyvsp[-6].loc - yyvsp[-1].loc); }
break;
case 8:
#line 65 "mycc.y"
{ backpatch(yyvsp[-4].loc, yyvsp[-2].loc - yyvsp[-4].loc); backpatch(yyvsp[-3].loc, yyvsp[-9].loc - yyvsp[-3].loc); }
break;
case 9:
#line 67 "mycc.y"
{
						  backpatch(yyvsp[-10].loc, yyvsp[0].loc - yyvsp[-10].loc);
						  backpatch(yyvsp[-9].loc, yyvsp[-3].loc - yyvsp[-9].loc);
						  backpatch(yyvsp[-5].loc, yyvsp[-12].loc - yyvsp[-5].loc);
						  backpatch(yyvsp[-1].loc, yyvsp[-7].loc - yyvsp[-1].loc);
						}
break;
case 10:
#line 74 "mycc.y"
{ emit(istore_2); /* return val goes in local var 2 */ }
break;
case 12:
#line 76 "mycc.y"
{ yyerrok; }
break;
case 13:
#line 79 "mycc.y"
{ emit(dup); emit2(istore, yyvsp[-2].sym->localvar); }
break;
case 14:
#line 80 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(iadd); emit(dup); emit2(istore, yyvsp[-2].sym->localvar);  }
break;
case 15:
#line 81 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(swap); emit(isub); emit(dup); emit2(istore, yyvsp[-2].sym->localvar);  }
break;
case 16:
#line 82 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(imul); emit(dup); emit2(istore, yyvsp[-2].sym->localvar); }
break;
case 17:
#line 83 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(swap); emit(idiv); emit(dup); emit2(istore, yyvsp[-2].sym->localvar);  }
break;
case 18:
#line 84 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(swap); emit(irem); emit(dup); emit2(istore, yyvsp[-2].sym->localvar); }
break;
case 19:
#line 85 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(iand); emit(dup); emit2(istore, yyvsp[-2].sym->localvar);  }
break;
case 20:
#line 86 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(swap); emit(ixor); emit(dup); emit2(istore, yyvsp[-2].sym->localvar);  }
break;
case 21:
#line 87 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(swap); emit(ior); emit(dup); emit2(istore, yyvsp[-2].sym->localvar);  }
break;
case 22:
#line 88 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(swap); emit(ishl); emit(dup); emit2(istore, yyvsp[-2].sym->localvar);  }
break;
case 23:
#line 89 "mycc.y"
{ emit2(iload, yyvsp[-2].sym->localvar); emit(swap); emit(ishr); emit(dup); emit2(istore, yyvsp[-2].sym->localvar);  }
break;
case 24:
#line 90 "mycc.y"
{ emit(ior); }
break;
case 25:
#line 91 "mycc.y"
{ emit(iand); }
break;
case 26:
#line 92 "mycc.y"
{ emit(ior); }
break;
case 27:
#line 93 "mycc.y"
{ emit(ixor); }
break;
case 28:
#line 94 "mycc.y"
{ emit(iand); }
break;
case 29:
#line 95 "mycc.y"
{ emit3(if_icmpeq,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
break;
case 30:
#line 96 "mycc.y"
{ emit3(if_icmpne,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
break;
case 31:
#line 97 "mycc.y"
{ emit3(if_icmplt,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
break;
case 32:
#line 98 "mycc.y"
{ emit3(if_icmpgt,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1);  }
break;
case 33:
#line 99 "mycc.y"
{ emit3(if_icmple,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
break;
case 34:
#line 100 "mycc.y"
{ emit3(if_icmpge,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
break;
case 35:
#line 101 "mycc.y"
{ emit(ishl); }
break;
case 36:
#line 102 "mycc.y"
{ emit(ishr); }
break;
case 37:
#line 103 "mycc.y"
{ emit(iadd); }
break;
case 38:
#line 104 "mycc.y"
{ emit(isub); }
break;
case 39:
#line 105 "mycc.y"
{ emit(imul); }
break;
case 40:
#line 106 "mycc.y"
{ emit(idiv); }
break;
case 41:
#line 107 "mycc.y"
{ emit(irem); }
break;
case 42:
#line 108 "mycc.y"
{ emit2(bipush,0); emit3(if_icmpeq,8); emit2(bipush,0); emit3(goto_, 5); emit2(bipush, 1); }
break;
case 43:
#line 109 "mycc.y"
{ /* TODO: TO BE COMPLETED */ error("~ operator not implemented"); }
break;
case 44:
#line 111 "mycc.y"
{ /* TODO: TO BE COMPLETED */ error("unary + operator not implemented"); }
break;
case 45:
#line 113 "mycc.y"
{ emit(ineg); }
break;
case 47:
#line 115 "mycc.y"
{ emit(aload_1); emit2(bipush, yyvsp[0].num); emit(iaload); }
break;
case 48:
#line 116 "mycc.y"
{ emit2(iload, yyvsp[0].sym->localvar); emit2(bipush, 1); emit(iadd); emit(dup); emit2(istore, yyvsp[0].sym->localvar); }
break;
case 49:
#line 117 "mycc.y"
{ emit2(iload, yyvsp[0].sym->localvar); emit2(bipush, 1); emit(isub); emit(dup); emit2(istore, yyvsp[0].sym->localvar); }
break;
case 50:
#line 118 "mycc.y"
{ emit2(iload, yyvsp[-1].sym->localvar); emit(dup); emit2(bipush, 1); emit(iadd); emit2(istore, yyvsp[-1].sym->localvar); }
break;
case 51:
#line 119 "mycc.y"
{  emit2(iload, yyvsp[-1].sym->localvar); emit(dup); emit2(bipush, 1); emit(isub); emit2(istore, yyvsp[-1].sym->localvar); }
break;
case 52:
#line 120 "mycc.y"
{  emit2(iload, yyvsp[0].sym->localvar); }
break;
case 53:
#line 121 "mycc.y"
{ emit2(bipush, yyvsp[0].num); }
break;
case 54:
#line 122 "mycc.y"
{ emit3(sipush, yyvsp[0].num); }
break;
case 55:
#line 123 "mycc.y"
{ emit2(ldc, constant_pool_add_Integer(&cf, yyvsp[0].num)); }
break;
case 56:
#line 124 "mycc.y"
{ error("float constant not supported"); }
break;
case 57:
#line 125 "mycc.y"
{ error("string constant not supported"); }
break;
case 58:
#line 128 "mycc.y"
{ yyval.loc = pc; }
break;
case 59:
#line 131 "mycc.y"
{ yyval.loc = pc;	/* location of inst. to backpatch */
			  emit3(ifeq, 0);
			}
break;
case 60:
#line 136 "mycc.y"
{ yyval.loc = pc;	/* location of inst. to backpatch */
			  emit3(goto_, 0);
			}
break;
#line 929 "mycc.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
