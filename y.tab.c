#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "CS315f20_team16.yacc.y"
#include <stdio.h>
#include <stdlib.h>
  int yylex(void);
  void yyerror(char* s);
  extern int yylineno;
  
#line 26 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ASSIGNMENT_OP 257
#define RAND_FUNCTION 258
#define FORLOOP 259
#define EAT 260
#define BUY 261
#define ELSE_IF 262
#define PLUS 263
#define MINUS 264
#define MULT 265
#define DIVIDE 266
#define PLUS_EQUAL 267
#define MINUS_EQUAL 268
#define MULT_EQUAL 269
#define DIV_EQUAL 270
#define NOT_EQUAL 271
#define START_PROGRAM 272
#define END_PROGRAM 273
#define FUNCTION 274
#define GAME_MAP 275
#define CREATE_AVATAR 276
#define ADD_ROOM 277
#define MOVE_DIRECTLY 278
#define OPEN_DOOR 279
#define PICK_UP_WLT 280
#define TALK_TO 281
#define JUMP 282
#define FIGHT 283
#define CREATE_MONSTER 284
#define BOOLEAN_VAL 285
#define INT_TYPE 286
#define CHAR_TYPE 287
#define BOOL_TYPE 288
#define STR_TYPE 289
#define FLOAT_TYPE 290
#define IF 291
#define IF_EQUAL 292
#define LT 293
#define LTE 294
#define GT 295
#define GTE 296
#define COMMENT 297
#define AND 298
#define OR 299
#define ELSE 300
#define NOT 301
#define CONST_IDENTIFIER 302
#define LP 303
#define RP 304
#define LB 305
#define RB 306
#define LSB 307
#define RSB 308
#define COMMA 309
#define SEMICOLON 310
#define UNDERSCORE 311
#define DOT 312
#define DIGIT 313
#define DO_LOOP 314
#define WHILE 315
#define COMEBACK 316
#define INPUT 317
#define OUTPUT 318
#define INT_NUMBER 319
#define FLOAT_NUMBER 320
#define CHAR_VAL 321
#define STRING_VAL 322
#define IDENTIFIER 323
#define CONSTANT 324
#define DIRECTION_TYPE 325
#define EAST 326
#define WEST 327
#define NORTH 328
#define SOUTH 329
#define NORTH_WEST 330
#define NORTH_EAST 331
#define SOUTH_WEST 332
#define SOUTH_EAST 333
#define XOR 334
#define DIRECT_INC 335
#define DIRECT_DEC 336
#define SPELL_FUNCT 337
#define HEAL_FUNCT 338
#define SQRT_FUNCT 339
#define POWER_FUNCT 340
#define VOID 341
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    2,    3,    3,    4,    4,    4,    5,
    5,    7,    7,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    6,    6,    6,    6,    6,    6,    6,
    6,    6,    6,    6,    6,    6,    6,    6,    6,    6,
    6,    6,    6,   18,   18,   18,   18,   18,   18,   20,
   20,   20,   20,   20,   20,   21,   21,   21,   21,   11,
   22,   22,   22,   23,   23,   23,   24,   24,   25,   25,
   17,   17,   12,   12,   12,   28,   26,   27,   13,   13,
   13,   13,   13,   13,   13,   29,   30,   36,   36,   36,
   31,   32,   33,   33,   34,   15,   14,   40,   40,   40,
   40,   40,   40,   40,   40,   40,   40,   40,   40,   40,
   19,   19,   19,   19,   19,   19,   19,   19,   16,   35,
   37,   37,   38,   38,   41,   39,   39,   42,   42,   10,
    9,
};
static const short yylen[] = {                            2,
    1,    3,    1,    2,    1,    1,   11,    1,   18,    7,
   11,    1,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    2,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    4,
    3,    3,    1,    3,    3,    1,    3,    1,    1,    1,
    2,    2,    1,    1,    1,    9,    7,    9,    1,    1,
    1,    1,    1,    1,    1,    3,    5,    1,    1,    1,
    4,    6,    7,    7,    7,   12,    5,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    5,    3,
    1,    1,    1,    3,    2,    1,    3,    1,    1,    6,
    5,
};
static const short yydefred[] = {                         0,
    0,    0,    1,  110,    0,  108,  109,    0,   98,   99,
  100,  101,  102,  103,  104,  105,  106,  107,   54,   51,
   50,   52,   53,    0,   14,    0,    0,    0,    0,   55,
    0,    3,    5,    6,    0,   12,   15,   16,   17,   18,
   19,   20,   21,   22,    0,    0,   73,   74,   75,   79,
   80,   81,   82,   83,   84,   85,    0,    0,  122,  121,
    0,    0,    0,    0,    0,    0,   56,   57,   58,   59,
    0,    0,   71,   72,    0,    2,    4,   13,   23,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   44,
   48,   47,   45,   46,   90,   89,  112,  114,  111,  113,
  115,  116,  118,  117,   88,   49,    0,    0,    0,   70,
    0,  120,    0,    0,   66,   68,  128,  129,    0,    0,
    0,    0,    0,    0,   86,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   69,    0,    0,    0,    0,    0,   60,    0,
    0,    0,    0,    0,   91,    0,    0,    0,   42,   38,
   37,   36,   39,   43,   28,   24,   26,   25,   27,   41,
   34,   29,   31,   30,   32,   33,   35,   40,    0,    0,
    0,    0,    0,    0,    0,    0,  131,   67,    0,    0,
    0,    0,   64,   65,   97,  127,    0,   87,    0,  119,
    0,  125,    0,    0,    0,    0,    0,    0,  130,    0,
    0,    0,   92,    0,    0,  124,   10,    0,    0,   77,
   95,   93,   94,    0,    0,    0,    0,    0,   76,    0,
    0,    0,   78,    0,    0,    0,    0,    0,    0,    7,
   11,   96,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    9,    0,    0,    0,
};
static const short yydgoto[] = {                          2,
    3,   31,   32,   33,   34,   85,   35,   36,   37,   38,
   39,   40,   41,   42,   43,   44,   45,  105,  106,   46,
   75,  113,  114,  115,  116,   47,   48,   49,   50,   51,
   52,   53,   54,   55,   56,  107,   61,  192,  119,   57,
  193,  120,
};
static const short yysindex[] = {                      -260,
  141,    0,    0,    0, -288,    0,    0, -263,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -251,    0, -265, -237, -230, -250,    0,
 -169,    0,    0,    0,  245,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -236, -244,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -223, -269,    0,    0,
 -229, -269,  141, -269,  217, -141,    0,    0,    0,    0,
  266, -232,    0,    0,  217,    0,    0,    0,    0, -247,
  266, -257, -121, -262, -212, -200, -202,  -67, -188,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -181, -140, -178,    0,
 -252,    0, -242, -227,    0,    0,    0,    0, -177, -173,
 -179, -168,  217, -171,    0, -153, -133, -132, -130, -127,
 -125, -158, -154, -151, -142, -139, -135, -138, -137, -136,
 -134, -128, -126, -124, -123, -122, -120, -155, -115, -117,
 -103,  -92,    0, -235,  -79,  -91, -140, -140,    0, -140,
 -140,  -84,  266,  -28,    0,  -83,  -77,  -78,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -291,  -71,
  -89,  -69,  -73,  141,  -66,  141,    0,    0,  -72,  -59,
 -227, -227,    0,    0,    0,    0,  281,    0,  -70,    0,
  -63,    0,  -55, -155,  -65,  -54, -269,  -15,    0,  -57,
  -56,  -53,    0,  141,  141,    0,    0, -219,  -49,    0,
    0,    0,    0,   37,   89,  -33,  -27,  -31,    0,  -46,
 -269,  141,    0,  -29,  -24,  -23,  -22,  -21,  -19,    0,
    0,    0,  193,  -16,  -18, -269,  -11,  -14,  -13,  -12,
  193,  193,   -5,   -4,    0, -201,   -1,  193,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -147,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -217,    0,    0, -180,    0,    0,    0,    0,    0,  -10,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    1,    0,    0,    0,    0,    0,    0,    0,
 -167, -163,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,  -58,  -30, -186,   64,  -60,    0,  272,    0,    0,
    0,    0,    0,  243,    0,    0,  175,  -68,    0,   -8,
    0,  221,  -93,  -90,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -64,    0,  116,  -75,    0,
    0,    0,
};
#define YYTABLESIZE 614
static const short yytable[] = {                         60,
   77,   87,  118,   89,   88,  126,   66,  216,  138,  123,
  122,    1,  118,  127,   58,   82,   67,   68,   69,   70,
  157,  158,   19,   20,   21,   22,   23,  157,  158,  139,
  140,  141,  142,  143,  128,  144,  145,  160,  161,   63,
  129,  130,  236,   73,   74,   69,   69,   69,   69,   83,
   71,   62,   71,   84,  156,  246,   72,   77,  166,  124,
  236,   30,  125,  201,  202,   64,  255,  159,  198,  203,
  204,  146,   65,   79,  263,  264,  131,   59,   80,   81,
  237,  246,   63,   63,   73,   74,  121,  206,    4,    5,
    6,    7,   69,   86,  118,   61,   61,  147,  267,   62,
   62,  149,  148,   76,    8,    9,   10,   11,   12,   13,
   14,   15,   16,   17,   18,  151,   19,   20,   21,   22,
   23,   24,  152,   63,  155,    8,  162,   25,  164,   63,
   19,   20,   21,   22,   23,  163,   61,  218,  222,  191,
   62,  165,   61,    8,   26,   27,   62,  167,   28,  132,
  168,  169,  170,   29,  171,   30,  229,  172,    8,  173,
  174,  108,  108,  215,  175,  234,  235,  176,    8,   30,
  133,  134,  135,  136,  137,  109,  177,  110,  110,  178,
  245,  111,  153,  179,  180,  181,  182,   77,  183,  194,
    4,    5,    6,    7,  184,  258,  185,  195,  186,  187,
  188,  196,  189,   77,   77,  191,    8,    9,   10,   11,
   12,   13,   14,   15,   16,   17,   18,  197,   19,   20,
   21,   22,   23,   24,  199,  205,  208,  200,  207,   25,
  209,  210,  211,  212,  213,  214,  217,  219,  150,  223,
  227,  224,    4,    5,    6,    7,   26,   27,  220,  225,
   28,  228,  231,  232,  238,   29,  233,   30,    8,    9,
   10,   11,   12,   13,   14,   15,   16,   17,   18,  241,
   19,   20,   21,   22,   23,   24,  244,  242,  243,  249,
  248,   25,  250,  251,  252,  253,  256,  257,  259,  260,
  230,  261,  262,  126,    4,    5,    6,    7,   26,   27,
  265,  266,   28,  268,  123,  247,   78,   29,  112,   30,
    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,
   18,  190,   19,   20,   21,   22,   23,   24,  154,  226,
    0,    0,    0,   25,    0,    0,    0,    0,    0,    0,
    0,    0,  239,    0,    0,    0,    4,    5,    6,    7,
   26,   27,    0,    0,   28,    0,    0,    0,    0,   29,
    0,   30,    8,    9,   10,   11,   12,   13,   14,   15,
   16,   17,   18,    0,   19,   20,   21,   22,   23,   24,
    0,    0,    0,    0,    0,   25,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    4,    5,
    6,    7,   26,   27,  240,    0,   28,    0,    0,    0,
    0,   29,    0,   30,    8,    9,   10,   11,   12,   13,
   14,   15,   16,   17,   18,    0,   19,   20,   21,   22,
   23,   24,    0,    0,    0,    0,    0,   25,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    4,    5,    6,    7,   26,   27,    0,    0,   28,    0,
    0,    0,    0,   29,    0,   30,    8,    9,   10,   11,
   12,   13,   14,   15,   16,   17,   18,    0,   19,   20,
   21,   22,   23,  254,    0,    0,    0,    0,    0,   25,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   90,    4,    5,    6,    7,   26,   27,    0,    0,
   28,    0,    0,    0,    0,   29,    0,   30,    8,    9,
   10,   11,   12,   13,   14,   15,   16,   17,   18,    0,
   19,   20,   21,   22,   23,   91,   92,   93,   94,   95,
   96,   25,   97,   98,   99,  100,  101,  102,  103,  104,
   90,    0,    0,    0,    0,    0,    0,    0,   26,   27,
    0,    0,   28,    0,    0,   90,    0,   29,    0,   30,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   91,   92,   93,   94,  117,    0,
    0,   97,   98,   99,  100,  101,  102,  103,  104,   91,
   92,   93,   94,  221,    0,    0,   97,   98,   99,  100,
  101,  102,  103,  104,
};
static const short yycheck[] = {                          8,
   31,   62,   71,   64,   63,   81,  257,  194,  271,  257,
   75,  272,   81,  271,  303,  285,  267,  268,  269,  270,
  263,  264,  286,  287,  288,  289,  290,  263,  264,  292,
  293,  294,  295,  296,  292,  298,  299,  265,  266,  305,
  298,  299,  262,  335,  336,  263,  264,  265,  266,  319,
  303,  303,  303,  323,  307,  242,  307,   88,  123,  307,
  262,  325,  310,  157,  158,  303,  253,  310,  304,  160,
  161,  334,  303,  310,  261,  262,  334,  341,  323,  303,
  300,  268,  263,  264,  335,  336,  319,  163,  258,  259,
  260,  261,  310,  323,  163,  263,  264,  310,  300,  263,
  264,  304,  303,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  284,  304,  286,  287,  288,  289,
  290,  291,  304,  304,  303,  273,  304,  297,  308,  310,
  286,  287,  288,  289,  290,  309,  304,  196,  207,  148,
  304,  310,  310,  291,  314,  315,  310,  319,  318,  271,
  304,  285,  285,  323,  285,  325,  217,  285,  306,  285,
  319,  303,  303,  194,  319,  224,  225,  319,  316,  325,
  292,  293,  294,  295,  296,  317,  319,  319,  319,  319,
  241,  323,  323,  319,  323,  323,  323,  218,  323,  305,
  258,  259,  260,  261,  323,  256,  323,  315,  323,  323,
  323,  305,  323,  234,  235,  214,  274,  275,  276,  277,
  278,  279,  280,  281,  282,  283,  284,  310,  286,  287,
  288,  289,  290,  291,  304,  310,  310,  319,  257,  297,
  308,  310,  304,  323,  304,  309,  303,  310,  306,  310,
  306,  305,  258,  259,  260,  261,  314,  315,  308,  305,
  318,  306,  310,  310,  304,  323,  310,  325,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  284,  303,
  286,  287,  288,  289,  290,  291,  323,  305,  310,  304,
  310,  297,  306,  306,  306,  305,  303,  306,  300,  304,
  306,  305,  305,  304,  258,  259,  260,  261,  314,  315,
  306,  306,  318,  305,  304,  242,   35,  323,   66,  325,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  147,  286,  287,  288,  289,  290,  291,  108,  214,
   -1,   -1,   -1,  297,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  306,   -1,   -1,   -1,  258,  259,  260,  261,
  314,  315,   -1,   -1,  318,   -1,   -1,   -1,   -1,  323,
   -1,  325,  274,  275,  276,  277,  278,  279,  280,  281,
  282,  283,  284,   -1,  286,  287,  288,  289,  290,  291,
   -1,   -1,   -1,   -1,   -1,  297,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  258,  259,
  260,  261,  314,  315,  316,   -1,  318,   -1,   -1,   -1,
   -1,  323,   -1,  325,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  284,   -1,  286,  287,  288,  289,
  290,  291,   -1,   -1,   -1,   -1,   -1,  297,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  258,  259,  260,  261,  314,  315,   -1,   -1,  318,   -1,
   -1,   -1,   -1,  323,   -1,  325,  274,  275,  276,  277,
  278,  279,  280,  281,  282,  283,  284,   -1,  286,  287,
  288,  289,  290,  291,   -1,   -1,   -1,   -1,   -1,  297,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  285,  258,  259,  260,  261,  314,  315,   -1,   -1,
  318,   -1,   -1,   -1,   -1,  323,   -1,  325,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  284,   -1,
  286,  287,  288,  289,  290,  319,  320,  321,  322,  323,
  324,  297,  326,  327,  328,  329,  330,  331,  332,  333,
  285,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  314,  315,
   -1,   -1,  318,   -1,   -1,  285,   -1,  323,   -1,  325,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  319,  320,  321,  322,  323,   -1,
   -1,  326,  327,  328,  329,  330,  331,  332,  333,  319,
  320,  321,  322,  323,   -1,   -1,  326,  327,  328,  329,
  330,  331,  332,  333,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 341
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ASSIGNMENT_OP","RAND_FUNCTION",
"FORLOOP","EAT","BUY","ELSE_IF","PLUS","MINUS","MULT","DIVIDE","PLUS_EQUAL",
"MINUS_EQUAL","MULT_EQUAL","DIV_EQUAL","NOT_EQUAL","START_PROGRAM",
"END_PROGRAM","FUNCTION","GAME_MAP","CREATE_AVATAR","ADD_ROOM","MOVE_DIRECTLY",
"OPEN_DOOR","PICK_UP_WLT","TALK_TO","JUMP","FIGHT","CREATE_MONSTER",
"BOOLEAN_VAL","INT_TYPE","CHAR_TYPE","BOOL_TYPE","STR_TYPE","FLOAT_TYPE","IF",
"IF_EQUAL","LT","LTE","GT","GTE","COMMENT","AND","OR","ELSE","NOT",
"CONST_IDENTIFIER","LP","RP","LB","RB","LSB","RSB","COMMA","SEMICOLON",
"UNDERSCORE","DOT","DIGIT","DO_LOOP","WHILE","COMEBACK","INPUT","OUTPUT",
"INT_NUMBER","FLOAT_NUMBER","CHAR_VAL","STRING_VAL","IDENTIFIER","CONSTANT",
"DIRECTION_TYPE","EAST","WEST","NORTH","SOUTH","NORTH_WEST","NORTH_EAST",
"SOUTH_WEST","SOUTH_EAST","XOR","DIRECT_INC","DIRECT_DEC","SPELL_FUNCT",
"HEAL_FUNCT","SQRT_FUNCT","POWER_FUNCT","VOID",
};
static const char *yyrule[] = {
"$accept : program",
"program : main",
"main : START_PROGRAM statements END_PROGRAM",
"statements : statement",
"statements : statements statement",
"statement : matched_statement",
"statement : unmatched_statement",
"matched_statement : IF LP logical_expression RP LB matched_statement RB ELSE LB matched_statement RB",
"matched_statement : nonif_statements",
"matched_statement : IF LP logical_expression RP LB matched_statement RB ELSE_IF LP logical_expression RP LB matched_statement RB ELSE LB matched_statement RB",
"unmatched_statement : IF LP logical_expression RP LB statement RB",
"unmatched_statement : IF LP logical_expression RP LB matched_statement RB ELSE LB unmatched_statement RB",
"nonif_statements : nonif_statement",
"nonif_statements : nonif_statements nonif_statement",
"nonif_statement : COMMENT",
"nonif_statement : output_statement",
"nonif_statement : input_statement",
"nonif_statement : initialization",
"nonif_statement : loops",
"nonif_statement : dec_initiliaze",
"nonif_statement : funct_call",
"nonif_statement : function_declaration",
"nonif_statement : primitive_function_call",
"nonif_statement : direct_changing SEMICOLON",
"logical_expression : INT_NUMBER LT INT_NUMBER",
"logical_expression : INT_NUMBER GT INT_NUMBER",
"logical_expression : INT_NUMBER LTE INT_NUMBER",
"logical_expression : INT_NUMBER GTE INT_NUMBER",
"logical_expression : INT_NUMBER IF_EQUAL INT_NUMBER",
"logical_expression : IDENTIFIER LT IDENTIFIER",
"logical_expression : IDENTIFIER GT IDENTIFIER",
"logical_expression : IDENTIFIER LTE IDENTIFIER",
"logical_expression : IDENTIFIER GTE IDENTIFIER",
"logical_expression : IDENTIFIER AND IDENTIFIER",
"logical_expression : IDENTIFIER IF_EQUAL IDENTIFIER",
"logical_expression : IDENTIFIER OR IDENTIFIER",
"logical_expression : BOOLEAN_VAL OR BOOLEAN_VAL",
"logical_expression : BOOLEAN_VAL AND BOOLEAN_VAL",
"logical_expression : BOOLEAN_VAL IF_EQUAL BOOLEAN_VAL",
"logical_expression : BOOLEAN_VAL XOR BOOLEAN_VAL",
"logical_expression : IDENTIFIER XOR IDENTIFIER",
"logical_expression : IDENTIFIER NOT_EQUAL IDENTIFIER",
"logical_expression : BOOLEAN_VAL NOT_EQUAL BOOLEAN_VAL",
"logical_expression : INT_NUMBER NOT_EQUAL INT_NUMBER",
"primitivetype : BOOLEAN_VAL",
"primitivetype : CHAR_VAL",
"primitivetype : STRING_VAL",
"primitivetype : FLOAT_NUMBER",
"primitivetype : INT_NUMBER",
"primitivetype : directiontype",
"primitivetype_names : BOOL_TYPE",
"primitivetype_names : CHAR_TYPE",
"primitivetype_names : STR_TYPE",
"primitivetype_names : FLOAT_TYPE",
"primitivetype_names : INT_TYPE",
"primitivetype_names : DIRECTION_TYPE",
"assignmentOperators : PLUS_EQUAL",
"assignmentOperators : MINUS_EQUAL",
"assignmentOperators : MULT_EQUAL",
"assignmentOperators : DIV_EQUAL",
"initialization : IDENTIFIER ASSIGNMENT_OP arith_expr SEMICOLON",
"arith_expr : arith_expr PLUS arith_term",
"arith_expr : arith_expr MINUS arith_term",
"arith_expr : arith_term",
"arith_term : arith_term MULT factor",
"arith_term : arith_term DIVIDE factor",
"arith_term : factor",
"factor : LP arith_expr RP",
"factor : arith_ment",
"arith_ment : IDENTIFIER",
"arith_ment : INT_NUMBER",
"direct_changing : IDENTIFIER DIRECT_INC",
"direct_changing : IDENTIFIER DIRECT_DEC",
"loops : while_statement",
"loops : dowhile_statement",
"loops : for_statement",
"for_statement : FORLOOP LP logical_expression SEMICOLON direct_changing RP LB statements RB",
"while_statement : WHILE LP logical_expression RP LB statements RB",
"dowhile_statement : DO_LOOP LB statements RB WHILE LP logical_expression RP SEMICOLON",
"dec_initiliaze : declaration",
"dec_initiliaze : termdeclaration",
"dec_initiliaze : updateterms",
"dec_initiliaze : sequence",
"dec_initiliaze : fillSequence",
"dec_initiliaze : getSequence",
"dec_initiliaze : updateToFunction",
"declaration : primitivetype_names IDENTIFIER SEMICOLON",
"termdeclaration : primitivetype_names IDENTIFIER ASSIGNMENT_OP assignmentvalues SEMICOLON",
"assignmentvalues : primitivetype",
"assignmentvalues : CONSTANT",
"assignmentvalues : IDENTIFIER",
"updateterms : IDENTIFIER assignmentOperators assignmentvalues SEMICOLON",
"sequence : primitivetype_names IDENTIFIER LSB INT_NUMBER RSB SEMICOLON",
"fillSequence : IDENTIFIER LSB INT_NUMBER RSB ASSIGNMENT_OP IDENTIFIER SEMICOLON",
"fillSequence : IDENTIFIER LSB INT_NUMBER RSB ASSIGNMENT_OP primitivetype SEMICOLON",
"getSequence : IDENTIFIER ASSIGNMENT_OP IDENTIFIER LSB INT_NUMBER RSB SEMICOLON",
"function_declaration : FUNCTION argumstype IDENTIFIER LP complex_args RP LB statements COMEBACK IDENTIFIER SEMICOLON RB",
"funct_call : IDENTIFIER LP args RP SEMICOLON",
"primitive_function : GAME_MAP",
"primitive_function : CREATE_AVATAR",
"primitive_function : ADD_ROOM",
"primitive_function : MOVE_DIRECTLY",
"primitive_function : OPEN_DOOR",
"primitive_function : PICK_UP_WLT",
"primitive_function : TALK_TO",
"primitive_function : JUMP",
"primitive_function : FIGHT",
"primitive_function : CREATE_MONSTER",
"primitive_function : EAT",
"primitive_function : BUY",
"primitive_function : RAND_FUNCTION",
"directiontype : NORTH",
"directiontype : EAST",
"directiontype : SOUTH",
"directiontype : WEST",
"directiontype : NORTH_WEST",
"directiontype : NORTH_EAST",
"directiontype : SOUTH_EAST",
"directiontype : SOUTH_WEST",
"primitive_function_call : primitive_function LP args RP SEMICOLON",
"updateToFunction : IDENTIFIER ASSIGNMENT_OP funct_call",
"argumstype : primitivetype_names",
"argumstype : VOID",
"complex_args : simple_arg",
"complex_args : simple_arg COMMA complex_args",
"simple_arg : primitivetype_names IDENTIFIER",
"args : arg",
"args : arg COMMA args",
"arg : IDENTIFIER",
"arg : primitivetype",
"input_statement : IDENTIFIER ASSIGNMENT_OP INPUT LP RP SEMICOLON",
"output_statement : OUTPUT LP assignmentvalues RP SEMICOLON",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 291 "CS315f20_team16.yacc.y"



void yyerror(char *s) {
  fprintf(stdout, "System error on line %d: %s\n", yylineno,s);
 }
int main(void){
  yyparse();
  if(yynerrs < 1){
    printf("Input program is valid\n");
  }
  return 0;
}
#line 623 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

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
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
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
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
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

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
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
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
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
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
