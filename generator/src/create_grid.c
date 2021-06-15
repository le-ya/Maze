/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** create_grid
*/

#include "my.h"

int **create_grid(int **map, int row, int col)
{
    for (int x = 0; x < row; x++) {
        for (int y = 0; y < col; y++)
            map[x][y] = -1;
    }
    return (map);
}