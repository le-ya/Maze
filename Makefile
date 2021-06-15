##
## EPITECH PROJECT, 2021
## make
## File description:
## makefile
##

.PHONY: fclean all
all: COMPIL

COMPIL:
	@cd generator && make
	@cd solver && make
clean:
	@cd generator && make clean
	@cd solver && make clean
fclean:
	@cd generator && make fclean
	@cd solver && make fclean

re: fclean all
