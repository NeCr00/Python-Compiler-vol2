/* A Bison parser, made by GNU Bison 3.6.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_INDENT = 258,              /* TOK_INDENT  */
    TOK_DEDENT = 259,              /* TOK_DEDENT  */
    INTNUM = 260,                  /* INTNUM  */
    TRUE = 261,                    /* TRUE  */
    FALSE = 262,                   /* FALSE  */
    VAR = 263,                     /* VAR  */
    STRING = 264,                  /* STRING  */
    IF = 265,                      /* IF  */
    THEN = 266,                    /* THEN  */
    ELSE = 267,                    /* ELSE  */
    PRINT = 268,                   /* PRINT  */
    ASSIGN = 269,                  /* ASSIGN  */
    FROM = 270,                    /* FROM  */
    AS = 271,                      /* AS  */
    DOT = 272,                     /* DOT  */
    INIT = 273,                    /* INIT  */
    LAMBDA = 274,                  /* LAMBDA  */
    TOK_EQ = 275,                  /* TOK_EQ  */
    TOK_NE = 276,                  /* TOK_NE  */
    TOK_GE = 277,                  /* TOK_GE  */
    TOK_LE = 278,                  /* TOK_LE  */
    TOK_GT = 279,                  /* TOK_GT  */
    TOK_LT = 280,                  /* TOK_LT  */
    COMMA = 281,                   /* COMMA  */
    ELIF = 282,                    /* ELIF  */
    FOR = 283,                     /* FOR  */
    DEF = 284,                     /* DEF  */
    CLASS = 285,                   /* CLASS  */
    TOK_PLUS = 286,                /* TOK_PLUS  */
    TOK_MINUS = 287,               /* TOK_MINUS  */
    TOK_MUL = 288,                 /* TOK_MUL  */
    TOK_DIV = 289,                 /* TOK_DIV  */
    TOK_L_P = 290,                 /* TOK_L_P  */
    TOK_R_P = 291,                 /* TOK_R_P  */
    IN = 292,                      /* IN  */
    RANGE = 293,                   /* RANGE  */
    IMPORT = 294,                  /* IMPORT  */
    TOK_L_BRA = 295,               /* TOK_L_BRA  */
    TOK_R_BRA = 296                /* TOK_R_BRA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 42 "parser.y"

    int   int_value;
    char  *string;

#line 110 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
