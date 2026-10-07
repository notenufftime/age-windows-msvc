/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_CYPHER_YY_SRC_INCLUDE_PARSER_CYPHER_GRAM_DEF_H_INCLUDED
# define YY_CYPHER_YY_SRC_INCLUDE_PARSER_CYPHER_GRAM_DEF_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cypher_yydebug;
#endif
/* "%code requires" blocks.  */
#line 55 "src/backend/parser/cypher_gram.y"

#ifdef DELETE
#undef DELETE
#endif
#ifdef IN
#undef IN
#endif
#ifdef OPTIONAL
#undef OPTIONAL
#endif
#ifdef STRING
#undef STRING
#endif

#line 64 "src/include/parser/cypher_gram_def.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    DECIMAL = 259,                 /* DECIMAL  */
    CG_STRING = 260,               /* CG_STRING  */
    IDENTIFIER = 261,              /* IDENTIFIER  */
    PARAMETER = 262,               /* PARAMETER  */
    NOT_EQ = 263,                  /* NOT_EQ  */
    LT_EQ = 264,                   /* LT_EQ  */
    GT_EQ = 265,                   /* GT_EQ  */
    DOT_DOT = 266,                 /* DOT_DOT  */
    TYPECAST = 267,                /* TYPECAST  */
    PLUS_EQ = 268,                 /* PLUS_EQ  */
    EQ_TILDE = 269,                /* EQ_TILDE  */
    CONCAT = 270,                  /* CONCAT  */
    ACCESS_PATH = 271,             /* ACCESS_PATH  */
    LEFT_CONTAINS = 272,           /* LEFT_CONTAINS  */
    RIGHT_CONTAINS = 273,          /* RIGHT_CONTAINS  */
    ANY_EXISTS = 274,              /* ANY_EXISTS  */
    ALL_EXISTS = 275,              /* ALL_EXISTS  */
    ALL = 276,                     /* ALL  */
    ANALYZE = 277,                 /* ANALYZE  */
    AND = 278,                     /* AND  */
    AS = 279,                      /* AS  */
    ASC = 280,                     /* ASC  */
    ASCENDING = 281,               /* ASCENDING  */
    BY = 282,                      /* BY  */
    CALL = 283,                    /* CALL  */
    CASE = 284,                    /* CASE  */
    COALESCE = 285,                /* COALESCE  */
    CONTAINS = 286,                /* CONTAINS  */
    CREATE = 287,                  /* CREATE  */
    DELETE = 288,                  /* DELETE  */
    DESC = 289,                    /* DESC  */
    DESCENDING = 290,              /* DESCENDING  */
    DETACH = 291,                  /* DETACH  */
    DISTINCT = 292,                /* DISTINCT  */
    ELSE = 293,                    /* ELSE  */
    END_P = 294,                   /* END_P  */
    ENDS = 295,                    /* ENDS  */
    EXISTS = 296,                  /* EXISTS  */
    EXPLAIN = 297,                 /* EXPLAIN  */
    FALSE_P = 298,                 /* FALSE_P  */
    IN = 299,                      /* IN  */
    IS = 300,                      /* IS  */
    LIMIT = 301,                   /* LIMIT  */
    MATCH = 302,                   /* MATCH  */
    MERGE = 303,                   /* MERGE  */
    NOT = 304,                     /* NOT  */
    NULL_P = 305,                  /* NULL_P  */
    OPTIONAL = 306,                /* OPTIONAL  */
    OR = 307,                      /* OR  */
    ORDER = 308,                   /* ORDER  */
    REMOVE = 309,                  /* REMOVE  */
    RETURN = 310,                  /* RETURN  */
    SET = 311,                     /* SET  */
    SKIP = 312,                    /* SKIP  */
    STARTS = 313,                  /* STARTS  */
    THEN = 314,                    /* THEN  */
    TRUE_P = 315,                  /* TRUE_P  */
    UNION = 316,                   /* UNION  */
    UNWIND = 317,                  /* UNWIND  */
    VERBOSE = 318,                 /* VERBOSE  */
    WHEN = 319,                    /* WHEN  */
    WHERE = 320,                   /* WHERE  */
    WITH = 321,                    /* WITH  */
    XOR = 322,                     /* XOR  */
    YIELD = 323,                   /* YIELD  */
    UNARY_MINUS = 324              /* UNARY_MINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 70 "src/backend/parser/cypher_gram.y"

    /* types in cypher_yylex() */
    int integer;
    char *string;
    const char *keyword;

    /* extra types */
    bool boolean;
    Node *node;
    List *list;

#line 162 "src/include/parser/cypher_gram_def.h"

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




int cypher_yyparse (ag_scanner_t scanner, cypher_yy_extra *extra);


#endif /* !YY_CYPHER_YY_SRC_INCLUDE_PARSER_CYPHER_GRAM_DEF_H_INCLUDED  */
