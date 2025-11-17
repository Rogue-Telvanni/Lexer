run:
	cd parser && bison -d parser.y
	cd lexer && flex lexer.lex
	g++ -Iparser lexer/lex.yy.c parser/parser.tab.c  -o gramatica
	./gramatica < exemplo-simples.js
	
fail:
	cd parser && bison -d parser.y
	cd lexer && flex lexer.lex
	g++ -Iparser lexer/lex.yy.c parser/parser.tab.c -o gramatica
	./gramatica < exemplo-erro.js
	
clean:
	rm -f lexer/lex.yy.c
	rm -f parser/parser.tab.c parser/parser.tab.h parser/parser.output
	rm -f gramatica
