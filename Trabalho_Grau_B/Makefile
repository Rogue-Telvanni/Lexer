CFLAGS += -Iparser

IR ?= no
DEBUG ?= 0

ifeq ($(IR), yes)
CFLAGS += -DIR_ENABLED
endif

ifeq ($(DEBUG), 1)
CFLAGS += -DDEBUG
endif

run:
	cd parser && bison -d parser.y
	cd lexer && flex lexer.l
	g++ $(CFLAGS) lexer/lex.yy.c parser/parser.tab.c  -o gramatica
	./gramatica < exemplos/$(FILE)
	
clean:
	rm -f lexer/lex.yy.c
	rm -f parser/parser.tab.c parser/parser.tab.h parser/parser.output
	rm -f gramatica
