all:
	bison -t -d -v parser.y
	flex lexer.lex
	g++ lex.yy.c parser.tab.c -o gramatica
	./gramatica < exemple.js