%{
#include <stdio.h>
#include "y.tab.h"
void yyerror(char *);
%}
if if
assignmentOperator =
newline \n
equal ==
notEqual !=
lt <
lte <=
gt >
gte >=
comment ~([^\n])*\n
and and
or or
else else
not not
constantidentifier \#
lp \(
rp \)
lb \{
rb \}
lsb \[
rsb \]
comma ,
semicolon \;
underscore \_
dot \.
digit [0-9]
letter[a-zA-Z]
do doloop
while loop
return return
input zemin
output zemout
true true
false false
boolean_val true|false
int_number [+-]?({digit})+
float_number [+-]?{digit}*(\.)?{digit}+
char_ch \'[^\\\']\'
string_st \"(\\.|[^"\\])*\"
alphanumeric ({letter}|{digit})
identifier {letter}({alphanumeric}|_)*
CONSTANT {constantidentifier}{identifier}
integer integer
char char
boolean_type boolean
string string
float float
function function
gamemap gamemap
createavatar createavatar
addroom addroom
movedirectly movedirectly
opendoor opendoor
pickupwlt pickupwlt
talkto talkto
jump jump
fight fight
createmonster createmonster
start start
end end
plus_op \+
minus_op \-
mult_op \*
div_op \/
plus_equal \+\=
minus_equal \-\=
mult_equal \*\=
div_equal \/\=
elif elif
rand rand
putaspell putaspell
heal heal
sqrt sqrt
power power
xor \^\^
direct_inc \+\+
direct_dec \-\-
directions directions
east east
west west
south south
north north
northwest northwest
southwest southwest
northeast northeast
southeast southeast
for forloop
eat eat
buy buy
void void
%option yylineno
%%
{void} return VOID;
{eat} return EAT;
{buy} return BUY;
{for} return FORLOOP;
{directions} return DIRECTION_TYPE;
{east} return EAST;
{west} return WEST;
{north} return NORTH;
{south} return SOUTH;
{northwest} return NORTH_WEST;
{northeast} return NORTH_EAST;
{southwest} return SOUTH_WEST;
{southeast} return SOUTH_EAST;
{xor} return XOR;
{direct_inc} return DIRECT_INC;
{direct_dec} return DIRECT_DEC;
{putaspell} return SPELL_FUNCT;
{heal} return HEAL_FUNCT;
{sqrt} return SQRT_FUNCT;
{power} return POWER_FUNCT;
{rand} return RAND_FUNCTION;
{elif} return ELSE_IF;
{plus_op} return PLUS;
{minus_op} return MINUS;
{mult_op} return MULT;
{div_op} return DIVIDE;
{plus_equal} return PLUS_EQUAL;
{minus_equal} return MINUS_EQUAL;
{mult_equal} return MULT_EQUAL;
{div_equal} return DIV_EQUAL;
{notEqual} return NOT_EQUAL;
{start} return START_PROGRAM;
{end} return END_PROGRAM;
{function} return FUNCTION;
{gamemap} return GAME_MAP;
{createavatar} return CREATE_AVATAR;
{addroom} return ADD_ROOM;
{movedirectly} return MOVE_DIRECTLY;
{opendoor} return OPEN_DOOR;
{pickupwlt} return PICK_UP_WLT;
{talkto} return TALK_TO;
{jump} return JUMP;
{fight} return FIGHT;
{createmonster} return CREATE_MONSTER;
{boolean_val} return BOOLEAN_VAL;
{integer} return INT_TYPE;
{char} return CHAR_TYPE;
{boolean_type} return BOOL_TYPE;
{string} return STR_TYPE;
{float} return FLOAT_TYPE;
{if}  return IF;
{assignmentOperator} return ASSIGNMENT_OP;
{newline} ;
{equal} return IF_EQUAL;
{lt} return LT;
{lte} return LTE;
{gt} return GT;
{gte} return GTE;
{comment} return COMMENT;
{and} return AND;
{or} return OR;
{else} return ELSE;
{not} return NOT;
{constantidentifier} return CONST_IDENTIFIER;
{lp} return LP;
{rp} return RP;
{lb} return LB;
{rb} return RB;
{lsb} return LSB;
{rsb} return RSB;
{comma} return COMMA;
{semicolon} return SEMICOLON;
{underscore} return UNDERSCORE;
{dot} return DOT;
{do} return DO_LOOP;
{while} return WHILE;
{return} return COMEBACK;
{input} return INPUT;
{output} return OUTPUT;
{int_number} return INT_NUMBER;
{float_number} return FLOAT_NUMBER;
{char_ch} return CHAR_VAL;
{string_st} return STRING_VAL;
{identifier} return IDENTIFIER;
{CONSTANT} return CONSTANT;
. ;
%%

int yywrap(void){
return 1;
}
