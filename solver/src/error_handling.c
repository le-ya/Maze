/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** error_handling
*/

#include "my.h"

void checkfile(char *filepath)
{
    struct stat size;

    stat(filepath, &size);
    if (size.st_size == 0)
        exit(84);
    if (S_ISREG(size.st_mode) != 1)
        exit(84);
}

int checkchar(char **map, int i, int j)
{
    int res = 0;
    char char_list[] = "X*";

    for (int x = 0; char_list[x] != '\0'
    && char_list[x] != '\n'; x++) {
        if (char_list[x] == map[i][j])
            res++;
    }
    if (res != 1)
        return (84);
    return (0);
}

void error_handling(char **map, int row, int col)
{
    int temp = strlen(map[0]);
    int res = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'
        && map[i][j] != '\n'; j++) {
            if (checkchar(map, i, j) == 84)
                exit(84);
        }
    }
    for (int x = 0; map[x + 1] != NULL; x++) {
        res = strlen(map[x]);
        if (temp != res)
            exit(4);
    }
    if (map[0][0] == 'X' || map[row - 2][col - 2] == 'X') {
        printf("no solution found");
        exit(0);
    }
}