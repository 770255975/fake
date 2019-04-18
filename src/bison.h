/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     VAR_BEGIN = 258,
     RETURN = 259,
     BREAK = 260,
     FUNC = 261,
     WHILE = 262,
     FTRUE = 263,
     FFALSE = 264,
     IF = 265,
     THEN = 266,
     ELSE = 267,
     END = 268,
     STRING_DEFINITION = 269,
     IDENTIFIER = 270,
     NUMBER = 271,
     SINGLE_LINE_COMMENT = 272,
     DIVIDE_MOD = 273,
     ARG_SPLITTER = 274,
     PLUS = 275,
     MINUS = 276,
     DIVIDE = 277,
     MULTIPLY = 278,
     ASSIGN = 279,
     MORE = 280,
     LESS = 281,
     MORE_OR_EQUAL = 282,
     LESS_OR_EQUAL = 283,
     EQUAL = 284,
     NOT_EQUAL = 285,
     OPEN_BRACKET = 286,
     CLOSE_BRACKET = 287,
     AND = 288,
     OR = 289,
     FKFLOAT = 290,
     PLUS_ASSIGN = 291,
     MINUS_ASSIGN = 292,
     DIVIDE_ASSIGN = 293,
     MULTIPLY_ASSIGN = 294,
     DIVIDE_MOD_ASSIGN = 295,
     COLON = 296,
     FOR = 297,
     INC = 298,
     FAKE = 299,
     FKUUID = 300,
     OPEN_SQUARE_BRACKET = 301,
     CLOSE_SQUARE_BRACKET = 302,
     FCONST = 303,
     PACKAGE = 304,
     INCLUDE = 305,
     IDENTIFIER_DOT = 306,
     IDENTIFIER_POINTER = 307,
     STRUCT = 308,
     IS = 309,
     NOT = 310,
     CONTINUE = 311,
     YIELD = 312,
     SLEEP = 313,
     SWITCH = 314,
     CASE = 315,
     DEFAULT = 316,
     NEW_ASSIGN = 317,
     ELSEIF = 318,
     RIGHT_POINTER = 319,
     STRING_CAT = 320,
     OPEN_BIG_BRACKET = 321,
     CLOSE_BIG_BRACKET = 322,
     FNULL = 323
   };
#endif
/* Tokens.  */
#define VAR_BEGIN 258
#define RETURN 259
#define BREAK 260
#define FUNC 261
#define WHILE 262
#define FTRUE 263
#define FFALSE 264
#define IF 265
#define THEN 266
#define ELSE 267
#define END 268
#define STRING_DEFINITION 269
#define IDENTIFIER 270
#define NUMBER 271
#define SINGLE_LINE_COMMENT 272
#define DIVIDE_MOD 273
#define ARG_SPLITTER 274
#define PLUS 275
#define MINUS 276
#define DIVIDE 277
#define MULTIPLY 278
#define ASSIGN 279
#define MORE 280
#define LESS 281
#define MORE_OR_EQUAL 282
#define LESS_OR_EQUAL 283
#define EQUAL 284
#define NOT_EQUAL 285
#define OPEN_BRACKET 286
#define CLOSE_BRACKET 287
#define AND 288
#define OR 289
#define FKFLOAT 290
#define PLUS_ASSIGN 291
#define MINUS_ASSIGN 292
#define DIVIDE_ASSIGN 293
#define MULTIPLY_ASSIGN 294
#define DIVIDE_MOD_ASSIGN 295
#define COLON 296
#define FOR 297
#define INC 298
#define FAKE 299
#define FKUUID 300
#define OPEN_SQUARE_BRACKET 301
#define CLOSE_SQUARE_BRACKET 302
#define FCONST 303
#define PACKAGE 304
#define INCLUDE 305
#define IDENTIFIER_DOT 306
#define IDENTIFIER_POINTER 307
#define STRUCT 308
#define IS 309
#define NOT 310
#define CONTINUE 311
#define YIELD 312
#define SLEEP 313
#define SWITCH 314
#define CASE 315
#define DEFAULT 316
#define NEW_ASSIGN 317
#define ELSEIF 318
#define RIGHT_POINTER 319
#define STRING_CAT 320
#define OPEN_BIG_BRACKET 321
#define CLOSE_BIG_BRACKET 322
#define FNULL 323




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


