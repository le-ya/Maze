##
## EPITECH PROJECT, 2020
## make
## File description:
## makefile
##

.PHONY: fclean all
SRC		=	load_2d_arr_from_file.c \
			putnbinmap.c \
			singleton.c \
			startsolver.c \
			add_numbers.c	\
			error_handling.c \
			trace_path.c	\
			convert.c		\
			main.c

all: COMPIL

NAME = solver

OBJ = $(SRC:.c=.o)

COMPIL:
	gcc -o $(NAME) -I include/ $(SRC) -g3

clean:
	rm -f *.o
	rm $(NAME)

fclean: clean
re: fclean all
