/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** generate
*/

#include "my.h"

void auto_free(int **map, int row)
{
    for (int x = 0; x != row; x++)
        free(map[x]);
    free(map);
}

int generate_map(int argc, char **argv)
{
    int row = atoi(argv[2]);
    int col = atoi(argv[1]);
    int **map;

    map = malloc_map(row, col);
    map = create_grid(map, row, col);
    map = broken_walls(map, row, col);
    if (argc == 4)
        decrypt_map(map, row, col);
    else {
        map = unperfect(map, row, col);
        decrypt_map(map, row, col);
    }
    auto_free(map, row);
    return (0);
}