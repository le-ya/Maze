##
## EPITECH PROJECT, 2020
## make
## File description:
## makefile
##

.PHONY: fclean all

SRC 	=	$(wildcard src/*.c)

CFLAGS	=	-I./include -g3

NAME	=	solver

all: COMPIL
COMPIL:	$(SRC:.c=.o)
	@gcc -o $(NAME) $(SRC) $(CFLAGS)
	@echo "-> Done"
clean:
	rm -f src/*.o
fclean: clean
	rm -f $(NAME)
re: fclean all
