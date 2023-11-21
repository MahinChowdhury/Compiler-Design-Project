char [a-zA-Z]
digit [0-9]
decimal	([\+\-]?[0-9]+([\.][0-9]+))
special [$_@]
space " "
newline "\n"
id  [a-zA-Z][a-zA-Z0-9_]*
Datatype "integer"|"double"|"char"|"void"
Operator "Assign"|"Plus"|"Minus"|"Divide"|"Multiply"
Relational_Operator "GT"|"LT"|"GE"|"LE"|"And"|"Or"|"EQU"|"NEQU"

%{
	#include "mahin.tab.h"
	#include <string.h>
	#include <stdio.h>
	int yyparse();
	int yyerror();
	int yylex();
%}


%%
"import".*.h {printf("Header Library Declared Here.\n");}
"#".* {printf("This is a COMMENT\n");}

"main()" 					    { printf("\n");return MAIN; }

{space}|{newline}				{}
";" 							{ return SM; }
"," 							{ return CM; }

{digit}+ 						{
									yylval.num = atoi(yytext);
									return NUM;
								}	
{decimal}						{yylval.val = atof(yytext);return DECI;}			

"fireVar" 			{ return PRINTVAR; }
"fireStr" 			{ return PRINTSTR; }
"fireLn"            { return PRINTLN;}

"int" 						{ return INT; }
"float" 						{ return FLOAT; }
"char" 							{ return CHAR; }

"(" 							{ return PB; }
")" 							{ return PE; }

"{" 							{ return BB; }
"}" 							{ return BE; }

"=" 						{ return ASGN; }
"+" 							{ return PLUS; }
"-" 						{ return MINUS; }
"*" 						{ return MULT; }
"/" 						{ return DIV; }

"<" 							{ return LT; }
">" 							{ return GT; }
">=" 							{ return LE; }
"<=" 							{ return GE; }
"==" 							{ return EQU; }
"!=" 							{ return NEQU; }

"else if" 						    { return ELSEIF; }
"if" 							{ return IF; }
"else" 							{ return ELSE; }

"for" 							{ return FOR; }
"inc" 							{ return INC; }
"dec" 							{ return DEC; }
"to" 							{ return TO; }

"exp"							{ return EXP; }
"gcd"							{ return GCD; }
"max"							{ return MAX; }
"min"							{ return MIN; }
"is_prime"                      {return IS_PRIME;}

"Switch" 						{ return SWITCH; }
"default" 						{ return DEFAULT; }
":" 							{ return COL; }

"func"                          {return FUNC;}

"\""(.)*"\"" 					{ 
									strcpy(yylval.text,yytext);
								    return STR;
								}

{id}                            {yylval.text = strdup(yytext);return ID;}

. {}
%%