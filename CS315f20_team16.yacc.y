%{
#include <stdio.h>
#include <stdlib.h>
  int yylex(void);
  void yyerror(char* s);
  extern int yylineno;
  %}

%token ASSIGNMENT_OP
%token RAND_FUNCTION
%token FORLOOP
%token EAT
%token BUY
%token ELSE_IF
%token PLUS
%token MINUS
%token MULT
%token DIVIDE
%token PLUS_EQUAL
%token MINUS_EQUAL
%token MULT_EQUAL
%token DIV_EQUAL
%token NOT_EQUAL
%token START_PROGRAM
%token END_PROGRAM
%token FUNCTION
%token GAME_MAP
%token CREATE_AVATAR
%token ADD_ROOM
%token MOVE_DIRECTLY
%token OPEN_DOOR
%token PICK_UP_WLT
%token TALK_TO
%token JUMP
%token FIGHT
%token CREATE_MONSTER
%token BOOLEAN_VAL
%token INT_TYPE
%token CHAR_TYPE 
%token BOOL_TYPE
%token STR_TYPE
%token FLOAT_TYPE
%token IF
%token IF_EQUAL
%token LT
%token LTE
%token GT
%token GTE
%token COMMENT
%token AND
%token OR
%token ELSE
%token NOT
%token CONST_IDENTIFIER
%token LP
%token RP
%token LB
%token RB
%token LSB
%token RSB
%token COMMA
%token SEMICOLON
%token UNDERSCORE
%token DOT
%token DIGIT
%token DO_LOOP
%token WHILE
%token COMEBACK
%token INPUT
%token OUTPUT
%token INT_NUMBER
%token FLOAT_NUMBER
%token CHAR_VAL
%token STRING_VAL
%token IDENTIFIER 
%token CONSTANT
%token DIRECTION_TYPE
%token EAST
%token WEST
%token NORTH
%token SOUTH
%token NORTH_WEST
%token NORTH_EAST
%token SOUTH_WEST
%token SOUTH_EAST
%token XOR
%token DIRECT_INC
%token DIRECT_DEC
%token SPELL_FUNCT
%token HEAL_FUNCT
%token SQRT_FUNCT
%token POWER_FUNCT
%token VOID

%start program
%right ASSIGNMENT_OP

%%

program: 
main

main:
START_PROGRAM statements END_PROGRAM

statements:
statement
| statements statement

statement: matched_statement
| unmatched_statement


matched_statement: IF LP logical_expression RP LB matched_statement RB ELSE LB matched_statement RB
                | nonif_statements
                | IF LP logical_expression RP LB matched_statement RB ELSE_IF LP logical_expression RP LB matched_statement RB ELSE LB matched_statement RB

unmatched_statement: IF LP logical_expression RP LB statement RB
|IF LP logical_expression RP LB  matched_statement RB ELSE LB unmatched_statement RB

nonif_statements: nonif_statement
| nonif_statements nonif_statement

 

nonif_statement: COMMENT
| output_statement
| input_statement
| initialization
| loops
| dec_initiliaze
| funct_call
| function_declaration
| primitive_function_call
| direct_changing SEMICOLON

logical_expression: 
INT_NUMBER LT INT_NUMBER 
|INT_NUMBER GT INT_NUMBER 
|INT_NUMBER LTE INT_NUMBER 
|INT_NUMBER GTE INT_NUMBER 
|INT_NUMBER IF_EQUAL INT_NUMBER 
|IDENTIFIER LT IDENTIFIER 
|IDENTIFIER GT IDENTIFIER 
|IDENTIFIER LTE IDENTIFIER 
|IDENTIFIER GTE IDENTIFIER 
|IDENTIFIER AND IDENTIFIER
|IDENTIFIER IF_EQUAL IDENTIFIER
|IDENTIFIER OR IDENTIFIER
|BOOLEAN_VAL OR BOOLEAN_VAL
|BOOLEAN_VAL AND BOOLEAN_VAL
|BOOLEAN_VAL IF_EQUAL BOOLEAN_VAL
|BOOLEAN_VAL XOR BOOLEAN_VAL
|IDENTIFIER XOR IDENTIFIER
|IDENTIFIER NOT_EQUAL IDENTIFIER
|BOOLEAN_VAL NOT_EQUAL BOOLEAN_VAL
|INT_NUMBER NOT_EQUAL INT_NUMBER



primitivetype: BOOLEAN_VAL
| CHAR_VAL
| STRING_VAL
| FLOAT_NUMBER
| INT_NUMBER
| directiontype

primitivetype_names: BOOL_TYPE
| CHAR_TYPE
| STR_TYPE
| FLOAT_TYPE
| INT_TYPE
| DIRECTION_TYPE
assignmentOperators:  PLUS_EQUAL
| MINUS_EQUAL
| MULT_EQUAL
| DIV_EQUAL


initialization: IDENTIFIER ASSIGNMENT_OP arith_expr SEMICOLON

arith_expr: arith_expr PLUS arith_term
| arith_expr MINUS arith_term
| arith_term


arith_term: arith_term MULT factor 
| arith_term DIVIDE factor 
| factor

factor: LP arith_expr RP | arith_ment

arith_ment: IDENTIFIER
| INT_NUMBER

direct_changing: IDENTIFIER DIRECT_INC 
| IDENTIFIER DIRECT_DEC 

loops:while_statement
| dowhile_statement
| for_statement

for_statement: FORLOOP LP logical_expression SEMICOLON direct_changing RP LB statements RB


while_statement:
WHILE LP logical_expression RP LB statements RB


dowhile_statement:
DO_LOOP LB statements RB WHILE LP logical_expression RP SEMICOLON


dec_initiliaze: declaration
| termdeclaration
| updateterms
| sequence
| fillSequence
| getSequence
| updateToFunction


declaration: primitivetype_names IDENTIFIER SEMICOLON


termdeclaration: primitivetype_names IDENTIFIER ASSIGNMENT_OP assignmentvalues SEMICOLON

assignmentvalues: primitivetype 
| CONSTANT
| IDENTIFIER

updateterms: IDENTIFIER assignmentOperators assignmentvalues SEMICOLON

sequence: primitivetype_names IDENTIFIER LSB INT_NUMBER RSB SEMICOLON

fillSequence: IDENTIFIER LSB INT_NUMBER RSB ASSIGNMENT_OP IDENTIFIER SEMICOLON
|  IDENTIFIER LSB INT_NUMBER RSB ASSIGNMENT_OP primitivetype SEMICOLON

getSequence: IDENTIFIER ASSIGNMENT_OP IDENTIFIER LSB INT_NUMBER RSB SEMICOLON


function_declaration: FUNCTION argumstype IDENTIFIER LP complex_args RP LB statements COMEBACK IDENTIFIER SEMICOLON RB

funct_call: IDENTIFIER LP args RP SEMICOLON



primitive_function: GAME_MAP 
| CREATE_AVATAR | ADD_ROOM 
| MOVE_DIRECTLY | OPEN_DOOR 
| PICK_UP_WLT | TALK_TO 
| JUMP | FIGHT 
| CREATE_MONSTER | EAT 
| BUY | RAND_FUNCTION 

directiontype: NORTH
| EAST
| SOUTH
| WEST
| NORTH_WEST
| NORTH_EAST
| SOUTH_EAST
| SOUTH_WEST


primitive_function_call: primitive_function LP args RP SEMICOLON


updateToFunction: IDENTIFIER ASSIGNMENT_OP funct_call

argumstype: primitivetype_names
| VOID

complex_args: simple_arg 
| simple_arg COMMA complex_args

simple_arg: primitivetype_names IDENTIFIER

args: arg
| arg COMMA args

arg: IDENTIFIER
| primitivetype

input_statement: IDENTIFIER ASSIGNMENT_OP INPUT LP RP SEMICOLON



output_statement: OUTPUT LP assignmentvalues RP SEMICOLON
%%



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
