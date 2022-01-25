LEX = lex
YACC = yacc -d

CC = gcc


all: parser clean

parser: y.tab.o lex.yy.o
	$(CC) -o parser y.tab.o lex.yy.o 
	./parser < CS315f20_team16.test.txt


lex.yy.o: lex.yy.c y.tab.h
lex.yy.o y.tab.o: y.tab.c


y.tab.c y.tab.h: CS315f20_team16.yacc.y
	$(YACC) CS315f20_team16.yacc.y


lex.yy.c: CS315f20_team16.lex.l
	$(LEX) CS315f20_team16.lex.l

clean:
	-rm -f *.o lex.yy.c .tab. parser *.output
