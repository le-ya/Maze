/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** header
*/

#ifndef _GENERATOR_
#define _GENERATOR_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_getnbr(char *str);
int error_handling(int argc, char **argv);
int generate_map(int argc, char **argv);
int **malloc_map(int row, int col);
int **create_grid(int **map, int row, int col);
int **broken_walls(int **map, int row, int col);
void decrypt_map(int **map, int row, int col);
void gen_rand(int *x, int *y, int row, int col);
int loop_status(int **map, int row, int col);
int **unperfect(int **map, int row, int col);

#endif /* _GENERATOR_ */