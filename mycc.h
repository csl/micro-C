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
typedef union
{ 
  Symbol *sym;  /* token value yylval.sym is the symbol table entry of an ID */
  unsigned num; /* token value yylval.num is the value of an int constant */
  float flt;    /* token value yylval.flt is the value of a float constant */
  char *str;    /* token value yylval.str is the value of a string constant */
  unsigned loc; /* location of instruction to backpatch */
} YYSTYPE;
extern YYSTYPE yylval;
