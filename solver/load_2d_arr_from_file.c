/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** load_map
*/

#include "../include/my.h"

int num_row(char *str)
{
    int row = 0;

    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] == '\n')
            row++;
    } return (row + 1);
}

int num_col(char *str)
{
    int row = 0;
    int row_max = 0;
    int x = 0;

    while (str[x] != '\0') {
        for (row = 0; str[x] != '\0' && str[x] != '\n'; x++, row++);
        if (row > row_max)
            row_max = row;
        x++;
    } return (row_max + 1);
}

int map_size(char *name)
{
    struct stat size;
    if (stat(name, &size) == -1)
        exit(84);
    return (size.st_size + 1);
}

char **arr_to_map(char *str)
{
    int row = num_row(str);
    int col = num_col(str);
    int add = 0;
    int inc = 0;
    char **map = malloc(sizeof(char *) * row + 2);

    for (int x = 0; x < row; x++) {
        map[x] = malloc(sizeof(char) * col + 1);
    } for (int x = 0; str[x] != '\0'; x++) {
        map[add][inc++] = str[x];
        if (str[x] == '\n') {
            map[add][inc] = '\0';
            add++;
            inc = 0;
        }
    } map[add + 1] = NULL;
    return (map);
}

char **load_map(char *name, int *row, int *col)
{
    int fd = 0;
    int buffsize = map_size(name);
    char *buffer = malloc(sizeof(char) * buffsize);
    char **map;

    fd = open(name, O_RDONLY);
    if (fd < 0)
        exit(84);
    read(fd, buffer, buffsize);
    if (buffer[0] == '\0')
        exit(84);
    buffer[buffsize - 1] = '\0';
    *row = num_row(buffer);
    *col = num_col(buffer);
    map = arr_to_map(buffer);
    free(buffer);
    return (map);
}