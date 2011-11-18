/* TODO: TO BE COMPLETED */

%{
#include "global.h"
static struct ClassFile cf;
%}

/* YYSTYPE type of attribute for all tokens and nonterminals */
%union
{ 
  Symbol *sym;  /* token value yylval.sym is the symbol table entry of an ID */
  unsigned num; /* token value yylval.num is the value of an int constant */
  float flt;    /* token value yylval.flt is the value of a float constant */
  char *str;    /* token value yylval.str is the value of a string constant */
  unsigned loc; /* location of instruction to backpatch */
}

/* Declare ID token and its attribute type */
%token <sym> ID

/* Declare INT tokens and their attribute type */
%token <num> INT8 INT16 INT32

%token <flt> FLT

%token <str> STR

/* Declare tokens for keywords */
/* Note: install_id() returns Symbol* for keywords and identifiers */
/* TODO: TO BE COMPLETED */
%token <sym> DO ELSE FOR IF RETURN WHILE 

/* Declare operator tokens */
/* TODO: TO BE COMPLETED WITH ASSOCIATIVITY AND PRECEDENCE DECLARATIONS */
%token PA NA TA DA MA AA XA OA LA RA OR AN EQ NE LE GE LS RS AR PP NN

/* Declare attribute types for marker nonterminals, such as L M and N */
%type <loc> L M N 

%left '&' AN
%left '|' OR
%left '+' '-' /* Arithmetic are higher than bitwise operators */
%left '*' '/'
%right '!'

%%

stmts   : stmts stmt
        | /* empty */
        ;

stmt    : ';'
        | expr ';'      { emit(pop); /* does not leave a value on the stack */ }
        | IF '(' expr M ')' stmt N ELSE L stmt L
                        { backpatch($4, $9 - $4); 
						  backpatch($7, $11 - $7);   }

        | IF '(' expr M ')' stmt L
                        { backpatch($4, $7 - $4); 
	//					  backpatch($7, $8 - $7);
						}
        | WHILE '(' L expr M ')' stmt N L
                        { backpatch($5, $9 - $5); backpatch($8, $3 - $8); }
        | DO L stmt WHILE '(' expr M N L ')' ';'
               			{ backpatch($7, $9 - $7); backpatch($8, $2 - $8); }
        | FOR '(' expr ';' L expr M N ';' L expr N ')' L stmt N L
                        {
						  backpatch($7, $17 - $7);
						  backpatch($8, $14 - $8);
						  backpatch($12, $5 - $12);
						  backpatch($16, $10 - $16);
						}
        | RETURN expr ';'
                        { emit(istore_2); /* return val goes in local var 2 */ }
        | '{' stmts '}'
        | error ';'     { yyerrok; }
        ;

expr    : ID   '=' expr { emit(dup); emit2(istore, $1->localvar); }
        | ID   PA  expr { emit2(iload, $1->localvar); emit(iadd); emit(dup); emit2(istore, $1->localvar);  }
        | ID   NA  expr { emit2(iload, $1->localvar); emit(swap); emit(isub); emit(dup); emit2(istore, $1->localvar);  }
        | ID   TA  expr { emit2(iload, $1->localvar); emit(imul); emit(dup); emit2(istore, $1->localvar); }
        | ID   DA  expr { emit2(iload, $1->localvar); emit(swap); emit(idiv); emit(dup); emit2(istore, $1->localvar);  }
        | ID   MA  expr { emit2(iload, $1->localvar); emit(swap); emit(irem); emit(dup); emit2(istore, $1->localvar); }
        | ID   AA  expr { emit2(iload, $1->localvar); emit(iand); emit(dup); emit2(istore, $1->localvar);  }
        | ID   XA  expr { emit2(iload, $1->localvar); emit(swap); emit(ixor); emit(dup); emit2(istore, $1->localvar);  }
        | ID   OA  expr { emit2(iload, $1->localvar); emit(swap); emit(ior); emit(dup); emit2(istore, $1->localvar);  }
        | ID   LA  expr { emit2(iload, $1->localvar); emit(swap); emit(ishl); emit(dup); emit2(istore, $1->localvar);  }
        | ID   RA  expr { emit2(iload, $1->localvar); emit(swap); emit(ishr); emit(dup); emit2(istore, $1->localvar);  }
        | expr OR  expr { emit(ior); }
        | expr AN  expr { emit(iand); }
        | expr '|' expr { emit(ior); }
        | expr '^' expr { emit(ixor); }
        | expr '&' expr { emit(iand); }
        | expr EQ  expr { emit3(if_icmpeq,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
        | expr NE  expr { emit3(if_icmpne,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
        | expr '<' expr { emit3(if_icmplt,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
        | expr '>' expr { emit3(if_icmpgt,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1);  }
        | expr LE  expr { emit3(if_icmple,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
        | expr GE  expr { emit3(if_icmpge,8); emit2(bipush,0); emit3(goto_,5); emit2(bipush,1); }
        | expr LS  expr { emit(ishl); }
        | expr RS  expr { emit(ishr); }
        | expr '+' expr { emit(iadd); }
        | expr '-' expr { emit(isub); }
        | expr '*' expr { emit(imul); }
        | expr '/' expr { emit(idiv); }
        | expr '%' expr { emit(irem); }
        | '!' expr      { emit2(bipush,0); emit3(if_icmpeq,8); emit2(bipush,0); emit3(goto_, 5); emit2(bipush, 1); }
        | '~' expr      { /* TODO: TO BE COMPLETED */ error("~ operator not implemented"); }
        | '+' expr %prec '!' /* '+' at same precedence level as '!' */
                        { /* TODO: TO BE COMPLETED */ error("unary + operator not implemented"); }
        | '-' expr %prec '!' /* '-' at same precedence level as '!' */
                        { emit(ineg); }
        | '(' expr ')'
        | '$' INT8      { emit(aload_1); emit2(bipush, $2); emit(iaload); }
        | PP ID         { emit2(iload, $2->localvar); emit2(bipush, 1); emit(iadd); emit(dup); emit2(istore, $2->localvar); }
        | NN ID         { emit2(iload, $2->localvar); emit2(bipush, 1); emit(isub); emit(dup); emit2(istore, $2->localvar); } 
        | ID PP         { emit2(iload, $1->localvar); emit(dup); emit2(bipush, 1); emit(iadd); emit2(istore, $1->localvar); }
        | ID NN         {  emit2(iload, $1->localvar); emit(dup); emit2(bipush, 1); emit(isub); emit2(istore, $1->localvar); }
        | ID            {  emit2(iload, $1->localvar); }
        | INT8          { emit2(bipush, $1); }
        | INT16         { emit3(sipush, $1); }
        | INT32         { emit2(ldc, constant_pool_add_Integer(&cf, $1)); }
	| FLT		{ error("float constant not supported"); }
	| STR		{ error("string constant not supported"); }
        ;

L       : /* empty */   { $$ = pc; }
        ;

M       : /* empty */   { $$ = pc;	/* location of inst. to backpatch */
			  emit3(ifeq, 0);
			}
        ;

N       : /* empty */   { $$ = pc;	/* location of inst. to backpatch */
			  emit3(goto_, 0);
			}
        ;

/* TODO: TO BE COMPLETED */
/* Add additional marker nonterminals when needed */

%%

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
