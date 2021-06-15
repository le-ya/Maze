/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my
*/

#ifndef MYH
#define MYH

#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

typedef struct {
    int x;
    int y;
}poso;

int row1(char *filepath);
int coll1(char *filepath);
int maxpos(int single);
int save_row(int nb);
int save_col(int nb);
int **putnbinmap(char **map, int **mapnb, int row, int col);
int **add_numbers(int **map, int row, int col);
void findpath(char **map, int **mapnb);
void my_putchar(char c);
void my_putstr(char *str);
void checkfile(char *filepath);
void error_handling(char **map, int row, int col);
void map_convert(char **map, int **mapnb, int row, int coll);
char **load_map(char *name, int *row, int *col);
int **trace_path(int **map, int row, int col);


#endif /* !MYH */