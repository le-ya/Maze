##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make
##

.PHONY: fclean all

SRC	=	$(wildcard src/*.c)

all: COMPIL
COMPIL:	$(SRC:.c=.o)
	@gcc -o generator $(SRC) -g3
	@echo "-> Done"
clean:
	rm -f src/*.o
fclean: clean
	rm -f generator
re: fclean all
