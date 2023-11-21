%{
	#include<math.h>
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>

	int yyparse();
	int yylex();
	int yyerror();

	int switchdone = 0;
	int switchvar;

    int varIdx;
    int ptr = 0;
	int isInt;

	struct varStruct{
		char* vname;
		char* type;
		int ival;
		float fval;
		char* cvar;
	} vars[50];

	int find(char* s){
		int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(vars[i].vname,s) == 0) return i;
        }
        return -1;
	}

	void add(char* name,char* type, int ival, float fval, char* cvar){
		vars[ptr].vname = strdup(name);
		vars[ptr].type = strdup(type);
		vars[ptr].ival = ival;
		vars[ptr].fval = fval;
		vars[ptr].cvar = strdup(cvar);
		ptr++;
	}

%}

%union {
  char* text;
  int num;
  double val;
}

%token<text> ID
%token <num>  NUM
%token <val>  DECI
%token <text> STR
%token INT FLOAT CHAR 

%type <num> expression

%left IFX
%left ELSEIF
%left ELSE
%left LT GT LE GE
%left PLUS MINUS
%left MULT DIV


%token MAIN PB PE BB BE SM CM ASGN IS_PRIME PRINTVAR PRINTSTR PRINTLN PLUS MINUS MULT DIV LT GT LE GE IF ELSE ELSEIF FOR INC DEC TO SWITCH DEFAULT COL FUNC EQU NEQU SIN EXP GCD MIN MAX


%left SH


%%

program : MAIN BB statement BE {printf("\n===> Entire Program Executed Successfully\n");}
        ;

statement	:
			| declare statement
			| expression statement 
			| ifelse statement 
			| forloop statement
			| switchstmt statement
            | libFunction statement
			| print statement
			| assign statement
			| function statement
			;

declare : TYPE variables

TYPE: INT {isInt=1;}
	| FLOAT {isInt=0;}
	| CHAR {isInt=-1;}

variables : variable CM variables
	|variable SM

variable: ID
{
    int idx = find($1);

    if (idx != -1)
    {
        printf("Declared\n");
    }
    else
    {
        if (isInt == 1)
        {
            printf("Declared Int : (%s)\n",$1);
            add($1, "int", 0, 0.0, "");
        }
        else if (isInt == 0)
        {
            printf("Declared Float: (%s)\n",$1);
            add($1, "float", 0, 0.0, "");
        }
        else
        {
            printf("Declared String: (%s)\n",$1);
            add($1, "char", 0, 0.0, "");
        }
    }
}
| ID ASGN NUM {
	if(find($1)!=-1){
		printf("Declared\n");
	}
	else{
		if(isInt==1){
			printf("Declared Int : (%s) and Assigned Int Value : (%d)\n",$1,$3);
			add($1,"int",$3,0.0,"");
		}
		else if(isInt==0){
			printf("Declared Float : (%s) and Assigned Int Value : (%d)\n",$1,$3);
			add($1,"float",0,$3,"");
		}
		else{
			printf("type error : Mismatch\n");
		}
	}
}
| ID ASGN DECI
{

    if (find($1) != -1)
    {
        printf("Declared\n");
    }
    else
    {
        if (isInt == 1)
        {
			printf("Declared Int : (%s) and Assigned Float Value : (%f)\n",$1,$3);
            add($1, "int", $3, 0.0, "");
        }
        else if (isInt == 0)
        {	
			printf("Declared Float : (%s) and Assigned Float Value : (%f)\n",$1,$3);
            add($1, "float", 0, $3, "");
        }
        else
        {
            printf("type error : Mismatch\n");
        }
    }
}

| ID ASGN STR{
	if (find($1) != -1)
    {
        printf("Declared\n");
    }
    else
    {
        if (isInt == 1)
        {
			printf("type error : Mismatch\n");
        }
        else if (isInt == 0)
        {	
			printf("type error : Mismatch\n");
        }
        else
        {
            printf("Declared String : (%s) and Assigned String Value : ");

			printf(" %s\n",$3);

            add($1, "string", 0, 0, $3);
        }
    }
}
;

// Declaration Ends

//variable assign begin

assign : ID ASGN expression SM  
	{
		int idx = find($1);
		
		if(idx == -1) {
			printf("Compilation Error: Variable %s is not declared\n",$1);
		}
		else{
			printf("\nAssigned Value : ");
			if(!strcmp(vars[idx].type,"char")) {}
			else if(!strcmp(vars[idx].type,"float")) {vars[idx].fval = $3;printf("%f\n",$3);}
			else {vars[idx].ival = $3;printf("%d\n",$3);}
		}
	}

// variable assign end

// Print Begin

print: PRINTVAR PB ID PE SM 	
					{
                        int idx = find($3);
						if(idx==-1){
							printf("Compilation Error: Variable %s is not declared\n",$3);
						}
						else{
                            if(!strcmp(vars[idx].type,"char")) printf("%s\n",vars[idx].cvar);
                            else if(!strcmp(vars[idx].type,"float")) printf("%f\n",vars[idx].fval);
                            else printf("%d\n",vars[idx].ival);
						}
					}

| PRINTLN PB PE	SM 	
		{
			printf("\n");
		}
| PRINTSTR PB STR PE SM 
{
	printf("%s\n",$3);
}
;


// printing end

// Library Functions

libFunction : GCD PB expression CM expression PE SM
				{
					int a = $3,b=$5;
					while(a != b){
						if(a > b)	a -= b;
						else b -= a;
					}

					printf("\nGCD is : %d\n",a);
				}
            | MAX PB expression CM expression PE SM
                {
					int a = $3,b=$5;

					if(a > b) printf("\nMaximum value : %d\n",a);
					else printf("\nMaximum value : %d\n",b);
                }
            | MIN PB expression CM expression PE SM
                {
					int a=$3,b=$5;

					if(a < b) printf("\nMinimum value : %d\n",a);
					else printf("\nMinimum value : %d\n",b);
                }
            | EXP PB expression EXP expression PE SM 
                {
                    int n=$3,m=$5;
					int value = 1;

					while(m){
						value *= n;
						m--;
					}
                }
            | IS_PRIME PB expression PE SM
                {   
                    int n = $3;

                    int flag = 1,i;

                    for(i=2 ; i*i<=n ; i++){
                        if(n%i==0) {
                            flag = 0;
                            break;
                        }
                    }

                    if(flag) printf("\n%d is a prime number\n",n);
                    else printf("\n%d not a prime number\n",n);
                }
            ;

//Library Functions end

//expression Begin

expression : NUM {$$ = $1;}
			| ID 	
					{
						int idx = find($1);
						if(idx==-1){
							printf("Compilation Error: Variable %s is not declared\n",$1);
						}
						else{
							if(!strcmp(vars[idx].type,"int")) $$ = vars[idx].ival;
                            else if(!strcmp(vars[idx].type,"float")) $$ = vars[idx].fval;
							else{
								//String
							}
						}

				 	}
			| expression PLUS expression 
					{$$ = $1 + $3;}
			| expression MINUS expression 
					{$$ = $1 - $3;}
			| expression MULT expression 
					{$$ = $1 * $3;}
			| expression DIV expression 
					{
						if($3) {
 							$$ = $1 / $3;
							}
				  		else {
							$$ = 0;
							printf("\nRuntime Error: division by zero\t");
							exit(-1);
				  		} 
					}
			| expression LT expression	
					{ $$ = $1 < $3; }
			| expression GT expression	
					{ $$ = $1 > $3; }
			| expression LE expression	
					{ $$ = $1 <= $3; }
			| expression GE expression	
					{ $$ = $1 >= $3; }
			| expression EQU expression
					{ $$ = $1 == $3; }
			| expression NEQU expression
					{ $$ = $1 != $3; }
			| PB expression PE
					{$$ = $2;}
			;


// expression Begin



// ifelse begin

ifelse : IF PB expression PE BB statement BE %prec IFX
{
    printf("\nIF condition found\n");
    int res = $3;
    if(res == 1) {
        printf("If condition is true.\n");
    } else {
        printf("If condition is false.\n");
    }
}
| ifelse ELSE BB statement BE
{
    printf("\nELSE condition found\n");
}
| ifelse ELSEIF PB expression PE BB statement BE %prec IFX
{
    printf("\nElse If condition found\n");
    int res = $4;
    if(res == 1) {
        printf("Else If condition is true.\n");
    } else {
        printf("Else If condition is false.\n");
    }
}
;

// ifelse end

// foor loop begin


forloop	: FOR PB expression TO expression INC expression PE BB statement BE 	
					{
                        printf("\n===>For Loop Incement Working Successfully\n");
						int st = $3;
						int ed = $5;
						int dif = $7;
						int cnt = 0;
						int k = 0;
						for(k = st; k <= ed; k += dif){
                            printf("%d\n",k);
							cnt++;
						}	
						printf("===>Loop executed %d times\n",cnt);
					} 

        | FOR PB expression TO expression DEC expression PE BB statement BE {
            {
                        printf("\n===>For Loop Decrement Working Successfully\n");
						int st = $3;
						int ed = $5;
						int dif = $7;
						int cnt = 0;
						int k = 0;
						for(k = st; k >= ed; k -= dif){
                            printf("%d\n",k);
							cnt++;
						}	
						printf("===>Loop executed %d times\n",cnt);
					} 
        }
        ;

/*------foor loop end------------*/


/*------switch case begin--------*/

switchstmt	: SWITCH PB expswitch PE BB switchinside BE
		;

expswitch 	:  expression 
		{
			switchdone = 0;
			switchvar = $1;
		}
		;

switchinside	: 
		{
			printf("\nSwitch Case found.\n");
		}
		| switchinside expression COL BB statement BE 
		{
			if ($2 == switchvar && switchdone == 0) {
				switchdone = 1;
				printf("Executed %d block case!\n", $2);
			}
		}
		| switchinside DEFAULT COL BB statement BE 
		{
			if (switchdone == 0) {
				printf("\nDefault block case executed!\n");
			}
		}
		;




// switch case end

// function begin

function : FUNC ID PB PE BB statement BE {
	printf("\nFunction without parameters\n");
}
| FUNC ID PB para PE BB statement BE{
	printf("\nFunction with parameters\n");
}
;

para : ID CM para
	| ID
	;


// function end
%%


int yyerror(char *s){
	printf( "%s\n", s);
}

int yywrap()
{
	return 1;
}


int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();
}