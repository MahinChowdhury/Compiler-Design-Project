
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUM = 259,
     DECI = 260,
     STR = 261,
     INT = 262,
     FLOAT = 263,
     CHAR = 264,
     IFX = 265,
     ELSEIF = 266,
     ELSE = 267,
     GE = 268,
     LE = 269,
     GT = 270,
     LT = 271,
     MINUS = 272,
     PLUS = 273,
     DIV = 274,
     MULT = 275,
     MAIN = 276,
     PB = 277,
     PE = 278,
     BB = 279,
     BE = 280,
     SM = 281,
     CM = 282,
     ASGN = 283,
     IS_PRIME = 284,
     PRINTVAR = 285,
     PRINTSTR = 286,
     PRINTLN = 287,
     IF = 288,
     FOR = 289,
     INC = 290,
     DEC = 291,
     TO = 292,
     SWITCH = 293,
     DEFAULT = 294,
     COL = 295,
     FUNC = 296,
     EQU = 297,
     NEQU = 298,
     SIN = 299,
     EXP = 300,
     GCD = 301,
     MIN = 302,
     MAX = 303,
     SH = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 45 "mahin.y"

  char* text;
  int num;
  double val;



/* Line 1676 of yacc.c  */
#line 109 "mahin.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


