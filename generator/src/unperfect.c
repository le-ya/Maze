/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** unperfect.c
*/

#include "../include/my.h"
#include "time.h"

void check_rand(int *x, int *y)
{
    if (*x < 0)
        *x = *x * (-1);
    if (*x == 0)
        *x = 1;
    if (*y < 0)
        *y = *y * (-1);
    if (*y == 0)
        *y = 1;
}

int **unperfect(int **map, int row, int col)
{
    time_t t;
    int y = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row / 4; j++) {
            y = rand() % col;
            if (y < 0)
                y = y * -1;
            map[i][y] = 0;
        }
    }
    return (map);
}