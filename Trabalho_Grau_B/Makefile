all:
	bison -t -d -v parser.y
	flex lexer.lex
	g++ lex.yy.c parser.tab.c -lfl
	./a.out exemple.js