/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** malloc_map
*/

#include "my.h"

int **malloc_map(int row, int col)
{
    int **map = malloc(sizeof(int *) * row + 2);

    for (int x = 0; x < row; x++)
        map[x] = malloc(sizeof(int) * col + 4);
    return (map);
}