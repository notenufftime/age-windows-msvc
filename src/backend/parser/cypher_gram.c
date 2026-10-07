/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         cypher_yyparse
#define yylex           cypher_yylex
#define yyerror         cypher_yyerror
#define yydebug         cypher_yydebug
#define yynerrs         cypher_yynerrs

/* First part of user prologue.  */
#line 1 "src/backend/parser/cypher_gram.y"

/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "postgres.h"

#include "nodes/makefuncs.h"
#include "parser/parser.h"

#include "parser/cypher_gram.h"
#include "parser/cypher_parse_node.h"
#include "parser/scansup.h"

// override the default action for locations
#define YYLLOC_DEFAULT(current, rhs, n) \
    do \
    { \
        if ((n) > 0) \
            current = (rhs)[1]; \
        else \
            current = -1; \
    } while (0)

#define YYMALLOC palloc
#define YYFREE pfree

#line 119 "src/backend/parser/cypher_gram.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cypher_gram_def.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 4,                    /* DECIMAL  */
  YYSYMBOL_CG_STRING = 5,                  /* CG_STRING  */
  YYSYMBOL_IDENTIFIER = 6,                 /* IDENTIFIER  */
  YYSYMBOL_PARAMETER = 7,                  /* PARAMETER  */
  YYSYMBOL_NOT_EQ = 8,                     /* NOT_EQ  */
  YYSYMBOL_LT_EQ = 9,                      /* LT_EQ  */
  YYSYMBOL_GT_EQ = 10,                     /* GT_EQ  */
  YYSYMBOL_DOT_DOT = 11,                   /* DOT_DOT  */
  YYSYMBOL_TYPECAST = 12,                  /* TYPECAST  */
  YYSYMBOL_PLUS_EQ = 13,                   /* PLUS_EQ  */
  YYSYMBOL_EQ_TILDE = 14,                  /* EQ_TILDE  */
  YYSYMBOL_CONCAT = 15,                    /* CONCAT  */
  YYSYMBOL_ACCESS_PATH = 16,               /* ACCESS_PATH  */
  YYSYMBOL_LEFT_CONTAINS = 17,             /* LEFT_CONTAINS  */
  YYSYMBOL_RIGHT_CONTAINS = 18,            /* RIGHT_CONTAINS  */
  YYSYMBOL_ANY_EXISTS = 19,                /* ANY_EXISTS  */
  YYSYMBOL_ALL_EXISTS = 20,                /* ALL_EXISTS  */
  YYSYMBOL_ALL = 21,                       /* ALL  */
  YYSYMBOL_ANALYZE = 22,                   /* ANALYZE  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_AS = 24,                        /* AS  */
  YYSYMBOL_ASC = 25,                       /* ASC  */
  YYSYMBOL_ASCENDING = 26,                 /* ASCENDING  */
  YYSYMBOL_BY = 27,                        /* BY  */
  YYSYMBOL_CALL = 28,                      /* CALL  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_COALESCE = 30,                  /* COALESCE  */
  YYSYMBOL_CONTAINS = 31,                  /* CONTAINS  */
  YYSYMBOL_CREATE = 32,                    /* CREATE  */
  YYSYMBOL_DELETE = 33,                    /* DELETE  */
  YYSYMBOL_DESC = 34,                      /* DESC  */
  YYSYMBOL_DESCENDING = 35,                /* DESCENDING  */
  YYSYMBOL_DETACH = 36,                    /* DETACH  */
  YYSYMBOL_DISTINCT = 37,                  /* DISTINCT  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_END_P = 39,                     /* END_P  */
  YYSYMBOL_ENDS = 40,                      /* ENDS  */
  YYSYMBOL_EXISTS = 41,                    /* EXISTS  */
  YYSYMBOL_EXPLAIN = 42,                   /* EXPLAIN  */
  YYSYMBOL_FALSE_P = 43,                   /* FALSE_P  */
  YYSYMBOL_IN = 44,                        /* IN  */
  YYSYMBOL_IS = 45,                        /* IS  */
  YYSYMBOL_LIMIT = 46,                     /* LIMIT  */
  YYSYMBOL_MATCH = 47,                     /* MATCH  */
  YYSYMBOL_MERGE = 48,                     /* MERGE  */
  YYSYMBOL_NOT = 49,                       /* NOT  */
  YYSYMBOL_NULL_P = 50,                    /* NULL_P  */
  YYSYMBOL_OPTIONAL = 51,                  /* OPTIONAL  */
  YYSYMBOL_OR = 52,                        /* OR  */
  YYSYMBOL_ORDER = 53,                     /* ORDER  */
  YYSYMBOL_REMOVE = 54,                    /* REMOVE  */
  YYSYMBOL_RETURN = 55,                    /* RETURN  */
  YYSYMBOL_SET = 56,                       /* SET  */
  YYSYMBOL_SKIP = 57,                      /* SKIP  */
  YYSYMBOL_STARTS = 58,                    /* STARTS  */
  YYSYMBOL_THEN = 59,                      /* THEN  */
  YYSYMBOL_TRUE_P = 60,                    /* TRUE_P  */
  YYSYMBOL_UNION = 61,                     /* UNION  */
  YYSYMBOL_UNWIND = 62,                    /* UNWIND  */
  YYSYMBOL_VERBOSE = 63,                   /* VERBOSE  */
  YYSYMBOL_WHEN = 64,                      /* WHEN  */
  YYSYMBOL_WHERE = 65,                     /* WHERE  */
  YYSYMBOL_WITH = 66,                      /* WITH  */
  YYSYMBOL_XOR = 67,                       /* XOR  */
  YYSYMBOL_YIELD = 68,                     /* YIELD  */
  YYSYMBOL_69_ = 69,                       /* '='  */
  YYSYMBOL_70_ = 70,                       /* '<'  */
  YYSYMBOL_71_ = 71,                       /* '>'  */
  YYSYMBOL_72_ = 72,                       /* '@'  */
  YYSYMBOL_73_ = 73,                       /* '|'  */
  YYSYMBOL_74_ = 74,                       /* '&'  */
  YYSYMBOL_75_ = 75,                       /* '?'  */
  YYSYMBOL_76_ = 76,                       /* '+'  */
  YYSYMBOL_77_ = 77,                       /* '-'  */
  YYSYMBOL_78_ = 78,                       /* '*'  */
  YYSYMBOL_79_ = 79,                       /* '/'  */
  YYSYMBOL_80_ = 80,                       /* '%'  */
  YYSYMBOL_81_ = 81,                       /* '^'  */
  YYSYMBOL_UNARY_MINUS = 82,               /* UNARY_MINUS  */
  YYSYMBOL_83_ = 83,                       /* '['  */
  YYSYMBOL_84_ = 84,                       /* ']'  */
  YYSYMBOL_85_ = 85,                       /* '('  */
  YYSYMBOL_86_ = 86,                       /* ')'  */
  YYSYMBOL_87_ = 87,                       /* '.'  */
  YYSYMBOL_88_ = 88,                       /* ','  */
  YYSYMBOL_89_ = 89,                       /* ';'  */
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_91_ = 91,                       /* '{'  */
  YYSYMBOL_92_ = 92,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_stmt = 94,                      /* stmt  */
  YYSYMBOL_cypher_stmt = 95,               /* cypher_stmt  */
  YYSYMBOL_call_stmt = 96,                 /* call_stmt  */
  YYSYMBOL_yield_item_list = 97,           /* yield_item_list  */
  YYSYMBOL_yield_item = 98,                /* yield_item  */
  YYSYMBOL_semicolon_opt = 99,             /* semicolon_opt  */
  YYSYMBOL_all_or_distinct = 100,          /* all_or_distinct  */
  YYSYMBOL_single_query = 101,             /* single_query  */
  YYSYMBOL_query_part_init = 102,          /* query_part_init  */
  YYSYMBOL_query_part_last = 103,          /* query_part_last  */
  YYSYMBOL_reading_clause_list = 104,      /* reading_clause_list  */
  YYSYMBOL_reading_clause = 105,           /* reading_clause  */
  YYSYMBOL_updating_clause_list_0 = 106,   /* updating_clause_list_0  */
  YYSYMBOL_updating_clause_list_1 = 107,   /* updating_clause_list_1  */
  YYSYMBOL_updating_clause = 108,          /* updating_clause  */
  YYSYMBOL_cypher_varlen_opt = 109,        /* cypher_varlen_opt  */
  YYSYMBOL_cypher_range_opt = 110,         /* cypher_range_opt  */
  YYSYMBOL_cypher_range_idx = 111,         /* cypher_range_idx  */
  YYSYMBOL_cypher_range_idx_opt = 112,     /* cypher_range_idx_opt  */
  YYSYMBOL_Iconst = 113,                   /* Iconst  */
  YYSYMBOL_return = 114,                   /* return  */
  YYSYMBOL_return_item_list = 115,         /* return_item_list  */
  YYSYMBOL_return_item = 116,              /* return_item  */
  YYSYMBOL_order_by_opt = 117,             /* order_by_opt  */
  YYSYMBOL_sort_item_list = 118,           /* sort_item_list  */
  YYSYMBOL_sort_item = 119,                /* sort_item  */
  YYSYMBOL_order_opt = 120,                /* order_opt  */
  YYSYMBOL_skip_opt = 121,                 /* skip_opt  */
  YYSYMBOL_limit_opt = 122,                /* limit_opt  */
  YYSYMBOL_with = 123,                     /* with  */
  YYSYMBOL_match = 124,                    /* match  */
  YYSYMBOL_optional_opt = 125,             /* optional_opt  */
  YYSYMBOL_unwind = 126,                   /* unwind  */
  YYSYMBOL_create = 127,                   /* create  */
  YYSYMBOL_set = 128,                      /* set  */
  YYSYMBOL_set_item_list = 129,            /* set_item_list  */
  YYSYMBOL_set_item = 130,                 /* set_item  */
  YYSYMBOL_remove = 131,                   /* remove  */
  YYSYMBOL_remove_item_list = 132,         /* remove_item_list  */
  YYSYMBOL_remove_item = 133,              /* remove_item  */
  YYSYMBOL_delete = 134,                   /* delete  */
  YYSYMBOL_detach_opt = 135,               /* detach_opt  */
  YYSYMBOL_merge = 136,                    /* merge  */
  YYSYMBOL_where_opt = 137,                /* where_opt  */
  YYSYMBOL_utility_option_list = 138,      /* utility_option_list  */
  YYSYMBOL_utility_option_elem = 139,      /* utility_option_elem  */
  YYSYMBOL_utility_option_name = 140,      /* utility_option_name  */
  YYSYMBOL_utility_option_arg = 141,       /* utility_option_arg  */
  YYSYMBOL_pattern = 142,                  /* pattern  */
  YYSYMBOL_path = 143,                     /* path  */
  YYSYMBOL_anonymous_path = 144,           /* anonymous_path  */
  YYSYMBOL_simple_path_opt_parens = 145,   /* simple_path_opt_parens  */
  YYSYMBOL_simple_path = 146,              /* simple_path  */
  YYSYMBOL_path_node = 147,                /* path_node  */
  YYSYMBOL_path_relationship = 148,        /* path_relationship  */
  YYSYMBOL_path_relationship_body = 149,   /* path_relationship_body  */
  YYSYMBOL_label_opt = 150,                /* label_opt  */
  YYSYMBOL_properties_opt = 151,           /* properties_opt  */
  YYSYMBOL_expr = 152,                     /* expr  */
  YYSYMBOL_expr_opt = 153,                 /* expr_opt  */
  YYSYMBOL_expr_list = 154,                /* expr_list  */
  YYSYMBOL_expr_list_opt = 155,            /* expr_list_opt  */
  YYSYMBOL_expr_func = 156,                /* expr_func  */
  YYSYMBOL_expr_func_norm = 157,           /* expr_func_norm  */
  YYSYMBOL_expr_func_subexpr = 158,        /* expr_func_subexpr  */
  YYSYMBOL_property_value = 159,           /* property_value  */
  YYSYMBOL_expr_atom = 160,                /* expr_atom  */
  YYSYMBOL_expr_literal = 161,             /* expr_literal  */
  YYSYMBOL_map = 162,                      /* map  */
  YYSYMBOL_map_keyval_list_opt = 163,      /* map_keyval_list_opt  */
  YYSYMBOL_map_keyval_list = 164,          /* map_keyval_list  */
  YYSYMBOL_list = 165,                     /* list  */
  YYSYMBOL_expr_case = 166,                /* expr_case  */
  YYSYMBOL_expr_case_when_list = 167,      /* expr_case_when_list  */
  YYSYMBOL_expr_case_when = 168,           /* expr_case_when  */
  YYSYMBOL_expr_case_default = 169,        /* expr_case_default  */
  YYSYMBOL_expr_var = 170,                 /* expr_var  */
  YYSYMBOL_func_name = 171,                /* func_name  */
  YYSYMBOL_property_key_name = 172,        /* property_key_name  */
  YYSYMBOL_var_name = 173,                 /* var_name  */
  YYSYMBOL_var_name_opt = 174,             /* var_name_opt  */
  YYSYMBOL_label_name = 175,               /* label_name  */
  YYSYMBOL_symbolic_name = 176,            /* symbolic_name  */
  YYSYMBOL_schema_name = 177,              /* schema_name  */
  YYSYMBOL_reserved_keyword = 178,         /* reserved_keyword  */
  YYSYMBOL_safe_keywords = 179,            /* safe_keywords  */
  YYSYMBOL_conflicted_keywords = 180       /* conflicted_keywords  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 203 "src/backend/parser/cypher_gram.y"

//
// internal alias check
static bool has_internal_default_prefix(char *str);

// unique name generation
#define UNIQUE_NAME_NULL_PREFIX AGE_DEFAULT_PREFIX"unique_null_prefix"
static char *create_unique_name(char *prefix_name);
static unsigned long get_a_unique_number(void);

// logical operators
static Node *make_or_expr(Node *lexpr, Node *rexpr, int location);
static Node *make_and_expr(Node *lexpr, Node *rexpr, int location);
static Node *make_xor_expr(Node *lexpr, Node *rexpr, int location);
static Node *make_not_expr(Node *expr, int location);
static Node *make_comparison_and_expr(Node *lexpr, Node *rexpr, int location);
static Node *make_cypher_comparison_aexpr(A_Expr_Kind kind, char *name,
                                          Node *lexpr, Node *rexpr,
                                          int location);
static Node *make_cypher_comparison_boolexpr(BoolExprType boolop, List *args,
                                               int location);

// arithmetic operators
static Node *do_negate(Node *n, int location);
static void do_negate_float(Float *v);

// indirection
static Node *append_indirection(Node *expr, Node *selector);

// literals
static Node *make_int_const(int i, int location);
static Node *make_float_const(char *s, int location);
static Node *make_string_const(char *s, int location);
static Node *make_bool_const(bool b, int location);
static Node *make_null_const(int location);

// typecast
static Node *make_typecast_expr(Node *expr, char *typecast, int location);

// functions
static Node *make_function_expr(List *func_name, List *exprs, int location);
static Node *make_star_function_expr(List *func_name, List *exprs, int location);
static Node *make_distinct_function_expr(List *func_name, List *exprs, int location);
static FuncCall *node_to_agtype(Node* fnode, char *type, int location);

// setops
static Node *make_set_op(SetOperation op, bool all_or_distinct, List *larg,
                         List *rarg);

// VLE
static cypher_relationship *build_VLE_relation(List *left_arg,
                                               cypher_relationship *cr,
                                               Node *right_arg,
                                               int left_arg_location,
                                               int cr_location);
// comparison
static bool is_A_Expr_a_comparison_operation(cypher_comparison_aexpr *a);
static Node *build_comparison_expression(Node *left_grammar_node,
                                         Node *right_grammar_node,
                                         char *opr_name, int location);

#line 395 "src/backend/parser/cypher_gram.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2295

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  418

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    80,    74,     2,
      85,    86,    78,    76,    88,    77,    87,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    89,
      70,    69,    71,    75,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,    73,    92,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    82
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   271,   271,   292,   306,   320,   334,   349,   366,   370,
     377,   384,   423,   431,   475,   479,   486,   498,   513,   515,
     519,   523,   528,   539,   547,   550,   557,   561,   565,   573,
     576,   583,   584,   585,   590,   593,   597,   601,   608,   609,
     610,   611,   612,   616,   636,   642,   651,   661,   667,   674,
     675,   678,   685,   698,   715,   719,   726,   738,   750,   771,
     774,   781,   785,   792,   809,   812,   816,   820,   824,   832,
     835,   843,   846,   853,   884,   923,   937,   942,   949,   969,
     985,   999,  1003,  1010,  1022,  1037,  1051,  1055,  1062,  1080,
    1094,  1099,  1108,  1125,  1128,  1135,  1139,  1146,  1153,  1159,
    1170,  1176,  1180,  1184,  1189,  1200,  1204,  1212,  1213,  1228,
    1243,  1244,  1251,  1255,  1280,  1297,  1306,  1315,  1327,  1343,
    1360,  1363,  1371,  1374,  1375,  1393,  1397,  1401,  1405,  1409,
    1413,  1417,  1421,  1425,  1429,  1433,  1437,  1441,  1445,  1449,
    1453,  1457,  1461,  1465,  1469,  1473,  1477,  1481,  1485,  1489,
    1500,  1511,  1515,  1527,  1539,  1551,  1556,  1567,  1585,  1665,
    1669,  1673,  1678,  1681,  1685,  1689,  1697,  1700,  1704,  1705,
    1709,  1713,  1718,  1733,  1741,  1750,  1768,  1780,  1787,  1788,
    1798,  1809,  1810,  1811,  1815,  1819,  1823,  1827,  1831,  1835,
    1839,  1840,  1844,  1857,  1860,  1864,  1868,  1875,  1887,  1899,
    1913,  1917,  1924,  1937,  1942,  1948,  1964,  1974,  1981,  1985,
    1999,  2002,  2006,  2010,  2014,  2015,  2023,  2024,  2033,  2034,
    2035,  2036,  2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,
    2045,  2046,  2047,  2048,  2049,  2050,  2051,  2052,  2053,  2054,
    2055,  2056,  2057,  2058,  2059,  2060,  2061,  2062,  2063,  2064,
    2065,  2066,  2067,  2068,  2069,  2070,  2071,  2072,  2073,  2074,
    2075,  2079,  2080,  2081,  2082
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "DECIMAL",
  "CG_STRING", "IDENTIFIER", "PARAMETER", "NOT_EQ", "LT_EQ", "GT_EQ",
  "DOT_DOT", "TYPECAST", "PLUS_EQ", "EQ_TILDE", "CONCAT", "ACCESS_PATH",
  "LEFT_CONTAINS", "RIGHT_CONTAINS", "ANY_EXISTS", "ALL_EXISTS", "ALL",
  "ANALYZE", "AND", "AS", "ASC", "ASCENDING", "BY", "CALL", "CASE",
  "COALESCE", "CONTAINS", "CREATE", "DELETE", "DESC", "DESCENDING",
  "DETACH", "DISTINCT", "ELSE", "END_P", "ENDS", "EXISTS", "EXPLAIN",
  "FALSE_P", "IN", "IS", "LIMIT", "MATCH", "MERGE", "NOT", "NULL_P",
  "OPTIONAL", "OR", "ORDER", "REMOVE", "RETURN", "SET", "SKIP", "STARTS",
  "THEN", "TRUE_P", "UNION", "UNWIND", "VERBOSE", "WHEN", "WHERE", "WITH",
  "XOR", "YIELD", "'='", "'<'", "'>'", "'@'", "'|'", "'&'", "'?'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UNARY_MINUS", "'['", "']'", "'('",
  "')'", "'.'", "','", "';'", "':'", "'{'", "'}'", "$accept", "stmt",
  "cypher_stmt", "call_stmt", "yield_item_list", "yield_item",
  "semicolon_opt", "all_or_distinct", "single_query", "query_part_init",
  "query_part_last", "reading_clause_list", "reading_clause",
  "updating_clause_list_0", "updating_clause_list_1", "updating_clause",
  "cypher_varlen_opt", "cypher_range_opt", "cypher_range_idx",
  "cypher_range_idx_opt", "Iconst", "return", "return_item_list",
  "return_item", "order_by_opt", "sort_item_list", "sort_item",
  "order_opt", "skip_opt", "limit_opt", "with", "match", "optional_opt",
  "unwind", "create", "set", "set_item_list", "set_item", "remove",
  "remove_item_list", "remove_item", "delete", "detach_opt", "merge",
  "where_opt", "utility_option_list", "utility_option_elem",
  "utility_option_name", "utility_option_arg", "pattern", "path",
  "anonymous_path", "simple_path_opt_parens", "simple_path", "path_node",
  "path_relationship", "path_relationship_body", "label_opt",
  "properties_opt", "expr", "expr_opt", "expr_list", "expr_list_opt",
  "expr_func", "expr_func_norm", "expr_func_subexpr", "property_value",
  "expr_atom", "expr_literal", "map", "map_keyval_list_opt",
  "map_keyval_list", "list", "expr_case", "expr_case_when_list",
  "expr_case_when", "expr_case_default", "expr_var", "func_name",
  "property_key_name", "var_name", "var_name_opt", "label_name",
  "symbolic_name", "schema_name", "reserved_keyword", "safe_keywords",
  "conflicted_keywords", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-314)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-207)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,     0,    46,   -27,  -314,  -314,    -8,  -314,  2227,   -27,
    -314,    20,  -314,  -314,  -314,  1029,  -314,   -27,   -27,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,   -11,  -314,    24,  -314,  -314,  -314,  -314,
    -314,   794,    11,  -314,    11,  -314,   794,   794,   794,    13,
    -314,   -12,     4,  -314,  -314,     9,  -314,  -314,  -314,  -314,
    -314,    28,  -314,   -27,  -314,  -314,  -314,  2227,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,   869,
      66,    68,  -314,   794,  -314,  -314,   794,   794,   794,  2171,
    1715,  -314,   312,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
      72,  -314,    78,     2,    12,    -9,  -314,  -314,  -314,   -26,
    -314,    38,  -314,  -314,     5,  -314,  1791,  -314,    85,  -314,
    1023,  1099,   470,   553,  -314,  -314,  -314,    11,   794,  -314,
     -27,  -314,   794,  1175,     1,  -314,   794,    11,  2019,   228,
    1791,    88,    95,  1251,  -314,  -314,  -314,  -314,    90,    98,
      93,  -314,  -314,  -314,  -314,  -314,   794,   794,   794,   184,
     794,   794,   794,   794,   794,   794,   794,   794,   794,   125,
     794,   117,   794,   126,   794,   794,   794,   794,   794,   794,
     636,   794,   794,   794,   794,   794,   794,   794,   381,   184,
     184,    79,  -314,   103,    11,   120,   111,   113,   114,   794,
     794,   794,   794,   794,   184,   711,  -314,   -24,  -314,  1331,
     711,   -24,   -17,    88,  -314,  1407,   794,     1,   794,  -314,
     163,     6,   118,   119,   122,   794,  -314,  -314,  -314,  2171,
     794,  2093,  2093,  2093,  -314,   263,  2103,   194,   156,   156,
     156,   156,  1943,   263,   794,  1959,   157,  -314,  1867,   794,
    2019,  2093,  2093,  2093,   194,  2103,   794,  2103,  1883,  1883,
    1883,  2035,  1483,   199,   281,   -15,  -314,  1563,   794,   127,
    -314,    22,  -314,  -314,  2171,    14,  -314,   111,   184,   134,
    -314,  -314,  -314,   194,  -314,  1791,  1639,  -314,   -24,   185,
     711,   159,   184,   -24,   159,   794,  -314,   794,   178,  1791,
    -314,  -314,  -314,  -314,  2171,  1791,   128,  1791,   263,  -314,
     263,   194,  -314,   794,   794,   794,  -314,   184,    44,  -314,
    -314,  -314,  -314,  -314,   133,  -314,   145,   103,   150,   159,
     794,  -314,   794,   177,  -314,   159,   177,  1791,  1791,  -314,
    -314,   794,  1791,   140,   -15,  -314,  -314,  -314,  -314,  -314,
     147,  -314,   177,   138,  -314,   947,  1791,   794,  -314,   177,
     162,  1791,  -314,  -314,   144,    14,  -314,   794,  -314,  -314,
    -314,  -314,  -314,  1791,   162,  -314,  -314,  -314,   217,   218,
    -314,   146,  -314,  -314,   235,  -314,  -314,  -314
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      24,    24,     0,    18,     8,    29,    24,    24,     0,    18,
       1,    22,    19,     2,    23,    34,    24,    18,    18,    98,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   256,   255,   257,
     258,   259,   260,     0,    95,   104,    99,     3,    20,    21,
      24,     0,     0,    90,     0,    76,     0,     0,     0,    33,
      30,     0,    26,    36,    31,     0,    32,    38,    39,    40,
      41,     0,    42,    18,     5,     4,    24,     0,   101,   100,
     103,   102,    97,     9,   184,   185,   186,   213,   179,   226,
     227,   237,   188,   244,   189,   187,     0,   166,     0,   193,
       0,   183,   168,   169,   161,   178,   190,   191,   181,   182,
       0,   205,   209,     0,   210,    79,   105,   107,   109,   110,
     112,     0,   209,    92,    85,    86,    88,   168,    80,    81,
       0,     0,     0,     0,    27,    25,    37,     0,     0,     6,
      18,    96,   255,     0,   204,   200,     0,     0,   128,   151,
     164,   167,     0,     0,   261,   262,   263,   264,     0,   194,
       0,   214,   208,   215,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   162,     0,     0,     0,     0,
     210,     0,   211,   120,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,   234,    58,    59,    54,    57,
     234,    59,    93,    89,     7,     0,     0,   204,     0,   201,
       0,     0,     0,     0,     0,     0,   197,   180,   192,     0,
       0,   130,   132,   134,   160,   155,   140,   141,   135,   136,
     138,   139,   126,   154,     0,   148,     0,   149,   125,     0,
     127,   129,   131,   133,   137,   142,     0,   143,   144,   145,
     146,   147,   163,     0,   158,    93,    14,    17,   234,     0,
     170,     0,   207,   111,     0,   122,   106,   119,   210,     0,
     113,   108,    87,   158,    82,    84,    83,    78,    59,     0,
       0,    69,     0,    59,    69,     0,    75,     0,     0,   203,
     199,   174,   175,   176,     0,   165,     0,   195,   153,   150,
     152,   159,   156,   162,     0,     0,    12,     0,     0,   172,
     171,   121,   212,   124,     0,   123,     0,   120,   115,    69,
       0,    55,     0,    71,    56,    69,    71,    94,   202,   198,
     177,     0,   163,     0,    93,    15,    16,   173,   114,   117,
      44,   116,    71,    60,    61,    64,    70,     0,    53,    71,
      93,   196,   157,    13,    47,   122,    52,     0,    65,    66,
      67,    68,    63,    72,    93,    74,    51,    43,    45,     0,
      48,     0,    62,    73,    50,   118,    49,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,     8,  -314,  -113,  -104,    -6,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,   164,  -314,  -314,  -169,  -167,
    -314,  -314,  -134,   -70,  -209,  -314,  -149,  -314,  -293,  -313,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,    26,  -314,  -314,
      29,  -314,  -314,  -314,  -291,  -314,   154,  -314,  -314,    96,
     -72,  -142,  -314,   121,    33,  -314,   -44,   -96,  -131,   -71,
     -77,  -150,  -314,  -314,   196,  -314,  -314,  -314,  -314,  -295,
    -314,  -314,  -314,  -314,   107,  -144,    31,   104,  -314,  -236,
     -46,   -28,  -314,   -39,   -22,  -314,    -7,  -314
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    79,   295,   296,    13,    70,     4,     5,
      14,    15,    80,    81,    82,    83,   395,   407,   408,   409,
     410,   154,   237,   238,   321,   383,   384,   402,   363,   388,
     155,    84,    85,    86,    87,    88,   148,   149,    89,   144,
     145,    90,    91,    92,   326,    63,    64,    65,   102,   135,
     136,   137,   138,   139,   140,   227,   309,   305,   354,   170,
     293,   171,   172,   121,   147,   123,   253,   124,   125,   126,
     178,   179,   127,   128,   164,   165,   250,   129,   130,   180,
     131,   223,   351,   132,   182,   183,   133,   185
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,    66,   143,    67,   346,   146,   150,   151,   243,     9,
     355,    94,    95,   -28,    17,    18,   251,   107,   107,   241,
     249,   353,     6,   336,    93,   252,   141,    98,   141,   319,
      99,   366,   324,   142,    11,   142,    72,   -91,   163,   248,
      73,    68,   168,   152,   225,   169,    10,   173,   325,     1,
     325,   226,    74,   390,   153,    16,   157,    69,    76,   -35,
      77,   158,    12,     7,   320,   246,   382,   100,   301,   396,
     -35,   224,   389,   345,   -28,    96,   404,    97,   103,   224,
     181,   239,   239,   393,   101,     8,   311,   159,   222,   219,
      66,   245,   331,   229,   255,   142,   134,   220,   370,   405,
     355,   318,   -28,   249,   160,   119,   323,   228,   350,   359,
     255,   141,   184,   413,   365,   261,   262,   263,   142,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   142,   275,
     377,   278,   255,   280,   281,   282,   283,   284,   285,   287,
     288,   289,   290,   291,   292,   294,   297,   406,   348,   225,
     264,   166,   306,   167,   244,   -50,   226,   218,   146,   313,
     150,   315,   316,  -206,   239,   303,   276,   277,   189,   239,
     190,   191,   192,   231,   222,   245,   255,   329,   141,   256,
     302,   142,   258,   260,   335,   142,   259,   198,   317,   337,
     107,   274,   279,   304,   308,   142,   199,   307,   220,   134,
     200,   201,   330,   338,   332,   333,   189,   339,   340,   334,
     343,   358,   360,   349,   203,   341,   362,   369,   371,   378,
     181,   381,   379,   387,   392,   394,   397,   325,   -49,   414,
     415,   374,   209,   210,   211,   212,   213,   214,   406,   215,
     189,   375,   190,   230,   192,   416,   156,   417,   412,   239,
     361,   161,   184,   242,   367,   221,   368,   314,   312,   198,
     310,   380,   222,   356,   411,   181,   373,   122,   199,   142,
     247,   254,   372,   297,   297,   189,   364,  -207,   328,   192,
     357,   -11,   352,   142,     0,     0,   203,     0,     0,   385,
       0,   386,     0,   189,  -207,   181,     0,   184,     0,     0,
     391,   376,     0,  -207,     0,     0,     0,     0,   142,   -11,
       0,   215,   -10,   -11,   -11,   230,   403,   -11,     0,     0,
       0,  -207,     0,     0,     0,     0,   385,   184,   -11,   -11,
       0,     0,   -11,     0,     0,   -11,   -11,   -11,     0,     0,
     -10,     0,   -11,   -11,   -10,   -10,   215,   -11,   -10,   344,
     230,     0,     0,     0,     0,     0,     0,     0,     0,   -10,
     -10,     0,     0,   -10,     0,     0,   -10,   -10,   -10,     0,
     -11,     0,     0,   -10,   -10,     0,     0,     0,   -10,     0,
     217,     0,     0,     0,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -10,    20,    21,    22,    23,    24,    25,    26,    27,
     109,   110,    30,    31,    32,    33,    34,    35,   298,    37,
       0,    38,   111,    40,   112,    41,    42,    43,    44,    45,
     113,   114,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   115,    56,     0,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,   116,   299,
       0,     0,     0,     0,   117,     0,   118,   300,     0,     0,
       0,     0,   119,   104,   105,   106,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,   109,
     110,    30,    31,    32,    33,    34,    35,   235,    37,     0,
      38,   111,    40,   112,    41,    42,    43,    44,    45,   113,
     114,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     115,    56,     0,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,   116,   236,     0,
       0,     0,     0,   117,     0,   118,   104,   105,   106,   107,
     108,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,    27,   109,   110,    30,    31,    32,    33,    34,    35,
     240,    37,     0,    38,   111,    40,   112,    41,    42,    43,
      44,    45,   113,   114,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   115,    56,     0,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
     116,   236,     0,     0,     0,     0,   117,     0,   118,   104,
     105,   106,   107,   108,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,   109,   110,    30,    31,    32,
      33,    34,    35,    36,    37,     0,    38,   111,    40,   112,
      41,    42,    43,    44,    45,   113,   114,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   115,    56,     0,    57,
      58,    59,    60,    61,    62,     0,     0,   286,     0,     0,
       0,     0,     0,   116,   104,   105,   106,   107,   108,   117,
       0,   118,     0,     0,     0,     0,     0,   119,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
     109,   110,    30,    31,    32,    33,    34,    35,    36,    37,
       0,    38,   111,    40,   112,    41,    42,    43,    44,    45,
     113,   114,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   115,    56,     0,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,   116,   236,
       0,     0,     0,     0,   117,     0,   118,   104,   105,   106,
     107,   108,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,   109,   110,    30,    31,    32,    33,    34,
      35,    36,    37,     0,    38,   111,    40,   112,    41,    42,
      43,    44,    45,   113,   114,    47,    48,    49,    50,    51,
      52,    53,    54,    55,   115,    56,     0,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,   116,   104,   105,   106,   107,   108,   117,     0,   118,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,   109,   110,
      30,    31,    32,    33,    34,    35,    36,    37,     0,    38,
     111,    40,   112,    41,    42,    43,    44,    45,   113,   114,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   115,
      56,     0,    57,   162,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,   118,   186,   187,   188,     0,   189,
     119,   190,   191,   192,   193,   194,   195,   196,     0,     0,
     197,     0,   398,   399,     0,     0,     0,     0,   198,     0,
       0,   400,   401,     0,     0,     0,     0,   199,     0,     0,
       0,   200,   201,     0,     0,     0,     0,     0,     0,   202,
       0,     0,     0,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   204,     0,   205,   206,   207,     0,
       0,     0,   208,   209,   210,   211,   212,   213,   214,     0,
     215,   186,   187,   188,   230,   189,   232,   190,   191,   192,
     193,   194,   195,   196,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,   198,     0,     0,    71,     0,     0,
       0,    72,   -91,   199,     0,    73,     0,   200,   201,     0,
       0,     0,     0,     0,     0,   202,   -77,    74,     0,     0,
      75,   203,     0,    76,     0,    77,     0,     0,     0,     0,
     204,    78,   233,   206,   207,     0,     0,     0,   208,   209,
     210,   211,   212,   213,   214,     0,   215,   186,   187,   188,
     230,   189,     0,   190,   191,   192,   193,   194,   195,   196,
       0,     0,   197,   234,     0,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,   201,     0,     0,     0,     0,     0,
       0,   202,     0,     0,     0,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   204,     0,   205,   206,
     207,     0,     0,     0,   208,   209,   210,   211,   212,   213,
     214,     0,   215,   186,   187,   188,   230,   189,     0,   190,
     191,   192,   193,   194,   195,   196,     0,     0,   197,     0,
       0,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
     201,     0,     0,     0,     0,     0,     0,   202,     0,     0,
       0,     0,     0,   203,     0,     0,     0,     0,     0,   246,
       0,     0,   204,     0,   205,   206,   207,     0,     0,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   186,
     187,   188,   230,   189,     0,   190,   191,   192,   193,   194,
     195,   196,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,   201,     0,     0,     0,
       0,     0,     0,   202,     0,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
     205,   206,   207,     0,     0,     0,   208,   209,   210,   211,
     212,   213,   214,     0,   215,     0,     0,   257,   230,   186,
     187,   188,     0,   189,     0,   190,   191,   192,   193,   194,
     195,   196,     0,     0,   197,   322,     0,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,   201,     0,     0,     0,
       0,     0,     0,   202,     0,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
     205,   206,   207,     0,     0,     0,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   186,   187,   188,   230,   189,
       0,   190,   191,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,   201,     0,     0,     0,     0,     0,     0,   202,
       0,     0,     0,     0,     0,   203,   327,     0,     0,     0,
       0,     0,     0,     0,   204,     0,   205,   206,   207,     0,
       0,     0,   208,   209,   210,   211,   212,   213,   214,     0,
     215,   186,   187,   188,   230,   189,     0,   190,   191,   192,
     193,   194,   195,   196,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   200,   201,     0,
       0,     0,     0,     0,     0,   202,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     204,     0,   205,   206,   207,     0,     0,     0,   208,   209,
     210,   211,   212,   213,   214,     0,   215,   342,     0,     0,
     230,   186,   187,   188,     0,   189,     0,   190,   191,   192,
     193,   194,   195,   196,     0,     0,   197,   347,     0,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   200,   201,     0,
       0,     0,     0,     0,     0,   202,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     204,     0,   205,   206,   207,     0,     0,     0,   208,   209,
     210,   211,   212,   213,   214,     0,   215,  -129,  -129,  -129,
     230,   189,  -129,   190,   191,   192,   193,   194,   195,   196,
       0,     0,  -129,     0,     0,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,   201,     0,     0,     0,     0,     0,
       0,  -129,     0,     0,     0,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,  -129,     0,  -129,  -129,
    -129,     0,     0,     0,   208,   209,   210,   211,   212,   213,
     214,     0,   215,   186,   187,   188,   230,   189,     0,   190,
     191,   192,   193,   194,   195,   196,     0,     0,   197,     0,
       0,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
     201,     0,     0,     0,     0,     0,     0,   202,     0,     0,
       0,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   204,     0,   205,   206,   207,     0,     0,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   186,
     187,   188,   216,   189,     0,   190,   191,   192,   193,   194,
     195,   196,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,   201,     0,     0,     0,
       0,     0,     0,   202,     0,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
     205,   206,   207,     0,     0,     0,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   186,   187,   188,   230,   189,
       0,   190,   191,   192,   193,   194,   195,   196,     0,     0,
     197,     0,     0,     0,     0,   189,     0,   190,   198,   192,
       0,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,   201,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,   203,     0,   200,   201,     0,
       0,     0,     0,     0,   204,     0,   205,   206,   207,     0,
       0,   203,   208,   209,   210,   211,   212,   213,   214,     0,
     215,   186,   187,   188,   230,   189,     0,   190,   191,   192,
     193,   194,   195,   196,   214,     0,   215,     0,     0,     0,
     230,   189,     0,   190,   198,   192,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   200,   201,     0,
     198,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,   203,     0,  -207,  -207,     0,     0,     0,     0,     0,
     204,     0,   205,   206,   207,     0,     0,   203,   208,   209,
     210,   211,   212,   213,   214,     0,   215,   186,   187,   188,
     230,   189,     0,   190,   191,   192,   193,   194,   195,   196,
       0,     0,   215,     0,     0,     0,   230,   189,     0,   190,
     198,   192,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,   201,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,   199,     0,   203,     0,   200,
     201,     0,     0,     0,     0,     0,     0,     0,   205,   206,
     207,     0,     0,   203,   208,   209,   210,   211,   212,   213,
     214,     0,   215,     0,     0,   189,   230,   190,   191,   192,
     193,   194,   195,   196,     0,   189,     0,   190,   215,   192,
       0,     0,   230,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   199,   198,     0,     0,   200,   201,     0,
       0,     0,     0,   199,     0,     0,     0,   200,   201,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,   208,   209,
     210,   211,   212,   213,   214,     0,   215,   107,     0,     0,
     230,   211,   212,   213,   214,     0,   215,     0,     0,     0,
     230,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     174,    38,    39,    40,   175,    41,    42,    43,    44,    45,
      46,   176,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   177,    56,    19,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,    56,     0,
      57,    58,    59,    60,    61,    62
};

static const yytype_int16 yycheck[] =
{
      71,     8,    74,     9,   295,    76,    77,    78,   158,     1,
     305,    17,    18,     0,     6,     7,   166,     6,     6,   153,
     164,     7,    22,   259,    16,   167,    72,     3,    74,    53,
       6,   324,   241,    72,    61,    74,    32,    33,   109,    38,
      36,    21,   113,    55,    70,   116,     0,   118,    65,    42,
      65,    77,    48,   366,    66,    63,    47,    37,    54,    55,
      56,    33,    89,    63,    88,    64,   359,    43,   218,   382,
      66,    88,   365,    88,    61,    86,   389,    88,    70,    88,
     119,   152,   153,   374,    60,    85,   228,    93,   134,    87,
      97,   162,    86,    88,    88,   134,    85,    85,   334,   390,
     395,   235,    89,   247,    96,    91,   240,    69,    86,   318,
      88,   157,   119,   404,   323,   186,   187,   188,   157,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   167,   200,
      86,   202,    88,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,     3,   298,    70,
     189,    85,   224,    85,   160,    11,    77,    85,   229,   230,
     231,   232,   233,    85,   235,    86,    49,    50,    12,   240,
      14,    15,    16,    88,   220,   246,    88,   248,   224,    84,
     219,   220,    92,    90,   255,   224,    88,    31,   234,   260,
       6,    66,    66,    90,    83,   234,    40,    77,    85,    85,
      44,    45,    39,   274,    86,    86,    12,    50,   279,    87,
      11,    77,    27,    86,    58,   286,    57,    39,    90,    86,
     259,    71,    77,    46,    84,    78,    88,    65,    11,    11,
      84,   344,    76,    77,    78,    79,    80,    81,     3,    83,
      12,   345,    14,    87,    16,   414,    82,   414,   397,   320,
     320,    97,   259,   157,   325,   134,   327,   231,   229,    31,
     227,   357,   308,   307,   395,   304,   343,    71,    40,   308,
     163,   167,   343,   344,   345,    12,   322,    14,   247,    16,
     308,     0,   304,   322,    -1,    -1,    58,    -1,    -1,   360,
      -1,   362,    -1,    12,    31,   334,    -1,   304,    -1,    -1,
     371,   347,    -1,    40,    -1,    -1,    -1,    -1,   347,    28,
      -1,    83,     0,    32,    33,    87,   387,    36,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,   397,   334,    47,    48,
      -1,    -1,    51,    -1,    -1,    54,    55,    56,    -1,    -1,
      28,    -1,    61,    62,    32,    33,    83,    66,    36,    68,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,    -1,
      89,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,    -1,
      68,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    -1,    -1,
      -1,    -1,    91,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    85,     3,     4,     5,     6,
       7,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,     3,
       4,     5,     6,     7,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    77,     3,     4,     5,     6,     7,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    83,    -1,    85,     3,     4,     5,
       6,     7,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,     3,     4,     5,     6,     7,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,     8,     9,    10,    -1,    12,
      91,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    -1,
      83,     8,     9,    10,    87,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    28,    -1,    -1,
      -1,    32,    33,    40,    -1,    36,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    47,    48,    -1,    -1,
      51,    58,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,
      67,    62,    69,    70,    71,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    -1,    83,     8,     9,    10,
      87,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    -1,    83,     8,     9,    10,    87,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    69,    70,    71,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    -1,    83,     8,
       9,    10,    87,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    -1,    -1,    86,    87,     8,
       9,    10,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,     8,     9,    10,    87,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    -1,
      83,     8,     9,    10,    87,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    -1,    83,    84,    -1,    -1,
      87,     8,     9,    10,    -1,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    -1,    83,     8,     9,    10,
      87,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    -1,    83,     8,     9,    10,    87,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    -1,    83,     8,
       9,    10,    87,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,     8,     9,    10,    87,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    12,    -1,    14,    31,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    45,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    58,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    70,    71,    -1,
      -1,    58,    75,    76,    77,    78,    79,    80,    81,    -1,
      83,     8,     9,    10,    87,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    81,    -1,    83,    -1,    -1,    -1,
      87,    12,    -1,    14,    31,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    58,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    71,    -1,    -1,    58,    75,    76,
      77,    78,    79,    80,    81,    -1,    83,     8,     9,    10,
      87,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    83,    -1,    -1,    -1,    87,    12,    -1,    14,
      31,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    58,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    -1,    -1,    58,    75,    76,    77,    78,    79,    80,
      81,    -1,    83,    -1,    -1,    12,    87,    14,    15,    16,
      17,    18,    19,    20,    -1,    12,    -1,    14,    83,    16,
      -1,    -1,    87,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    31,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    -1,    83,     6,    -1,    -1,
      87,    78,    79,    80,    81,    -1,    83,    -1,    -1,    -1,
      87,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     6,    63,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      63,    64,    65,    66,    67,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    94,    95,   101,   102,    22,    63,    85,    95,
       0,    61,    89,    99,   103,   104,    63,    95,    95,     6,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    40,    41,
      42,    44,    45,    46,    47,    48,    49,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    61,    63,    64,    65,
      66,    67,    68,   138,   139,   140,   179,    99,    21,    37,
     100,    28,    32,    36,    48,    51,    54,    56,    62,    96,
     105,   106,   107,   108,   124,   125,   126,   127,   128,   131,
     134,   135,   136,    95,    99,    99,    86,    88,     3,     6,
      43,    60,   141,    95,     3,     4,     5,     6,     7,    29,
      30,    41,    43,    49,    50,    60,    77,    83,    85,    91,
     152,   156,   157,   158,   160,   161,   162,   165,   166,   170,
     171,   173,   176,   179,    85,   142,   143,   144,   145,   146,
     147,   173,   176,   143,   132,   133,   152,   157,   129,   130,
     152,   152,    55,    66,   114,   123,   108,    47,    33,    99,
      95,   139,    64,   152,   167,   168,    85,    85,   152,   152,
     152,   154,   155,   152,    39,    43,    50,    60,   163,   164,
     172,   176,   177,   178,   179,   180,     8,     9,    10,    12,
      14,    15,    16,    17,    18,    19,    20,    23,    31,    40,
      44,    45,    52,    58,    67,    69,    70,    71,    75,    76,
      77,    78,    79,    80,    81,    83,    87,    68,    85,    87,
      85,   146,   173,   174,    88,    70,    77,   148,    69,    88,
      87,    88,    13,    69,    24,    37,    78,   115,   116,   152,
      37,   115,   142,   154,    99,   152,    64,   167,    38,   168,
     169,   154,   144,   159,   170,    88,    84,    86,    92,    88,
      90,   152,   152,   152,   176,   152,   152,   152,   152,   152,
     152,   152,   152,   152,    66,   152,    49,    50,   152,    66,
     152,   152,   152,   152,   152,   152,    71,   152,   152,   152,
     152,   152,   152,   153,   152,    97,    98,   152,    37,    78,
      86,   154,   176,    86,    90,   150,   143,    77,    83,   149,
     147,   144,   133,   152,   130,   152,   152,   173,   115,    53,
      88,   117,    24,   115,   117,    65,   137,    59,   169,   152,
      39,    86,    86,    86,    87,   152,   172,   152,   152,    50,
     152,   152,    84,    11,    68,    88,   137,    24,   154,    86,
      86,   175,   177,     7,   151,   162,   149,   174,    77,   117,
      27,   116,    57,   121,   173,   117,   121,   152,   152,    39,
     172,    90,   152,   153,    97,    98,   173,    86,    86,    77,
     150,    71,   121,   118,   119,   152,   152,    46,   122,   121,
     122,   152,    84,   137,    78,   109,   122,    88,    25,    26,
      34,    35,   120,   152,   122,   137,     3,   110,   111,   112,
     113,   151,   119,   137,    11,    84,   111,   112
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   102,   102,   103,   103,   103,   104,
     104,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   110,   111,   112,
     112,   113,   114,   114,   115,   115,   116,   116,   116,   117,
     117,   118,   118,   119,   120,   120,   120,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   125,   125,   126,   127,
     128,   129,   129,   130,   130,   131,   132,   132,   133,   134,
     135,   135,   136,   137,   137,   138,   138,   139,   140,   140,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   144,
     145,   145,   146,   146,   147,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   151,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   157,   158,   158,   158,   159,   160,   160,
     160,   160,   160,   160,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   163,   163,   164,   164,   165,   166,   166,
     167,   167,   168,   169,   169,   170,   171,   171,   172,   173,
     174,   174,   175,   176,   177,   177,   178,   178,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   180,   180,   180,   180
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     4,     4,     5,     6,     1,     4,
       2,     4,     5,     7,     1,     3,     3,     1,     0,     1,
       1,     1,     0,     2,     0,     4,     2,     3,     2,     0,
       2,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     2,     0,     1,     3,     0,     1,     1,
       0,     1,     6,     5,     1,     3,     3,     1,     1,     0,
       3,     1,     3,     2,     0,     1,     1,     1,     1,     0,
       2,     0,     2,     7,     6,     4,     1,     0,     4,     2,
       2,     1,     3,     3,     3,     2,     1,     3,     1,     3,
       1,     0,     2,     0,     2,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     1,     3,     1,
       1,     3,     1,     3,     5,     3,     4,     4,     6,     0,
       0,     2,     0,     1,     1,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     2,     4,     4,     3,     3,     4,     6,     3,     4,
       3,     1,     0,     1,     1,     3,     0,     1,     1,     1,
       3,     4,     4,     5,     4,     4,     4,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     3,     5,     3,     5,     4,
       1,     2,     4,     2,     0,     1,     1,     3,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, extra, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, extra); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ag_scanner_t scanner, cypher_yy_extra *extra)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (extra);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ag_scanner_t scanner, cypher_yy_extra *extra)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, extra);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, ag_scanner_t scanner, cypher_yy_extra *extra)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, extra);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, extra); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ag_scanner_t scanner, cypher_yy_extra *extra)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (extra);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (ag_scanner_t scanner, cypher_yy_extra *extra)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* stmt: cypher_stmt semicolon_opt  */
#line 272 "src/backend/parser/cypher_gram.y"
        {
            /*
             * If there is no transition for the lookahead token and the
             * clauses can be reduced to single_query, the parsing is
             * considered successful although it actually isn't.
             *
             * For example, when `MATCH ... CREATE ... MATCH ... ;` query is
             * being parsed, there is no transition for the second `MATCH ...`
             * because the query is wrong but `MATCH .. CREATE ...` is correct
             * so it will be reduced to query_part_last anyway even if there
             * are more tokens to read.
             *
             * Throw syntax error in this case.
             */
            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);
            extra->extra = NULL;
        }
#line 2198 "src/backend/parser/cypher_gram.c"
    break;

  case 3: /* stmt: EXPLAIN cypher_stmt semicolon_opt  */
#line 293 "src/backend/parser/cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = NIL;
            extra->extra = (Node *)estmt;
        }
#line 2216 "src/backend/parser/cypher_gram.c"
    break;

  case 4: /* stmt: EXPLAIN VERBOSE cypher_stmt semicolon_opt  */
#line 307 "src/backend/parser/cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = list_make1(makeDefElem("verbose", NULL, (yylsp[-2])));;
            extra->extra = (Node *)estmt;
        }
#line 2234 "src/backend/parser/cypher_gram.c"
    break;

  case 5: /* stmt: EXPLAIN ANALYZE cypher_stmt semicolon_opt  */
#line 321 "src/backend/parser/cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = list_make1(makeDefElem("analyze", NULL, (yylsp[-2])));;
            extra->extra = (Node *)estmt;
        }
#line 2252 "src/backend/parser/cypher_gram.c"
    break;

  case 6: /* stmt: EXPLAIN ANALYZE VERBOSE cypher_stmt semicolon_opt  */
#line 335 "src/backend/parser/cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = list_make2(makeDefElem("analyze", NULL, (yylsp[-3])),
                                        makeDefElem("verbose", NULL, (yylsp[-2])));;
            extra->extra = (Node *)estmt;
        }
#line 2271 "src/backend/parser/cypher_gram.c"
    break;

  case 7: /* stmt: EXPLAIN '(' utility_option_list ')' cypher_stmt semicolon_opt  */
#line 350 "src/backend/parser/cypher_gram.y"
        {
            ExplainStmt *estmt = NULL;

            if (yychar != YYEOF)
                yyerror(&yylloc, scanner, extra, "syntax error");

            extra->result = (yyvsp[-1].list);

            estmt = makeNode(ExplainStmt);
            estmt->query = NULL;
            estmt->options = (yyvsp[-3].list);
            extra->extra = (Node *)estmt;
        }
#line 2289 "src/backend/parser/cypher_gram.c"
    break;

  case 8: /* cypher_stmt: single_query  */
#line 367 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = (yyvsp[0].list);
        }
#line 2297 "src/backend/parser/cypher_gram.c"
    break;

  case 9: /* cypher_stmt: cypher_stmt UNION all_or_distinct cypher_stmt  */
#line 371 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1(make_set_op(SETOP_UNION, (yyvsp[-1].boolean), (yyvsp[-3].list), (yyvsp[0].list)));
        }
#line 2305 "src/backend/parser/cypher_gram.c"
    break;

  case 10: /* call_stmt: CALL expr_func_norm  */
#line 378 "src/backend/parser/cypher_gram.y"
        {
            cypher_call *n = make_ag_node(cypher_call);
            n->funccall = castNode (FuncCall, (yyvsp[0].node));

            (yyval.node) = (Node *)n;
        }
#line 2316 "src/backend/parser/cypher_gram.c"
    break;

  case 11: /* call_stmt: CALL expr '.' expr  */
#line 385 "src/backend/parser/cypher_gram.y"
        {
            cypher_call *n = make_ag_node(cypher_call);

            if (IsA((yyvsp[0].node), FuncCall) && IsA((yyvsp[-2].node), ColumnRef))
            {
                FuncCall *fc = (FuncCall*)(yyvsp[0].node);
                ColumnRef *cr = (ColumnRef*)(yyvsp[-2].node);
                List *fields = cr->fields;
                String *string = linitial(fields);

                /*
                 * A function can only be qualified with a single schema. So, we
                 * check to see that the function isn't already qualified. There
                 * may be unforeseen cases where we might need to remove this in
                 * the future.
                 */
                if (list_length(fc->funcname) == 1)
                {
                    fc->funcname = lcons(string, fc->funcname);
                    (yyval.node) = (Node*)fc;
                }
                else
                    ereport(ERROR,
                            (errcode(ERRCODE_SYNTAX_ERROR),
                             errmsg("function already qualified"),
                             ag_scanner_errposition((yylsp[-3]), scanner)));

                n->funccall = fc;
                (yyval.node) = (Node *)n;
            }
            else
            {
                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                         errmsg("CALL statement must be a qualified function"),
                         ag_scanner_errposition((yylsp[-3]), scanner)));
            }
        }
#line 2359 "src/backend/parser/cypher_gram.c"
    break;

  case 12: /* call_stmt: CALL expr_func_norm YIELD yield_item_list where_opt  */
#line 424 "src/backend/parser/cypher_gram.y"
        {
            cypher_call *n = make_ag_node(cypher_call);
            n->funccall = castNode (FuncCall, (yyvsp[-3].node));
            n->yield_items = (yyvsp[-1].list);
            n->where = (yyvsp[0].node);
            (yyval.node) = (Node *)n;
        }
#line 2371 "src/backend/parser/cypher_gram.c"
    break;

  case 13: /* call_stmt: CALL expr '.' expr YIELD yield_item_list where_opt  */
#line 432 "src/backend/parser/cypher_gram.y"
        {
            cypher_call *n = make_ag_node(cypher_call);

            if (IsA((yyvsp[-3].node), FuncCall) && IsA((yyvsp[-5].node), ColumnRef))
            {
                FuncCall *fc = (FuncCall*)(yyvsp[-3].node);
                ColumnRef *cr = (ColumnRef*)(yyvsp[-5].node);
                List *fields = cr->fields;
                String *string = linitial(fields);

                /*
                 * A function can only be qualified with a single schema. So, we
                 * check to see that the function isn't already qualified. There
                 * may be unforeseen cases where we might need to remove this in
                 * the future.
                 */
                if (list_length(fc->funcname) == 1)
                {
                    fc->funcname = lcons(string, fc->funcname);
                    (yyval.node) = (Node*)fc;
                }
                else
                    ereport(ERROR,
                            (errcode(ERRCODE_SYNTAX_ERROR),
                             errmsg("function already qualified"),
                             ag_scanner_errposition((yylsp[-6]), scanner)));

                n->funccall = fc;
                n->yield_items = (yyvsp[-1].list);
                n->where = (yyvsp[0].node);
                (yyval.node) = (Node *)n;
            }
            else
            {
                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                         errmsg("CALL statement must be a qualified function"),
                         ag_scanner_errposition((yylsp[-6]), scanner)));
            }
        }
#line 2416 "src/backend/parser/cypher_gram.c"
    break;

  case 14: /* yield_item_list: yield_item  */
#line 476 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 2424 "src/backend/parser/cypher_gram.c"
    break;

  case 15: /* yield_item_list: yield_item_list ',' yield_item  */
#line 480 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 2432 "src/backend/parser/cypher_gram.c"
    break;

  case 16: /* yield_item: expr AS var_name  */
#line 487 "src/backend/parser/cypher_gram.y"
        {
            ResTarget *n;

            n = makeNode(ResTarget);
            n->name = (yyvsp[0].string);
            n->indirection = NIL;
            n->val = (yyvsp[-2].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 2448 "src/backend/parser/cypher_gram.c"
    break;

  case 17: /* yield_item: expr  */
#line 499 "src/backend/parser/cypher_gram.y"
        {
            ResTarget *n;

            n = makeNode(ResTarget);
            n->name = NULL;
            n->indirection = NIL;
            n->val = (yyvsp[0].node);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 2464 "src/backend/parser/cypher_gram.c"
    break;

  case 20: /* all_or_distinct: ALL  */
#line 520 "src/backend/parser/cypher_gram.y"
    {
        (yyval.boolean) = true;
    }
#line 2472 "src/backend/parser/cypher_gram.c"
    break;

  case 21: /* all_or_distinct: DISTINCT  */
#line 524 "src/backend/parser/cypher_gram.y"
    {
        (yyval.boolean) = false;
    }
#line 2480 "src/backend/parser/cypher_gram.c"
    break;

  case 22: /* all_or_distinct: %empty  */
#line 528 "src/backend/parser/cypher_gram.y"
    {
        (yyval.boolean) = false;
    }
#line 2488 "src/backend/parser/cypher_gram.c"
    break;

  case 23: /* single_query: query_part_init query_part_last  */
#line 540 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_concat((yyvsp[-1].list), (yyvsp[0].list));
        }
#line 2496 "src/backend/parser/cypher_gram.c"
    break;

  case 24: /* query_part_init: %empty  */
#line 547 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 2504 "src/backend/parser/cypher_gram.c"
    break;

  case 25: /* query_part_init: query_part_init reading_clause_list updating_clause_list_0 with  */
#line 551 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend(list_concat(list_concat((yyvsp[-3].list), (yyvsp[-2].list)), (yyvsp[-1].list)), (yyvsp[0].node));
        }
#line 2512 "src/backend/parser/cypher_gram.c"
    break;

  case 26: /* query_part_last: reading_clause_list updating_clause_list_1  */
#line 558 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_concat((yyvsp[-1].list), (yyvsp[0].list));
        }
#line 2520 "src/backend/parser/cypher_gram.c"
    break;

  case 27: /* query_part_last: reading_clause_list updating_clause_list_0 return  */
#line 562 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend(list_concat((yyvsp[-2].list), (yyvsp[-1].list)), (yyvsp[0].node));
        }
#line 2528 "src/backend/parser/cypher_gram.c"
    break;

  case 28: /* query_part_last: reading_clause_list call_stmt  */
#line 566 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_concat((yyvsp[-1].list), list_make1((yyvsp[0].node)));
        }
#line 2536 "src/backend/parser/cypher_gram.c"
    break;

  case 29: /* reading_clause_list: %empty  */
#line 573 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 2544 "src/backend/parser/cypher_gram.c"
    break;

  case 30: /* reading_clause_list: reading_clause_list reading_clause  */
#line 577 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-1].list), (yyvsp[0].node));
        }
#line 2552 "src/backend/parser/cypher_gram.c"
    break;

  case 34: /* updating_clause_list_0: %empty  */
#line 590 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 2560 "src/backend/parser/cypher_gram.c"
    break;

  case 36: /* updating_clause_list_1: updating_clause  */
#line 598 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 2568 "src/backend/parser/cypher_gram.c"
    break;

  case 37: /* updating_clause_list_1: updating_clause_list_1 updating_clause  */
#line 602 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-1].list), (yyvsp[0].node));
        }
#line 2576 "src/backend/parser/cypher_gram.c"
    break;

  case 43: /* cypher_varlen_opt: '*' cypher_range_opt  */
#line 617 "src/backend/parser/cypher_gram.y"
        {
            A_Indices *n = (A_Indices *) (yyvsp[0].node);

            if (n->lidx == NULL)
                n->lidx = make_int_const(1, (yylsp[0]));

            if (n->uidx != NULL)
            {
                A_Const    *lidx = (A_Const *) n->lidx;
                A_Const    *uidx = (A_Const *) n->uidx;

                if (lidx->val.ival.ival > uidx->val.ival.ival)
                    ereport(ERROR, (errcode(ERRCODE_SYNTAX_ERROR),
                                    errmsg("invalid range"),
                                    ag_scanner_errposition((yylsp[0]), scanner)));
            }
            (yyval.node) = (Node *) n;
        }
#line 2599 "src/backend/parser/cypher_gram.c"
    break;

  case 44: /* cypher_varlen_opt: %empty  */
#line 636 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 2607 "src/backend/parser/cypher_gram.c"
    break;

  case 45: /* cypher_range_opt: cypher_range_idx  */
#line 643 "src/backend/parser/cypher_gram.y"
        {
            A_Indices  *n;

            n = makeNode(A_Indices);
            n->lidx = copyObject((yyvsp[0].node));
            n->uidx = (yyvsp[0].node);
            (yyval.node) = (Node *) n;
        }
#line 2620 "src/backend/parser/cypher_gram.c"
    break;

  case 46: /* cypher_range_opt: cypher_range_idx_opt DOT_DOT cypher_range_idx_opt  */
#line 652 "src/backend/parser/cypher_gram.y"
        {
            A_Indices  *n;

            n = makeNode(A_Indices);
            n->lidx = (yyvsp[-2].node);
            n->uidx = (yyvsp[0].node);
            (yyval.node) = (Node *) n;
        }
#line 2633 "src/backend/parser/cypher_gram.c"
    break;

  case 47: /* cypher_range_opt: %empty  */
#line 661 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *) makeNode(A_Indices);
        }
#line 2641 "src/backend/parser/cypher_gram.c"
    break;

  case 48: /* cypher_range_idx: Iconst  */
#line 668 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_int_const((yyvsp[0].integer), (yylsp[0]));
        }
#line 2649 "src/backend/parser/cypher_gram.c"
    break;

  case 50: /* cypher_range_idx_opt: %empty  */
#line 675 "src/backend/parser/cypher_gram.y"
                                                        { (yyval.node) = NULL; }
#line 2655 "src/backend/parser/cypher_gram.c"
    break;

  case 52: /* return: RETURN DISTINCT return_item_list order_by_opt skip_opt limit_opt  */
#line 686 "src/backend/parser/cypher_gram.y"
        {
            cypher_return *n;

            n = make_ag_node(cypher_return);
            n->distinct = true;
            n->items = (yyvsp[-3].list);
            n->order_by = (yyvsp[-2].list);
            n->skip = (yyvsp[-1].node);
            n->limit = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 2672 "src/backend/parser/cypher_gram.c"
    break;

  case 53: /* return: RETURN return_item_list order_by_opt skip_opt limit_opt  */
#line 699 "src/backend/parser/cypher_gram.y"
        {
            cypher_return *n;

            n = make_ag_node(cypher_return);
            n->distinct = false;
            n->items = (yyvsp[-3].list);
            n->order_by = (yyvsp[-2].list);
            n->skip = (yyvsp[-1].node);
            n->limit = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 2689 "src/backend/parser/cypher_gram.c"
    break;

  case 54: /* return_item_list: return_item  */
#line 716 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 2697 "src/backend/parser/cypher_gram.c"
    break;

  case 55: /* return_item_list: return_item_list ',' return_item  */
#line 720 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 2705 "src/backend/parser/cypher_gram.c"
    break;

  case 56: /* return_item: expr AS var_name  */
#line 727 "src/backend/parser/cypher_gram.y"
        {
            ResTarget *n;

            n = makeNode(ResTarget);
            n->name = (yyvsp[0].string);
            n->indirection = NIL;
            n->val = (yyvsp[-2].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 2721 "src/backend/parser/cypher_gram.c"
    break;

  case 57: /* return_item: expr  */
#line 739 "src/backend/parser/cypher_gram.y"
        {
            ResTarget *n;

            n = makeNode(ResTarget);
            n->name = NULL;
            n->indirection = NIL;
            n->val = (yyvsp[0].node);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 2737 "src/backend/parser/cypher_gram.c"
    break;

  case 58: /* return_item: '*'  */
#line 751 "src/backend/parser/cypher_gram.y"
        {
            ColumnRef *cr;
            ResTarget *rt;

            cr = makeNode(ColumnRef);
            cr->fields = list_make1(makeNode(A_Star));
            cr->location = (yylsp[0]);

            rt = makeNode(ResTarget);
            rt->name = NULL;
            rt->indirection = NIL;
            rt->val = (Node *)cr;
            rt->location = (yylsp[0]);

            (yyval.node) = (Node *)rt;
        }
#line 2758 "src/backend/parser/cypher_gram.c"
    break;

  case 59: /* order_by_opt: %empty  */
#line 771 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 2766 "src/backend/parser/cypher_gram.c"
    break;

  case 60: /* order_by_opt: ORDER BY sort_item_list  */
#line 775 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = (yyvsp[0].list);
        }
#line 2774 "src/backend/parser/cypher_gram.c"
    break;

  case 61: /* sort_item_list: sort_item  */
#line 782 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 2782 "src/backend/parser/cypher_gram.c"
    break;

  case 62: /* sort_item_list: sort_item_list ',' sort_item  */
#line 786 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 2790 "src/backend/parser/cypher_gram.c"
    break;

  case 63: /* sort_item: expr order_opt  */
#line 793 "src/backend/parser/cypher_gram.y"
        {
            SortBy *n;

            n = makeNode(SortBy);
            n->node = (yyvsp[-1].node);
            n->sortby_dir = (yyvsp[0].integer);
            n->sortby_nulls = SORTBY_NULLS_DEFAULT;
            n->useOp = NIL;
            n->location = -1; // no operator

            (yyval.node) = (Node *)n;
        }
#line 2807 "src/backend/parser/cypher_gram.c"
    break;

  case 64: /* order_opt: %empty  */
#line 809 "src/backend/parser/cypher_gram.y"
        {
            (yyval.integer) = SORTBY_DEFAULT; // is the same with SORTBY_ASC
        }
#line 2815 "src/backend/parser/cypher_gram.c"
    break;

  case 65: /* order_opt: ASC  */
#line 813 "src/backend/parser/cypher_gram.y"
        {
            (yyval.integer) = SORTBY_ASC;
        }
#line 2823 "src/backend/parser/cypher_gram.c"
    break;

  case 66: /* order_opt: ASCENDING  */
#line 817 "src/backend/parser/cypher_gram.y"
        {
            (yyval.integer) = SORTBY_ASC;
        }
#line 2831 "src/backend/parser/cypher_gram.c"
    break;

  case 67: /* order_opt: DESC  */
#line 821 "src/backend/parser/cypher_gram.y"
        {
            (yyval.integer) = SORTBY_DESC;
        }
#line 2839 "src/backend/parser/cypher_gram.c"
    break;

  case 68: /* order_opt: DESCENDING  */
#line 825 "src/backend/parser/cypher_gram.y"
        {
            (yyval.integer) = SORTBY_DESC;
        }
#line 2847 "src/backend/parser/cypher_gram.c"
    break;

  case 69: /* skip_opt: %empty  */
#line 832 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 2855 "src/backend/parser/cypher_gram.c"
    break;

  case 70: /* skip_opt: SKIP expr  */
#line 836 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 2863 "src/backend/parser/cypher_gram.c"
    break;

  case 71: /* limit_opt: %empty  */
#line 843 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 2871 "src/backend/parser/cypher_gram.c"
    break;

  case 72: /* limit_opt: LIMIT expr  */
#line 847 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 2879 "src/backend/parser/cypher_gram.c"
    break;

  case 73: /* with: WITH DISTINCT return_item_list order_by_opt skip_opt limit_opt where_opt  */
#line 854 "src/backend/parser/cypher_gram.y"
        {
            ListCell *li;
            cypher_with *n;

            // check expressions are aliased
            foreach (li, (yyvsp[-4].list))
            {
                ResTarget *item = lfirst(li);

                // variable does not have to be aliased
                if (IsA(item->val, ColumnRef) || item->name)
                    continue;

                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                         errmsg("expression item must be aliased"),
                         errhint("Items can be aliased by using AS."),
                         ag_scanner_errposition(item->location, scanner)));
            }

            n = make_ag_node(cypher_with);
            n->distinct = true;
            n->items = (yyvsp[-4].list);
            n->order_by = (yyvsp[-3].list);
            n->skip = (yyvsp[-2].node);
            n->limit = (yyvsp[-1].node);
            n->where = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 2914 "src/backend/parser/cypher_gram.c"
    break;

  case 74: /* with: WITH return_item_list order_by_opt skip_opt limit_opt where_opt  */
#line 886 "src/backend/parser/cypher_gram.y"
        {
            ListCell *li;
            cypher_with *n;

            // check expressions are aliased
            foreach (li, (yyvsp[-4].list))
            {
                ResTarget *item = lfirst(li);

                // variable does not have to be aliased
                if (IsA(item->val, ColumnRef) || item->name)
                    continue;

                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                         errmsg("expression item must be aliased"),
                         errhint("Items can be aliased by using AS."),
                         ag_scanner_errposition(item->location, scanner)));
            }

            n = make_ag_node(cypher_with);
            n->distinct = false;
            n->items = (yyvsp[-4].list);
            n->order_by = (yyvsp[-3].list);
            n->skip = (yyvsp[-2].node);
            n->limit = (yyvsp[-1].node);
            n->where = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 2949 "src/backend/parser/cypher_gram.c"
    break;

  case 75: /* match: optional_opt MATCH pattern where_opt  */
#line 924 "src/backend/parser/cypher_gram.y"
        {
            cypher_match *n;

            n = make_ag_node(cypher_match);
            n->optional = (yyvsp[-3].boolean);
            n->pattern = (yyvsp[-1].list);
            n->where = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 2964 "src/backend/parser/cypher_gram.c"
    break;

  case 76: /* optional_opt: OPTIONAL  */
#line 938 "src/backend/parser/cypher_gram.y"
        {
            (yyval.boolean) = true;
        }
#line 2972 "src/backend/parser/cypher_gram.c"
    break;

  case 77: /* optional_opt: %empty  */
#line 942 "src/backend/parser/cypher_gram.y"
        {
            (yyval.boolean) = false;
        }
#line 2980 "src/backend/parser/cypher_gram.c"
    break;

  case 78: /* unwind: UNWIND expr AS var_name  */
#line 950 "src/backend/parser/cypher_gram.y"
        {
            ResTarget  *res;
            cypher_unwind *n;

            res = makeNode(ResTarget);
            res->name = (yyvsp[0].string);
            res->val = (Node *) (yyvsp[-2].node);
            res->location = (yylsp[-2]);

            n = make_ag_node(cypher_unwind);
            n->target = res;
            (yyval.node) = (Node *) n;
        }
#line 2998 "src/backend/parser/cypher_gram.c"
    break;

  case 79: /* create: CREATE pattern  */
#line 970 "src/backend/parser/cypher_gram.y"
        {
            cypher_create *n;

            n = make_ag_node(cypher_create);
            n->pattern = (yyvsp[0].list);

            (yyval.node) = (Node *)n;
        }
#line 3011 "src/backend/parser/cypher_gram.c"
    break;

  case 80: /* set: SET set_item_list  */
#line 986 "src/backend/parser/cypher_gram.y"
        {
            cypher_set *n;

            n = make_ag_node(cypher_set);
            n->items = (yyvsp[0].list);
            n->is_remove = false;
            n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 3026 "src/backend/parser/cypher_gram.c"
    break;

  case 81: /* set_item_list: set_item  */
#line 1000 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3034 "src/backend/parser/cypher_gram.c"
    break;

  case 82: /* set_item_list: set_item_list ',' set_item  */
#line 1004 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3042 "src/backend/parser/cypher_gram.c"
    break;

  case 83: /* set_item: expr '=' expr  */
#line 1011 "src/backend/parser/cypher_gram.y"
        {
            cypher_set_item *n;

            n = make_ag_node(cypher_set_item);
            n->prop = (yyvsp[-2].node);
            n->expr = (yyvsp[0].node);
            n->is_add = false;
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3058 "src/backend/parser/cypher_gram.c"
    break;

  case 84: /* set_item: expr PLUS_EQ expr  */
#line 1023 "src/backend/parser/cypher_gram.y"
        {
            cypher_set_item *n;

            n = make_ag_node(cypher_set_item);
            n->prop = (yyvsp[-2].node);
            n->expr = (yyvsp[0].node);
            n->is_add = true;
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3074 "src/backend/parser/cypher_gram.c"
    break;

  case 85: /* remove: REMOVE remove_item_list  */
#line 1038 "src/backend/parser/cypher_gram.y"
        {
            cypher_set *n;

            n = make_ag_node(cypher_set);
            n->items = (yyvsp[0].list);
            n->is_remove = true;
             n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 3089 "src/backend/parser/cypher_gram.c"
    break;

  case 86: /* remove_item_list: remove_item  */
#line 1052 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3097 "src/backend/parser/cypher_gram.c"
    break;

  case 87: /* remove_item_list: remove_item_list ',' remove_item  */
#line 1056 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3105 "src/backend/parser/cypher_gram.c"
    break;

  case 88: /* remove_item: expr  */
#line 1063 "src/backend/parser/cypher_gram.y"
        {
            cypher_set_item *n;

            n = make_ag_node(cypher_set_item);
            n->prop = (yyvsp[0].node);
            n->expr = make_null_const(-1);
            n->is_add = false;

            (yyval.node) = (Node *)n;
        }
#line 3120 "src/backend/parser/cypher_gram.c"
    break;

  case 89: /* delete: detach_opt DELETE expr_list  */
#line 1081 "src/backend/parser/cypher_gram.y"
        {
            cypher_delete *n;

            n = make_ag_node(cypher_delete);
            n->detach = (yyvsp[-2].boolean);
            n->exprs = (yyvsp[0].list);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3135 "src/backend/parser/cypher_gram.c"
    break;

  case 90: /* detach_opt: DETACH  */
#line 1095 "src/backend/parser/cypher_gram.y"
        {
            (yyval.boolean) = true;
        }
#line 3143 "src/backend/parser/cypher_gram.c"
    break;

  case 91: /* detach_opt: %empty  */
#line 1099 "src/backend/parser/cypher_gram.y"
        {
            (yyval.boolean) = false;
        }
#line 3151 "src/backend/parser/cypher_gram.c"
    break;

  case 92: /* merge: MERGE path  */
#line 1109 "src/backend/parser/cypher_gram.y"
        {
            cypher_merge *n;

            n = make_ag_node(cypher_merge);
            n->path = (yyvsp[0].node);

            (yyval.node) = (Node *)n;
        }
#line 3164 "src/backend/parser/cypher_gram.c"
    break;

  case 93: /* where_opt: %empty  */
#line 1125 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3172 "src/backend/parser/cypher_gram.c"
    break;

  case 94: /* where_opt: WHERE expr  */
#line 1129 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 3180 "src/backend/parser/cypher_gram.c"
    break;

  case 95: /* utility_option_list: utility_option_elem  */
#line 1136 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3188 "src/backend/parser/cypher_gram.c"
    break;

  case 96: /* utility_option_list: utility_option_list ',' utility_option_elem  */
#line 1140 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3196 "src/backend/parser/cypher_gram.c"
    break;

  case 97: /* utility_option_elem: utility_option_name utility_option_arg  */
#line 1147 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeDefElem((yyvsp[-1].string), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3204 "src/backend/parser/cypher_gram.c"
    break;

  case 98: /* utility_option_name: IDENTIFIER  */
#line 1154 "src/backend/parser/cypher_gram.y"
        {
            char *modified_name = downcase_truncate_identifier((yyvsp[0].string), strlen((yyvsp[0].string)),
                                                               true);
            (yyval.string) = modified_name;
        }
#line 3214 "src/backend/parser/cypher_gram.c"
    break;

  case 99: /* utility_option_name: safe_keywords  */
#line 1160 "src/backend/parser/cypher_gram.y"
        {
            char *name = pstrdup((yyvsp[0].keyword));
            char *modified_name = downcase_truncate_identifier(name,
                                                               strlen(name),
                                                               true);
            (yyval.string) = modified_name;
        }
#line 3226 "src/backend/parser/cypher_gram.c"
    break;

  case 100: /* utility_option_arg: IDENTIFIER  */
#line 1171 "src/backend/parser/cypher_gram.y"
        {
            char *modified_val = downcase_truncate_identifier((yyvsp[0].string), strlen((yyvsp[0].string)),
                                                              true);
            (yyval.node) = (Node *)makeString(modified_val);
        }
#line 3236 "src/backend/parser/cypher_gram.c"
    break;

  case 101: /* utility_option_arg: INTEGER  */
#line 1177 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeInteger((yyvsp[0].integer));
        }
#line 3244 "src/backend/parser/cypher_gram.c"
    break;

  case 102: /* utility_option_arg: TRUE_P  */
#line 1181 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeString("true");
        }
#line 3252 "src/backend/parser/cypher_gram.c"
    break;

  case 103: /* utility_option_arg: FALSE_P  */
#line 1185 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeString("false");
        }
#line 3260 "src/backend/parser/cypher_gram.c"
    break;

  case 104: /* utility_option_arg: %empty  */
#line 1189 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3268 "src/backend/parser/cypher_gram.c"
    break;

  case 105: /* pattern: path  */
#line 1201 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3276 "src/backend/parser/cypher_gram.c"
    break;

  case 106: /* pattern: pattern ',' path  */
#line 1205 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3284 "src/backend/parser/cypher_gram.c"
    break;

  case 108: /* path: var_name '=' anonymous_path  */
#line 1214 "src/backend/parser/cypher_gram.y"
        {
            cypher_path *p;

            p = (cypher_path *)(yyvsp[0].node);
            p->var_name = (yyvsp[-2].string);
            p->parsed_var_name = (yyvsp[-2].string);
            p->location = (yylsp[-2]);

            (yyval.node) = (Node *)p;
        }
#line 3299 "src/backend/parser/cypher_gram.c"
    break;

  case 109: /* anonymous_path: simple_path_opt_parens  */
#line 1229 "src/backend/parser/cypher_gram.y"
        {
            cypher_path *n;

            n = make_ag_node(cypher_path);
            n->path = (yyvsp[0].list);
            n->var_name = NULL;
            n->parsed_var_name = NULL;
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 3315 "src/backend/parser/cypher_gram.c"
    break;

  case 111: /* simple_path_opt_parens: '(' simple_path ')'  */
#line 1245 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = (yyvsp[-1].list);
        }
#line 3323 "src/backend/parser/cypher_gram.c"
    break;

  case 112: /* simple_path: path_node  */
#line 1252 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3331 "src/backend/parser/cypher_gram.c"
    break;

  case 113: /* simple_path: simple_path path_relationship path_node  */
#line 1256 "src/backend/parser/cypher_gram.y"
        {
            cypher_relationship *cr = NULL;

            /* get the relationship */
            cr = (cypher_relationship *)(yyvsp[-1].node);

            /* if this is a VLE relation node */
            if (cr->varlen != NULL)
            {
                /* build the VLE relation */
                cr = build_VLE_relation((yyvsp[-2].list), cr, (yyvsp[0].node), (yylsp[-2]), (yylsp[-1]));

                /* return the VLE relation in the path */
                (yyval.list) = lappend(lappend((yyvsp[-2].list), cr), (yyvsp[0].node));
            }
            /* otherwise, it is a regular relationship node */
            else
            {
                (yyval.list) = lappend(lappend((yyvsp[-2].list), (yyvsp[-1].node)), (yyvsp[0].node));
            }
        }
#line 3357 "src/backend/parser/cypher_gram.c"
    break;

  case 114: /* path_node: '(' var_name_opt label_opt properties_opt ')'  */
#line 1281 "src/backend/parser/cypher_gram.y"
        {
            cypher_node *n;

            n = make_ag_node(cypher_node);
            n->name = (yyvsp[-3].string);
            n->parsed_name = (yyvsp[-3].string);
            n->label = (yyvsp[-2].string);
            n->parsed_label = (yyvsp[-2].string);
            n->props = (yyvsp[-1].node);
            n->location = (yylsp[-3]);

            (yyval.node) = (Node *)n;
        }
#line 3375 "src/backend/parser/cypher_gram.c"
    break;

  case 115: /* path_relationship: '-' path_relationship_body '-'  */
#line 1298 "src/backend/parser/cypher_gram.y"
        {
            cypher_relationship *n = (cypher_relationship *)(yyvsp[-1].node);

            n->dir = CYPHER_REL_DIR_NONE;
            n->location = (yylsp[-1]);

            (yyval.node) = (yyvsp[-1].node);
        }
#line 3388 "src/backend/parser/cypher_gram.c"
    break;

  case 116: /* path_relationship: '-' path_relationship_body '-' '>'  */
#line 1307 "src/backend/parser/cypher_gram.y"
        {
            cypher_relationship *n = (cypher_relationship *)(yyvsp[-2].node);

            n->dir = CYPHER_REL_DIR_RIGHT;
            n->location = (yylsp[-2]);

            (yyval.node) = (yyvsp[-2].node);
        }
#line 3401 "src/backend/parser/cypher_gram.c"
    break;

  case 117: /* path_relationship: '<' '-' path_relationship_body '-'  */
#line 1316 "src/backend/parser/cypher_gram.y"
        {
            cypher_relationship *n = (cypher_relationship *)(yyvsp[-1].node);

            n->dir = CYPHER_REL_DIR_LEFT;
            n->location = (yylsp[-1]);

            (yyval.node) = (yyvsp[-1].node);
        }
#line 3414 "src/backend/parser/cypher_gram.c"
    break;

  case 118: /* path_relationship_body: '[' var_name_opt label_opt cypher_varlen_opt properties_opt ']'  */
#line 1328 "src/backend/parser/cypher_gram.y"
        {
            cypher_relationship *n;

            n = make_ag_node(cypher_relationship);
            n->name = (yyvsp[-4].string);
            n->parsed_name = (yyvsp[-4].string);
            n->label = (yyvsp[-3].string);
            n->parsed_label = (yyvsp[-3].string);
            n->varlen = (yyvsp[-2].node);
            n->props = (yyvsp[-1].node);

            (yyval.node) = (Node *)n;
        }
#line 3432 "src/backend/parser/cypher_gram.c"
    break;

  case 119: /* path_relationship_body: %empty  */
#line 1343 "src/backend/parser/cypher_gram.y"
        {
            cypher_relationship *n;

            n = make_ag_node(cypher_relationship);
            n->name = NULL;
            n->parsed_name = NULL;
            n->label = NULL;
            n->parsed_label = NULL;
            n->varlen = NULL;
            n->props = NULL;

            (yyval.node) = (Node *)n;
        }
#line 3450 "src/backend/parser/cypher_gram.c"
    break;

  case 120: /* label_opt: %empty  */
#line 1360 "src/backend/parser/cypher_gram.y"
        {
            (yyval.string) = NULL;
        }
#line 3458 "src/backend/parser/cypher_gram.c"
    break;

  case 121: /* label_opt: ':' label_name  */
#line 1364 "src/backend/parser/cypher_gram.y"
        {
            (yyval.string) = (yyvsp[0].string);
        }
#line 3466 "src/backend/parser/cypher_gram.c"
    break;

  case 122: /* properties_opt: %empty  */
#line 1371 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3474 "src/backend/parser/cypher_gram.c"
    break;

  case 124: /* properties_opt: PARAMETER  */
#line 1376 "src/backend/parser/cypher_gram.y"
        {
            cypher_param *n;

            n = make_ag_node(cypher_param);
            n->name = (yyvsp[0].string);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 3488 "src/backend/parser/cypher_gram.c"
    break;

  case 125: /* expr: expr OR expr  */
#line 1394 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_or_expr((yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3496 "src/backend/parser/cypher_gram.c"
    break;

  case 126: /* expr: expr AND expr  */
#line 1398 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_and_expr((yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3504 "src/backend/parser/cypher_gram.c"
    break;

  case 127: /* expr: expr XOR expr  */
#line 1402 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_xor_expr((yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3512 "src/backend/parser/cypher_gram.c"
    break;

  case 128: /* expr: NOT expr  */
#line 1406 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_not_expr((yyvsp[0].node), (yylsp[-1]));
        }
#line 3520 "src/backend/parser/cypher_gram.c"
    break;

  case 129: /* expr: expr '=' expr  */
#line 1410 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), "=", (yylsp[-1]));
        }
#line 3528 "src/backend/parser/cypher_gram.c"
    break;

  case 130: /* expr: expr NOT_EQ expr  */
#line 1414 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), "<>", (yylsp[-1]));
        }
#line 3536 "src/backend/parser/cypher_gram.c"
    break;

  case 131: /* expr: expr '<' expr  */
#line 1418 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), "<", (yylsp[-1]));
        }
#line 3544 "src/backend/parser/cypher_gram.c"
    break;

  case 132: /* expr: expr LT_EQ expr  */
#line 1422 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), "<=", (yylsp[-1]));
        }
#line 3552 "src/backend/parser/cypher_gram.c"
    break;

  case 133: /* expr: expr '>' expr  */
#line 1426 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), ">", (yylsp[-1]));
        }
#line 3560 "src/backend/parser/cypher_gram.c"
    break;

  case 134: /* expr: expr GT_EQ expr  */
#line 1430 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = build_comparison_expression((yyvsp[-2].node), (yyvsp[0].node), ">=", (yylsp[-1]));
        }
#line 3568 "src/backend/parser/cypher_gram.c"
    break;

  case 135: /* expr: expr LEFT_CONTAINS expr  */
#line 1434 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "<@", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3576 "src/backend/parser/cypher_gram.c"
    break;

  case 136: /* expr: expr RIGHT_CONTAINS expr  */
#line 1438 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "@>", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3584 "src/backend/parser/cypher_gram.c"
    break;

  case 137: /* expr: expr '?' expr  */
#line 1442 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "?", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3592 "src/backend/parser/cypher_gram.c"
    break;

  case 138: /* expr: expr ANY_EXISTS expr  */
#line 1446 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "?|", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3600 "src/backend/parser/cypher_gram.c"
    break;

  case 139: /* expr: expr ALL_EXISTS expr  */
#line 1450 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "?&", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3608 "src/backend/parser/cypher_gram.c"
    break;

  case 140: /* expr: expr CONCAT expr  */
#line 1454 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "||", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3616 "src/backend/parser/cypher_gram.c"
    break;

  case 141: /* expr: expr ACCESS_PATH expr  */
#line 1458 "src/backend/parser/cypher_gram.y"
        {
	        (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "#>", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3624 "src/backend/parser/cypher_gram.c"
    break;

  case 142: /* expr: expr '+' expr  */
#line 1462 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "+", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3632 "src/backend/parser/cypher_gram.c"
    break;

  case 143: /* expr: expr '-' expr  */
#line 1466 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "-", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3640 "src/backend/parser/cypher_gram.c"
    break;

  case 144: /* expr: expr '*' expr  */
#line 1470 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "*", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3648 "src/backend/parser/cypher_gram.c"
    break;

  case 145: /* expr: expr '/' expr  */
#line 1474 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "/", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3656 "src/backend/parser/cypher_gram.c"
    break;

  case 146: /* expr: expr '%' expr  */
#line 1478 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "%", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3664 "src/backend/parser/cypher_gram.c"
    break;

  case 147: /* expr: expr '^' expr  */
#line 1482 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "^", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3672 "src/backend/parser/cypher_gram.c"
    break;

  case 148: /* expr: expr IN expr  */
#line 1486 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_IN, "=", (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]));
        }
#line 3680 "src/backend/parser/cypher_gram.c"
    break;

  case 149: /* expr: expr IS NULL_P  */
#line 1490 "src/backend/parser/cypher_gram.y"
        {
            NullTest *n;

            n = makeNode(NullTest);
            n->arg = (Expr *)(yyvsp[-2].node);
            n->nulltesttype = IS_NULL;
            n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 3695 "src/backend/parser/cypher_gram.c"
    break;

  case 150: /* expr: expr IS NOT NULL_P  */
#line 1501 "src/backend/parser/cypher_gram.y"
        {
            NullTest *n;

            n = makeNode(NullTest);
            n->arg = (Expr *)(yyvsp[-3].node);
            n->nulltesttype = IS_NOT_NULL;
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3710 "src/backend/parser/cypher_gram.c"
    break;

  case 151: /* expr: '-' expr  */
#line 1512 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = do_negate((yyvsp[0].node), (yylsp[-1]));
        }
#line 3718 "src/backend/parser/cypher_gram.c"
    break;

  case 152: /* expr: expr STARTS WITH expr  */
#line 1516 "src/backend/parser/cypher_gram.y"
        {
            cypher_string_match *n;

            n = make_ag_node(cypher_string_match);
            n->operation = CSMO_STARTS_WITH;
            n->lhs = (yyvsp[-3].node);
            n->rhs = (yyvsp[0].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3734 "src/backend/parser/cypher_gram.c"
    break;

  case 153: /* expr: expr ENDS WITH expr  */
#line 1528 "src/backend/parser/cypher_gram.y"
        {
            cypher_string_match *n;

            n = make_ag_node(cypher_string_match);
            n->operation = CSMO_ENDS_WITH;
            n->lhs = (yyvsp[-3].node);
            n->rhs = (yyvsp[0].node);
            n->location = (yylsp[-2]);

            (yyval.node) = (Node *)n;
        }
#line 3750 "src/backend/parser/cypher_gram.c"
    break;

  case 154: /* expr: expr CONTAINS expr  */
#line 1540 "src/backend/parser/cypher_gram.y"
        {
            cypher_string_match *n;

            n = make_ag_node(cypher_string_match);
            n->operation = CSMO_CONTAINS;
            n->lhs = (yyvsp[-2].node);
            n->rhs = (yyvsp[0].node);
            n->location = (yylsp[-1]);

            (yyval.node) = (Node *)n;
        }
#line 3766 "src/backend/parser/cypher_gram.c"
    break;

  case 155: /* expr: expr EQ_TILDE expr  */
#line 1552 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_function_expr(list_make1(makeString("eq_tilde")),
                                    list_make2((yyvsp[-2].node), (yyvsp[0].node)), (yylsp[-1]));
        }
#line 3775 "src/backend/parser/cypher_gram.c"
    break;

  case 156: /* expr: expr '[' expr ']'  */
#line 1557 "src/backend/parser/cypher_gram.y"
        {
            A_Indices *i;

            i = makeNode(A_Indices);
            i->is_slice = false;
            i->lidx = NULL;
            i->uidx = (yyvsp[-1].node);

            (yyval.node) = append_indirection((yyvsp[-3].node), (Node *)i);
        }
#line 3790 "src/backend/parser/cypher_gram.c"
    break;

  case 157: /* expr: expr '[' expr_opt DOT_DOT expr_opt ']'  */
#line 1568 "src/backend/parser/cypher_gram.y"
        {
            A_Indices *i;

            i = makeNode(A_Indices);
            i->is_slice = true;
            i->lidx = (yyvsp[-3].node);
            i->uidx = (yyvsp[-1].node);

            (yyval.node) = append_indirection((yyvsp[-5].node), (Node *)i);
        }
#line 3805 "src/backend/parser/cypher_gram.c"
    break;

  case 158: /* expr: expr '.' expr  */
#line 1586 "src/backend/parser/cypher_gram.y"
        {
            /*
             * This checks for the grammar rule -
             *     expr '.' property_key_name
             * where the expr can be anything.
             * Note: A property_key_name ends up as a ColumnRef.
             * Note: We restrict some of what the expr can be, for now. More may
             *       need to be added later to loosen the restrictions. Or, it
             *       may need to be removed.
             */
            if (IsA((yyvsp[0].node), ColumnRef) &&
                (IsA((yyvsp[-2].node), ExtensibleNode) ||
                 IsA((yyvsp[-2].node), ColumnRef) ||
                 IsA((yyvsp[-2].node), A_Indirection)))
            {
                ColumnRef *cr = (ColumnRef*)(yyvsp[0].node);
                List *fields = cr->fields;
                String *string = linitial(fields);

                (yyval.node) = append_indirection((yyvsp[-2].node), (Node*)string);
            }
            /*
             * This checks for the grammar rule -
             *    symbolic_name '.' expr
             * Where expr is a function call.
             * Note: symbolic_name ends up as a ColumnRef
             */
            else if (IsA((yyvsp[0].node), FuncCall) && IsA((yyvsp[-2].node), ColumnRef))
            {
                FuncCall *fc = (FuncCall*)(yyvsp[0].node);
                ColumnRef *cr = (ColumnRef*)(yyvsp[-2].node);
                List *fields = cr->fields;
                String *string = linitial(fields);

                /*
                 * A function can only be qualified with a single schema. So, we
                 * check to see that the function isn't already qualified. There
                 * may be unforeseen cases where we might need to remove this in
                 * the future.
                 */
                if (list_length(fc->funcname) == 1)
                {
                    fc->funcname = lcons(string, fc->funcname);
                    (yyval.node) = (Node*)fc;
                }
                else
                    ereport(ERROR,
                            (errcode(ERRCODE_SYNTAX_ERROR),
                             errmsg("function already qualified"),
                             ag_scanner_errposition((yylsp[-2]), scanner)));
            }
            /* allow a function to be used as a parent of an indirection */
            else if (IsA((yyvsp[-2].node), FuncCall) && IsA((yyvsp[0].node), ColumnRef))
            {
                ColumnRef *cr = (ColumnRef*)(yyvsp[0].node);
                List *fields = cr->fields;
                String *string = linitial(fields);

                (yyval.node) = append_indirection((yyvsp[-2].node), (Node*)string);
            }
            else if (IsA((yyvsp[-2].node), FuncCall) && IsA((yyvsp[0].node), A_Indirection))
            {
                ereport(ERROR,
                            (errcode(ERRCODE_SYNTAX_ERROR),
                             errmsg("not supported A_Indirection indirection"),
                             ag_scanner_errposition((yylsp[-2]), scanner)));
            }
            /*
             * All other types of expression indirections are currently not
             * supported
             */
            else
            {
                ereport(ERROR,
                        (errcode(ERRCODE_SYNTAX_ERROR),
                         errmsg("invalid indirection syntax"),
                         ag_scanner_errposition((yylsp[-2]), scanner)));
            }
        }
#line 3889 "src/backend/parser/cypher_gram.c"
    break;

  case 159: /* expr: expr '-' '>' expr  */
#line 1666 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (Node *)makeSimpleA_Expr(AEXPR_OP, "->", (yyvsp[-3].node), (yyvsp[0].node), (yylsp[-2]));
        }
#line 3897 "src/backend/parser/cypher_gram.c"
    break;

  case 160: /* expr: expr TYPECAST symbolic_name  */
#line 1670 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_typecast_expr((yyvsp[-2].node), (yyvsp[0].string), (yylsp[-1]));
        }
#line 3905 "src/backend/parser/cypher_gram.c"
    break;

  case 162: /* expr_opt: %empty  */
#line 1678 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 3913 "src/backend/parser/cypher_gram.c"
    break;

  case 164: /* expr_list: expr  */
#line 1686 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 3921 "src/backend/parser/cypher_gram.c"
    break;

  case 165: /* expr_list: expr_list ',' expr  */
#line 1690 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-2].list), (yyvsp[0].node));
        }
#line 3929 "src/backend/parser/cypher_gram.c"
    break;

  case 166: /* expr_list_opt: %empty  */
#line 1697 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 3937 "src/backend/parser/cypher_gram.c"
    break;

  case 170: /* expr_func_norm: func_name '(' ')'  */
#line 1710 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_function_expr((yyvsp[-2].list), NIL, (yylsp[-2]));
        }
#line 3945 "src/backend/parser/cypher_gram.c"
    break;

  case 171: /* expr_func_norm: func_name '(' expr_list ')'  */
#line 1714 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_function_expr((yyvsp[-3].list), (yyvsp[-1].list), (yylsp[-2]));
        }
#line 3953 "src/backend/parser/cypher_gram.c"
    break;

  case 172: /* expr_func_norm: func_name '(' '*' ')'  */
#line 1719 "src/backend/parser/cypher_gram.y"
        {
            /*
             * We consider AGGREGATE(*) to invoke a parameterless
             * aggregate.  This does the right thing for COUNT(*),
             * and there are no other aggregates in SQL that accept
             * '*' as parameter.
             *
             * The FuncCall node is marked agg_star = true by make_star_function_expr,
             * so that later processing can detect what the argument
             * really was.
             */
            FuncCall *n = (FuncCall *)make_star_function_expr((yyvsp[-3].list), NIL, (yylsp[-3]));
            (yyval.node) = (Node *)n;
         }
#line 3972 "src/backend/parser/cypher_gram.c"
    break;

  case 173: /* expr_func_norm: func_name '(' DISTINCT expr_list ')'  */
#line 1734 "src/backend/parser/cypher_gram.y"
        {
            FuncCall *n = (FuncCall *)make_distinct_function_expr((yyvsp[-4].list), (yyvsp[-1].list), (yylsp[-4]));
            (yyval.node) = (Node *)n;
        }
#line 3981 "src/backend/parser/cypher_gram.c"
    break;

  case 174: /* expr_func_subexpr: COALESCE '(' expr_list ')'  */
#line 1742 "src/backend/parser/cypher_gram.y"
        {
            CoalesceExpr *c;

            c = makeNode(CoalesceExpr);
            c->args = (yyvsp[-1].list);
            c->location = (yylsp[-3]);
            (yyval.node) = (Node *) c;
        }
#line 3994 "src/backend/parser/cypher_gram.c"
    break;

  case 175: /* expr_func_subexpr: EXISTS '(' anonymous_path ')'  */
#line 1751 "src/backend/parser/cypher_gram.y"
        {
            cypher_sub_pattern *sub;
            SubLink    *n;

            sub = make_ag_node(cypher_sub_pattern);
            sub->kind = CSP_EXISTS;
            sub->pattern = list_make1((yyvsp[-1].node));

            n = makeNode(SubLink);
            n->subLinkType = EXISTS_SUBLINK;
            n->subLinkId = 0;
            n->testexpr = NULL;
            n->operName = NIL;
            n->subselect = (Node *) sub;
            n->location = (yylsp[-3]);
            (yyval.node) = (Node *)node_to_agtype((Node *)n, "boolean", (yylsp[-3]));
        }
#line 4016 "src/backend/parser/cypher_gram.c"
    break;

  case 176: /* expr_func_subexpr: EXISTS '(' property_value ')'  */
#line 1769 "src/backend/parser/cypher_gram.y"
        {
            FuncCall *n;
            n = makeFuncCall(list_make1(makeString("exists")),
                                    list_make1((yyvsp[-1].node)), COERCE_SQL_SYNTAX, (yylsp[-2]));

            (yyval.node) = (Node *)node_to_agtype((Node *)n, "boolean", (yylsp[-2]));

        }
#line 4029 "src/backend/parser/cypher_gram.c"
    break;

  case 177: /* property_value: expr_var '.' property_key_name  */
#line 1781 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = append_indirection((yyvsp[-2].node), (Node *)makeString((yyvsp[0].string)));
        }
#line 4037 "src/backend/parser/cypher_gram.c"
    break;

  case 179: /* expr_atom: PARAMETER  */
#line 1789 "src/backend/parser/cypher_gram.y"
        {
            cypher_param *n;

            n = make_ag_node(cypher_param);
            n->name = (yyvsp[0].string);
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 4051 "src/backend/parser/cypher_gram.c"
    break;

  case 180: /* expr_atom: '(' expr ')'  */
#line 1799 "src/backend/parser/cypher_gram.y"
        {
            Node *n = (yyvsp[-1].node);

            if (is_ag_node(n, cypher_comparison_aexpr) ||
                is_ag_node(n, cypher_comparison_boolexpr))
            {
                n = (Node *)node_to_agtype(n, "boolean", (yylsp[-1]));
            }
            (yyval.node) = n;
        }
#line 4066 "src/backend/parser/cypher_gram.c"
    break;

  case 184: /* expr_literal: INTEGER  */
#line 1816 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_int_const((yyvsp[0].integer), (yylsp[0]));
        }
#line 4074 "src/backend/parser/cypher_gram.c"
    break;

  case 185: /* expr_literal: DECIMAL  */
#line 1820 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_float_const((yyvsp[0].string), (yylsp[0]));
        }
#line 4082 "src/backend/parser/cypher_gram.c"
    break;

  case 186: /* expr_literal: CG_STRING  */
#line 1824 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_string_const((yyvsp[0].string), (yylsp[0]));
        }
#line 4090 "src/backend/parser/cypher_gram.c"
    break;

  case 187: /* expr_literal: TRUE_P  */
#line 1828 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_bool_const(true, (yylsp[0]));
        }
#line 4098 "src/backend/parser/cypher_gram.c"
    break;

  case 188: /* expr_literal: FALSE_P  */
#line 1832 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_bool_const(false, (yylsp[0]));
        }
#line 4106 "src/backend/parser/cypher_gram.c"
    break;

  case 189: /* expr_literal: NULL_P  */
#line 1836 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = make_null_const((yylsp[0]));
        }
#line 4114 "src/backend/parser/cypher_gram.c"
    break;

  case 192: /* map: '{' map_keyval_list_opt '}'  */
#line 1845 "src/backend/parser/cypher_gram.y"
        {
            cypher_map *n;

            n = make_ag_node(cypher_map);
            n->keyvals = (yyvsp[-1].list);

            (yyval.node) = (Node *)n;
        }
#line 4127 "src/backend/parser/cypher_gram.c"
    break;

  case 193: /* map_keyval_list_opt: %empty  */
#line 1857 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = NIL;
        }
#line 4135 "src/backend/parser/cypher_gram.c"
    break;

  case 195: /* map_keyval_list: property_key_name ':' expr  */
#line 1865 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make2(makeString((yyvsp[-2].string)), (yyvsp[0].node));
        }
#line 4143 "src/backend/parser/cypher_gram.c"
    break;

  case 196: /* map_keyval_list: map_keyval_list ',' property_key_name ':' expr  */
#line 1869 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend(lappend((yyvsp[-4].list), makeString((yyvsp[-2].string))), (yyvsp[0].node));
        }
#line 4151 "src/backend/parser/cypher_gram.c"
    break;

  case 197: /* list: '[' expr_list_opt ']'  */
#line 1876 "src/backend/parser/cypher_gram.y"
        {
            cypher_list *n;

            n = make_ag_node(cypher_list);
            n->elems = (yyvsp[-1].list);

            (yyval.node) = (Node *)n;
        }
#line 4164 "src/backend/parser/cypher_gram.c"
    break;

  case 198: /* expr_case: CASE expr expr_case_when_list expr_case_default END_P  */
#line 1888 "src/backend/parser/cypher_gram.y"
        {
            CaseExpr *n;

            n = makeNode(CaseExpr);
            n->casetype = InvalidOid;
            n->arg = (Expr *) (yyvsp[-3].node);
            n->args = (yyvsp[-2].list);
            n->defresult = (Expr *) (yyvsp[-1].node);
            n->location = (yylsp[-4]);
            (yyval.node) = (Node *) n;
        }
#line 4180 "src/backend/parser/cypher_gram.c"
    break;

  case 199: /* expr_case: CASE expr_case_when_list expr_case_default END_P  */
#line 1900 "src/backend/parser/cypher_gram.y"
        {
            CaseExpr *n;

            n = makeNode(CaseExpr);
            n->casetype = InvalidOid;
            n->args = (yyvsp[-2].list);
            n->defresult = (Expr *) (yyvsp[-1].node);
            n->location = (yylsp[-3]);
            (yyval.node) = (Node *) n;
        }
#line 4195 "src/backend/parser/cypher_gram.c"
    break;

  case 200: /* expr_case_when_list: expr_case_when  */
#line 1914 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1((yyvsp[0].node));
        }
#line 4203 "src/backend/parser/cypher_gram.c"
    break;

  case 201: /* expr_case_when_list: expr_case_when_list expr_case_when  */
#line 1918 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = lappend((yyvsp[-1].list), (yyvsp[0].node));
        }
#line 4211 "src/backend/parser/cypher_gram.c"
    break;

  case 202: /* expr_case_when: WHEN expr THEN expr  */
#line 1925 "src/backend/parser/cypher_gram.y"
        {
            CaseWhen   *n;

            n = makeNode(CaseWhen);
            n->expr = (Expr *) (yyvsp[-2].node);
            n->result = (Expr *) (yyvsp[0].node);
            n->location = (yylsp[-3]);
            (yyval.node) = (Node *) n;
        }
#line 4225 "src/backend/parser/cypher_gram.c"
    break;

  case 203: /* expr_case_default: ELSE expr  */
#line 1938 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 4233 "src/backend/parser/cypher_gram.c"
    break;

  case 204: /* expr_case_default: %empty  */
#line 1942 "src/backend/parser/cypher_gram.y"
        {
            (yyval.node) = NULL;
        }
#line 4241 "src/backend/parser/cypher_gram.c"
    break;

  case 205: /* expr_var: var_name  */
#line 1949 "src/backend/parser/cypher_gram.y"
        {
            ColumnRef *n;

            n = makeNode(ColumnRef);
            n->fields = list_make1(makeString((yyvsp[0].string)));
            n->location = (yylsp[0]);

            (yyval.node) = (Node *)n;
        }
#line 4255 "src/backend/parser/cypher_gram.c"
    break;

  case 206: /* func_name: symbolic_name  */
#line 1965 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make1(makeString((yyvsp[0].string)));
        }
#line 4263 "src/backend/parser/cypher_gram.c"
    break;

  case 207: /* func_name: safe_keywords '.' symbolic_name  */
#line 1975 "src/backend/parser/cypher_gram.y"
        {
            (yyval.list) = list_make2(makeString((char *)(yyvsp[-2].keyword)), makeString((yyvsp[0].string)));
        }
#line 4271 "src/backend/parser/cypher_gram.c"
    break;

  case 209: /* var_name: symbolic_name  */
#line 1986 "src/backend/parser/cypher_gram.y"
    {
        if (has_internal_default_prefix((yyvsp[0].string)))
        {
            ereport(ERROR,
                (errcode(ERRCODE_SYNTAX_ERROR),
                    errmsg("%s is only for internal use", AGE_DEFAULT_PREFIX),
                    ag_scanner_errposition((yylsp[0]), scanner)));
        }
    }
#line 4285 "src/backend/parser/cypher_gram.c"
    break;

  case 210: /* var_name_opt: %empty  */
#line 1999 "src/backend/parser/cypher_gram.y"
        {
            (yyval.string) = NULL;
        }
#line 4293 "src/backend/parser/cypher_gram.c"
    break;

  case 215: /* schema_name: reserved_keyword  */
#line 2016 "src/backend/parser/cypher_gram.y"
        {
            /* we don't need to copy it, as it already has been */
            (yyval.string) = (char *) (yyvsp[0].keyword);
        }
#line 4302 "src/backend/parser/cypher_gram.c"
    break;

  case 218: /* safe_keywords: ALL  */
#line 2033 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 4308 "src/backend/parser/cypher_gram.c"
    break;

  case 219: /* safe_keywords: ANALYZE  */
#line 2034 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 7); }
#line 4314 "src/backend/parser/cypher_gram.c"
    break;

  case 220: /* safe_keywords: AND  */
#line 2035 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 4320 "src/backend/parser/cypher_gram.c"
    break;

  case 221: /* safe_keywords: AS  */
#line 2036 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 4326 "src/backend/parser/cypher_gram.c"
    break;

  case 222: /* safe_keywords: ASC  */
#line 2037 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 4332 "src/backend/parser/cypher_gram.c"
    break;

  case 223: /* safe_keywords: ASCENDING  */
#line 2038 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 9); }
#line 4338 "src/backend/parser/cypher_gram.c"
    break;

  case 224: /* safe_keywords: BY  */
#line 2039 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 4344 "src/backend/parser/cypher_gram.c"
    break;

  case 225: /* safe_keywords: CALL  */
#line 2040 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4350 "src/backend/parser/cypher_gram.c"
    break;

  case 226: /* safe_keywords: CASE  */
#line 2041 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4356 "src/backend/parser/cypher_gram.c"
    break;

  case 227: /* safe_keywords: COALESCE  */
#line 2042 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 4362 "src/backend/parser/cypher_gram.c"
    break;

  case 228: /* safe_keywords: CONTAINS  */
#line 2043 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 4368 "src/backend/parser/cypher_gram.c"
    break;

  case 229: /* safe_keywords: CREATE  */
#line 2044 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4374 "src/backend/parser/cypher_gram.c"
    break;

  case 230: /* safe_keywords: DELETE  */
#line 2045 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4380 "src/backend/parser/cypher_gram.c"
    break;

  case 231: /* safe_keywords: DESC  */
#line 2046 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4386 "src/backend/parser/cypher_gram.c"
    break;

  case 232: /* safe_keywords: DESCENDING  */
#line 2047 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 10); }
#line 4392 "src/backend/parser/cypher_gram.c"
    break;

  case 233: /* safe_keywords: DETACH  */
#line 2048 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4398 "src/backend/parser/cypher_gram.c"
    break;

  case 234: /* safe_keywords: DISTINCT  */
#line 2049 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 4404 "src/backend/parser/cypher_gram.c"
    break;

  case 235: /* safe_keywords: ELSE  */
#line 2050 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4410 "src/backend/parser/cypher_gram.c"
    break;

  case 236: /* safe_keywords: ENDS  */
#line 2051 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4416 "src/backend/parser/cypher_gram.c"
    break;

  case 237: /* safe_keywords: EXISTS  */
#line 2052 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4422 "src/backend/parser/cypher_gram.c"
    break;

  case 238: /* safe_keywords: EXPLAIN  */
#line 2053 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 7); }
#line 4428 "src/backend/parser/cypher_gram.c"
    break;

  case 239: /* safe_keywords: IN  */
#line 2054 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 4434 "src/backend/parser/cypher_gram.c"
    break;

  case 240: /* safe_keywords: IS  */
#line 2055 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 4440 "src/backend/parser/cypher_gram.c"
    break;

  case 241: /* safe_keywords: LIMIT  */
#line 2056 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4446 "src/backend/parser/cypher_gram.c"
    break;

  case 242: /* safe_keywords: MATCH  */
#line 2057 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4452 "src/backend/parser/cypher_gram.c"
    break;

  case 243: /* safe_keywords: MERGE  */
#line 2058 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4458 "src/backend/parser/cypher_gram.c"
    break;

  case 244: /* safe_keywords: NOT  */
#line 2059 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 4464 "src/backend/parser/cypher_gram.c"
    break;

  case 245: /* safe_keywords: OPTIONAL  */
#line 2060 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 8); }
#line 4470 "src/backend/parser/cypher_gram.c"
    break;

  case 246: /* safe_keywords: OR  */
#line 2061 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 2); }
#line 4476 "src/backend/parser/cypher_gram.c"
    break;

  case 247: /* safe_keywords: ORDER  */
#line 2062 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 4482 "src/backend/parser/cypher_gram.c"
    break;

  case 248: /* safe_keywords: REMOVE  */
#line 2063 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4488 "src/backend/parser/cypher_gram.c"
    break;

  case 249: /* safe_keywords: RETURN  */
#line 2064 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4494 "src/backend/parser/cypher_gram.c"
    break;

  case 250: /* safe_keywords: SET  */
#line 2065 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 4500 "src/backend/parser/cypher_gram.c"
    break;

  case 251: /* safe_keywords: SKIP  */
#line 2066 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4506 "src/backend/parser/cypher_gram.c"
    break;

  case 252: /* safe_keywords: STARTS  */
#line 2067 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4512 "src/backend/parser/cypher_gram.c"
    break;

  case 253: /* safe_keywords: THEN  */
#line 2068 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4518 "src/backend/parser/cypher_gram.c"
    break;

  case 254: /* safe_keywords: UNION  */
#line 2069 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 4524 "src/backend/parser/cypher_gram.c"
    break;

  case 255: /* safe_keywords: WHEN  */
#line 2070 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4530 "src/backend/parser/cypher_gram.c"
    break;

  case 256: /* safe_keywords: VERBOSE  */
#line 2071 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 7); }
#line 4536 "src/backend/parser/cypher_gram.c"
    break;

  case 257: /* safe_keywords: WHERE  */
#line 2072 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 4542 "src/backend/parser/cypher_gram.c"
    break;

  case 258: /* safe_keywords: WITH  */
#line 2073 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 4); }
#line 4548 "src/backend/parser/cypher_gram.c"
    break;

  case 259: /* safe_keywords: XOR  */
#line 2074 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 3); }
#line 4554 "src/backend/parser/cypher_gram.c"
    break;

  case 260: /* safe_keywords: YIELD  */
#line 2075 "src/backend/parser/cypher_gram.y"
                 { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 4560 "src/backend/parser/cypher_gram.c"
    break;

  case 261: /* conflicted_keywords: END_P  */
#line 2079 "src/backend/parser/cypher_gram.y"
              { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 5); }
#line 4566 "src/backend/parser/cypher_gram.c"
    break;

  case 262: /* conflicted_keywords: FALSE_P  */
#line 2080 "src/backend/parser/cypher_gram.y"
              { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 7); }
#line 4572 "src/backend/parser/cypher_gram.c"
    break;

  case 263: /* conflicted_keywords: NULL_P  */
#line 2081 "src/backend/parser/cypher_gram.y"
              { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4578 "src/backend/parser/cypher_gram.c"
    break;

  case 264: /* conflicted_keywords: TRUE_P  */
#line 2082 "src/backend/parser/cypher_gram.y"
              { (yyval.keyword) = pnstrdup((yyvsp[0].keyword), 6); }
#line 4584 "src/backend/parser/cypher_gram.c"
    break;


#line 4588 "src/backend/parser/cypher_gram.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, extra, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, extra);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, extra);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, extra, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, extra);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, extra);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 2085 "src/backend/parser/cypher_gram.y"


/*
 * logical operators
 */

static Node *make_or_expr(Node *lexpr, Node *rexpr, int location)
{
    // flatten "a OR b OR c ..." to a single BoolExpr on sight
    if (IsA(lexpr, BoolExpr))
    {
        BoolExpr *bexpr = (BoolExpr *)lexpr;

        if (bexpr->boolop == OR_EXPR)
        {
            bexpr->args = lappend(bexpr->args, rexpr);

            return (Node *)bexpr;
        }
    }

    return (Node *)makeBoolExpr(OR_EXPR, list_make2(lexpr, rexpr), location);
}

static Node *make_and_expr(Node *lexpr, Node *rexpr, int location)
{
    // flatten "a AND b AND c ..." to a single BoolExpr on sight
    if (IsA(lexpr, BoolExpr))
    {
        BoolExpr *bexpr = (BoolExpr *)lexpr;

        if (bexpr->boolop == AND_EXPR)
        {
            bexpr->args = lappend(bexpr->args, rexpr);

            return (Node *)bexpr;
        }
    }

    return (Node *)makeBoolExpr(AND_EXPR, list_make2(lexpr, rexpr), location);
}

static Node *make_xor_expr(Node *lexpr, Node *rexpr, int location)
{
    Expr *aorb;
    Expr *notaandb;

    // XOR is (A OR B) AND (NOT (A AND B))
    aorb = makeBoolExpr(OR_EXPR, list_make2(lexpr, rexpr), location);

    notaandb = makeBoolExpr(AND_EXPR, list_make2(lexpr, rexpr), location);
    notaandb = makeBoolExpr(NOT_EXPR, list_make1(notaandb), location);

    return (Node *)makeBoolExpr(AND_EXPR, list_make2(aorb, notaandb), location);
}

static Node *make_not_expr(Node *expr, int location)
{
    return (Node *)makeBoolExpr(NOT_EXPR, list_make1(expr), location);
}

/*
 * chained expression comparison operators
 */

static Node *make_cypher_comparison_aexpr(A_Expr_Kind kind, char *name,
                 Node *lexpr, Node *rexpr, int location)
{
    cypher_comparison_aexpr *a = make_ag_node(cypher_comparison_aexpr);

    a->kind = kind;
    a->name = list_make1(makeString((char *) name));
    a->lexpr = lexpr;
    a->rexpr = rexpr;
    a->location = location;
    return (Node *)a;
}

static Node *make_cypher_comparison_boolexpr(BoolExprType boolop, List *args, int location)
{
    cypher_comparison_boolexpr *b = make_ag_node(cypher_comparison_boolexpr);

    b->boolop = boolop;
    b->args = args;
    b->location = location;
    return (Node *)b;
}

static Node *make_comparison_and_expr(Node *lexpr, Node *rexpr, int location)
{
    // flatten "a AND b AND c ..." to a single BoolExpr on sight
    if (is_ag_node(lexpr, cypher_comparison_boolexpr))
    {
        cypher_comparison_boolexpr *bexpr = (cypher_comparison_boolexpr *)lexpr;

        if (bexpr->boolop == AND_EXPR)
        {
            bexpr->args = lappend(bexpr->args, rexpr);

            return (Node *)bexpr;
        }
    }

    return (Node *)make_cypher_comparison_boolexpr(AND_EXPR, list_make2(lexpr, rexpr), location);
}

/*
 * arithmetic operators
 */

static Node *do_negate(Node *n, int location)
{
    if (IsA(n, A_Const))
    {
        A_Const *c = (A_Const *)n;

        // report the constant's location as that of the '-' sign
        c->location = location;

        if (c->val.ival.type == T_Integer)
        {
            c->val.ival.ival = -c->val.ival.ival;
            return n;
        }
        else if (c->val.fval.type == T_Float)
        {
            do_negate_float(&c->val.fval);
            return n;
        }
    }

    return (Node *)makeSimpleA_Expr(AEXPR_OP, "-", NULL, n, location);
}

static void do_negate_float(Float *v)
{
    char *oldval = NULL;

    Assert(v != NULL);
    Assert(IsA(v, Float));

    oldval = v->fval;

    if (*oldval == '+')
    {
        oldval++;
    }
    if (*oldval == '-')
    {
        v->fval = oldval+1;    /* just strip the '-' */
    }
    else
    {
        v->fval = psprintf("-%s", oldval);
    }
}

/*
 * indirection
 */

static Node *append_indirection(Node *expr, Node *selector)
{
    A_Indirection *indir;

    if (IsA(expr, A_Indirection))
    {
        indir = (A_Indirection *)expr;
        indir->indirection = lappend(indir->indirection, selector);

        return expr;
    }
    else
    {
        indir = makeNode(A_Indirection);
        indir->arg = expr;
        indir->indirection = list_make1(selector);

        return (Node *)indir;
    }
}

/*
 * literals
 */

static Node *make_int_const(int i, int location)
{
    A_Const *n = makeNode(A_Const);

    n->val.ival.type = T_Integer;
    n->val.ival.ival = i;
    n->location = location;

    return (Node *) n;
}

static Node *make_float_const(char *s, int location)
{
    A_Const *n = makeNode(A_Const);

    n->val.fval.type = T_Float;
    n->val.fval.fval = s;
    n->location = location;

    return (Node *) n;
}

static Node *make_string_const(char *s, int location)
{
    A_Const *n = makeNode(A_Const);

    n->val.sval.type = T_String;
    n->val.sval.sval = s;
    n->location = location;

    return (Node *) n;
}

static Node *make_bool_const(bool b, int location)
{
    A_Const *n = makeNode(A_Const);

    n->val.boolval.type = T_Boolean;
    n->val.boolval.boolval = b;
    n->location = location;

    return (Node *) n;
}

static Node *make_null_const(int location)
{
    A_Const *n = makeNode(A_Const);

    n->isnull = true;
    n->location = location;

    return (Node *) n;
}

/*
 * typecast
 */
static Node *make_typecast_expr(Node *expr, char *typecast, int location)
{
    cypher_typecast *node;

    node = make_ag_node(cypher_typecast);
    node->expr = expr;
    node->typecast = typecast;
    node->location = location;

    return (Node *)node;
}

/*
 * functions
 */
static Node *make_function_expr(List *func_name, List *exprs, int location)
{
    FuncCall *fnode;

    /* AGE function names are unqualified. So, their list size = 1 */
    if (list_length(func_name) == 1)
    {
        List *funcname;
        char *name;

        /* get the name of the function */
        name = ((String*)linitial(func_name))->sval;

        /*
         * Check for openCypher functions that are directly mapped to PG
         * functions. We may want to find a better way to do this, as there
         * could be many.
         */
        if (pg_strcasecmp(name, "count") == 0)
        {
            funcname = SystemFuncName("count");

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);

            /* build the cast to wrap the function call to return agtype. */
            fnode = node_to_agtype((Node *)fnode, "integer", location);

            return (Node *)fnode;
        }
        else
        {
            /*
             * We don't qualify AGE functions here. This is done in the
             * transform layer and allows us to know which functions are ours.
             */
            funcname = func_name;

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
        }
    }
    /* all other functions are passed as is */
    else
    {
        fnode = makeFuncCall(func_name, exprs, COERCE_SQL_SYNTAX, location);
    }

    /* return the node */
    return (Node *)fnode;
}

/*
 * function to make a function that has received a star-argument
 */
static Node *make_star_function_expr(List *func_name, List *exprs, int location)
{
    FuncCall *fnode;

    /* AGE function names are unqualified. So, their list size = 1 */
    if (list_length(func_name) == 1)
    {
        List *funcname;
        char *name;

        /* get the name of the function */
        name = ((String*)linitial(func_name))->sval;

        /*
         * Check for openCypher functions that are directly mapped to PG
         * functions. We may want to find a better way to do this, as there
         * could be many.
         */
        if (pg_strcasecmp(name, "count") == 0)
        {
            funcname = SystemFuncName("count");

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
            fnode->agg_star = true;

            /* build the cast to wrap the function call to return agtype. */
            fnode = node_to_agtype((Node *)fnode, "integer", location);

            return (Node *)fnode;
        }
        else
        {
            /*
             * We don't qualify AGE functions here. This is done in the
             * transform layer and allows us to know which functions are ours.
             */
            funcname = func_name;

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
        }
    }
    /* all other functions are passed as is */
    else
    {
        fnode = makeFuncCall(func_name, exprs, COERCE_SQL_SYNTAX, location);
    }

    /* return the node */
    fnode->agg_star = true;
    return (Node *)fnode;
}

/*
 * function to make a function that has received a distinct keyword
 */
static Node *make_distinct_function_expr(List *func_name, List *exprs, int location)
{
    FuncCall *fnode;

    /* AGE function names are unqualified. So, their list size = 1 */
    if (list_length(func_name) == 1)
    {
        List *funcname;
        char *name;

        /* get the name of the function */
        name = ((String*)linitial(func_name))->sval;

        /*
         * Check for openCypher functions that are directly mapped to PG
         * functions. We may want to find a better way to do this, as there
         * could be many.
         */
        if (pg_strcasecmp(name, "count") == 0)
        {
            funcname = SystemFuncName("count");

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
            fnode->agg_order = NIL;
            fnode->agg_distinct = true;

            /* build the cast to wrap the function call to return agtype. */
            fnode = node_to_agtype((Node *)fnode, "integer", location);
            return (Node *)fnode;
        }
        else
        {
            /*
             * We don't qualify AGE functions here. This is done in the
             * transform layer and allows us to know which functions are ours.
             */
            funcname = func_name;

            /* build the function call */
            fnode = makeFuncCall(funcname, exprs, COERCE_SQL_SYNTAX, location);
        }
    }
    /* all other functions are passed as is */
    else
    {
        fnode = makeFuncCall(func_name, exprs, COERCE_SQL_SYNTAX, location);
    }

    /* return the node */
    fnode->agg_order = NIL;
    fnode->agg_distinct = true;
    return (Node *)fnode;
}

/*
 * helper function to wrap pg_function in the appropiate typecast function to
 * interface with AGE components
 */
static FuncCall *node_to_agtype(Node * fnode, char *type, int location)
{
    List *funcname = list_make1(makeString("ag_catalog"));

    if (pg_strcasecmp(type, "float") == 0)
    {
        funcname = lappend(funcname, makeString("float8_to_agtype"));
    }
    else if (pg_strcasecmp(type, "int") == 0 ||
             pg_strcasecmp(type, "integer") == 0)
    {
        funcname = lappend(funcname, makeString("int8_to_agtype"));
    }
    else if (pg_strcasecmp(type, "bool") == 0 ||
             pg_strcasecmp(type, "boolean") == 0)
    {
        funcname = lappend(funcname, makeString("bool_to_agtype"));
    }
    else
    {
        ereport(ERROR,
            (errmsg_internal("type \'%s\' not supported by AGE functions",
                             type)));
    }

    return makeFuncCall(funcname, list_make1(fnode), COERCE_EXPLICIT_CAST, location);
}

/* function to create a unique name given a prefix */
static char *create_unique_name(char *prefix_name)
{
    char *name = NULL;
    char *prefix = NULL;
    unsigned int nlen = 0;
    unsigned long unique_number = 0;

    /* get a unique number */
    unique_number = get_a_unique_number();

    /* was a valid prefix supplied */
    if (prefix_name == NULL || strlen(prefix_name) <= 0)
    {
        prefix = pnstrdup(UNIQUE_NAME_NULL_PREFIX,
                          strlen(UNIQUE_NAME_NULL_PREFIX));
    }
    else
    {
        prefix = prefix_name;
    }

    /* get the length of the combined string */
    nlen = snprintf(NULL, 0, "%s_%lu", prefix, unique_number);

    /* allocate the space */
    name = palloc0(nlen + 1);

    /* create the name */
    snprintf(name, nlen + 1, "%s_%lu", prefix, unique_number);

    /* if we created the prefix, we need to free it */
    if (prefix_name == NULL || strlen(prefix_name) <= 0)
    {
        pfree(prefix);
    }

    return name;
}

/* function to check if given string has internal alias as prefix */
static bool has_internal_default_prefix(char *str)
{
    return strncmp(AGE_DEFAULT_PREFIX, str, strlen(AGE_DEFAULT_PREFIX)) == 0;
}

/* function to return a unique unsigned long number */
static unsigned long get_a_unique_number(void)
{
    /* STATIC VARIABLE unique_counter for number uniqueness */
    static unsigned long unique_counter = 0;

    return unique_counter++;
}

/*set operation function node to make a set op node*/
static Node *make_set_op(SetOperation op, bool all_or_distinct, List *larg,
                         List *rarg)
{
    cypher_return *n = make_ag_node(cypher_return);

    n->op = op;
    n->all_or_distinct = all_or_distinct;
    n->larg = (List *) larg;
    n->rarg = (List *) rarg;
    return (Node *) n;
}

/* check if A_Expr is a comparison expression */
static bool is_A_Expr_a_comparison_operation(cypher_comparison_aexpr *a)
{
    String *v = NULL;
    char *opr_name = NULL;

    /* we don't support qualified comparison operators */
    if (list_length(a->name) != 1)
    {
        ereport(ERROR,
                (errcode(ERRCODE_SYNTAX_ERROR),
                 errmsg("qualified comparison operator names are not permitted")));
    }

    /* get the value and verify that it is a string */
    v = linitial(a->name);
    Assert(v->type == T_String);

    /* get the string value */
    opr_name = v->sval;

    /* verify it is a comparison operation */
    if (strcmp(opr_name, "<") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, ">") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, "<=") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, "=>") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, "=") == 0)
    {
        return true;
    }
    if (strcmp(opr_name, "<>") == 0)
    {
        return true;
    }

    return false;
}

/*
 * Helper function to build the comparison operator expression. It will also
 * build a chained comparison operator expression if it detects a chained
 * comparison.
 */
static Node *build_comparison_expression(Node *left_grammar_node,
                                         Node *right_grammar_node,
                                         char *opr_name, int location)
{
    Node *result_expr = NULL;

    Assert(left_grammar_node != NULL);
    Assert(right_grammar_node != NULL);
    Assert(opr_name != NULL);

    /*
     * Case 1:
     *    If the left expression is an A_Expr and it is also a
     *    comparison, then this is part of a chained comparison. In this
     *    specific case, the second chained element.
     */
    if (is_ag_node(left_grammar_node, cypher_comparison_aexpr) &&
        is_A_Expr_a_comparison_operation((cypher_comparison_aexpr *)left_grammar_node))
    {
        cypher_comparison_aexpr *aexpr = NULL;
        Node *lexpr = NULL;
        Node *n = NULL;

        /* get the A_Expr on the left side */
        aexpr = (cypher_comparison_aexpr *)left_grammar_node;
        /* get its rexpr which will be our lexpr */
        lexpr = aexpr->rexpr;
        /* build our comparison operator */
        n = (Node *)make_cypher_comparison_aexpr(AEXPR_OP, opr_name, lexpr,
                                     right_grammar_node, location);

        /* now add it (AND) to the other comparison */
        result_expr = make_comparison_and_expr(left_grammar_node, n, location);
    }

    /*
     * Case 2:
     *    If the left expression is a boolean AND and its right most
     *    expression is an A_Expr and a comparison, then this is part of
     *    a chained comparison. In this specific case, the third and
     *    beyond chained element.
     */
    else if (is_ag_node(left_grammar_node, cypher_comparison_boolexpr) &&
        ((cypher_comparison_boolexpr*)left_grammar_node)->boolop == AND_EXPR)
    {
        cypher_comparison_boolexpr *bexpr = NULL;
        Node *last = NULL;

        /* cast the left to a boolean */
        bexpr = (cypher_comparison_boolexpr *)left_grammar_node;
        /* extract the last node - ANDs are chained in a flat list */
        last = llast(bexpr->args);

        /* is the last node an A_Expr and a comparison operator */
        if (is_ag_node(last, cypher_comparison_aexpr) &&
            is_A_Expr_a_comparison_operation((cypher_comparison_aexpr *)last))
        {
            cypher_comparison_aexpr *aexpr = NULL;
            Node *lexpr = NULL;
            Node *n = NULL;

            /* get the last expressions right expression */
            aexpr = (cypher_comparison_aexpr *) last;
            lexpr = aexpr->rexpr;
            /* make our comparison operator */
            n = (Node *)make_cypher_comparison_aexpr(AEXPR_OP, opr_name, lexpr,
                                         right_grammar_node, location);

            /* now add it (AND) to the other comparisons */
            result_expr = make_comparison_and_expr(left_grammar_node, n, location);
        }
    }


    /*
     * Case 3:
     *    The left expression isn't a chained comparison. So, treat
     *    it as a regular comparison expression. This is usually an initial
     *    comparison expression.
     */
    else if (result_expr == NULL)
    {
        result_expr = (Node *)make_cypher_comparison_aexpr(AEXPR_OP, opr_name,
                                               left_grammar_node,
                                               right_grammar_node, location);
    }

    return result_expr;
}

static cypher_relationship *build_VLE_relation(List *left_arg,
                                               cypher_relationship *cr,
                                               Node *right_arg,
                                               int left_arg_location,
                                               int cr_location)
{
    ColumnRef *cref = NULL;
    A_Indices *ai = NULL;
    List *args = NIL;
    List *eargs = NIL;
    List *fname = NIL;
    cypher_node *cnl = NULL;
    cypher_node *cnr = NULL;
    Node *node = NULL;
    int length = 0;
    unsigned long unique_number = 0;
    int location = 0;

    /* get a unique number to identify this VLE node */
    unique_number = get_a_unique_number();

    /* get the location */
    location = cr->location;

    /* get the left and right cypher_nodes */
    cnl = (cypher_node*)llast(left_arg);
    cnr = (cypher_node*)right_arg;

    /* get the length of the left path */
    length = list_length(left_arg);

    /*
     * If the left name is NULL and the left path is greater than 1
     * If the left name is NULL and the left label is not NULL
     * If the left name is NULL and the left props is not NULL
     * If the left name is NULL and the right name is not NULL
     * If the left name is NULL and the right label is not NULL
     * If the left name is NULL and the right props is not NULL
     * we need to create a variable name for the left node.
     */
    if ((cnl->name == NULL && length > 1) ||
        (cnl->name == NULL && cnl->label != NULL) ||
        (cnl->name == NULL && cnl->props != NULL) ||
        (cnl->name == NULL && cnr->name != NULL) ||
        (cnl->name == NULL && cnr->label != NULL) ||
        (cnl->name == NULL && cnr->props != NULL))
    {
        cnl->name = create_unique_name(AGE_DEFAULT_PREFIX"vle_function_start_var");
    }

    /* add in the start vertex as a ColumnRef if necessary */
    if (cnl->name != NULL)
    {
        cref = makeNode(ColumnRef);
        cref->fields = list_make2(makeString(cnl->name), makeString("id"));
        cref->location = left_arg_location;
        args = lappend(args, cref);
    }
    /*
     * If there aren't any variables in the VLE path, we can use
     * the FROM_ALL algorithm.
     */
    else
    {
        args = lappend(args, make_null_const(-1));
    }

    /*
     * Create a variable name for the end vertex if we have a label
     * name or props but we don't have a variable name.
     *
     * For example: ()-[*]-(:label) or ()-[*]-({name: "John"})
     *
     * We need this so the addition of match_vle_terminal_edge is
     * done in the transform phase.
     */
    if (cnr->name == NULL &&
        (cnr->label != NULL || cnr->props != NULL))
    {
        cnr->name = create_unique_name(AGE_DEFAULT_PREFIX"vle_function_end_var");
    }
    /*
     * We need a NULL for the target vertex in the VLE match to
     * force the dfs_find_a_path_from algorithm. However, for now,
     * the default will be to only do that when a target isn't
     * supplied.
     *
     * TODO: We will likely want to force it to use
     * dfs_find_a_path_from.
     */
    if (cnl->name == NULL && cnr->name != NULL)
    {
        cref = makeNode(ColumnRef);
        cref->fields = list_make2(makeString(cnr->name), makeString("id"));
        cref->location = left_arg_location;
        args = lappend(args, cref);
    }
    else
    {
        args = lappend(args, make_null_const(-1));
    }

    /* build the required edge arguments */
    if (cr->label == NULL)
    {
        eargs = lappend(eargs, make_null_const(location));
    }
    else
    {
        eargs = lappend(eargs, make_string_const(cr->label, location));
    }
    if (cr->props == NULL)
    {
        eargs = lappend(eargs, make_null_const(location));
    }
    else
    {
        eargs = lappend(eargs, cr->props);
    }
    /* build the edge function name (schema.funcname) */
    fname = list_make2(makeString("ag_catalog"),
                       makeString("age_build_vle_match_edge"));
    /* build the edge function node */
    node = make_function_expr(fname, eargs, location);
    /* add in the edge*/
    args = lappend(args, node);
    /* add in the lidx and uidx range as Const */
    ai = (A_Indices*)cr->varlen;
    if (ai == NULL || ai->lidx == NULL)
    {
        args = lappend(args, make_null_const(location));
    }
    else
    {
        args = lappend(args, ai->lidx);
    }
    if (ai == NULL || ai->uidx == NULL)
    {
        args = lappend(args, make_null_const(location));
    }
    else
    {
        args = lappend(args, ai->uidx);
    }
    /* add in the direction as Const */
    args = lappend(args, make_int_const(cr->dir, cr_location));

    /* add in the unique number used to identify this VLE node */
    args = lappend(args, make_int_const(unique_number, -1));

    /* build the VLE function node */
    cr->varlen = make_function_expr(list_make1(makeString("vle")), args,
                                    cr_location);
    /* return the VLE relation node */
    return cr;
}
