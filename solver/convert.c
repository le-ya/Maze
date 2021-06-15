/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** convert
*/

#include "include/my.h"

void printmap(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        printf("%s", map[i]);
}

void map_convert(char **map, int **mapnb, int row, int coll)
{
    for (int i = 0; i != row - 1; i++) {
        for (int j = 0; j != coll - 1; j++) {
            if (mapnb[i][j] == -2)
                printf("o");
            else if (mapnb[i][j] == -1)
                printf("X");
            else
                printf("*");
        }
        printf("\n");
    } for (int x = 0; x != coll - 1; x++) {
        if (mapnb[row - 1][x] == -2)
            printf("o");
        else if (mapnb[row - 1][x] == -1)
            printf("X");
        else
            printf("*");
    }
}