/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** broken_walls
*/

#include "my.h"
#include "time.h"

int **replace_number(int **map, int col, int x)
{
    int alea = 0;

    alea = rand() % col;
    if (alea < 0)
        alea = alea * (-1);
    map[x][alea] = '*';
    return (map);
}

int **rand_dir(int **map, int x, int y)
{
    if (rand() % 2 == 0)
        map[x - 1][y] = 0;
    else
        map[x][y - 1] = 0;
    return (map);
}

int **binary_tree(int **map, int col, int x)
{
    for (int y = 0; y < col; y += 2) {
        map[x][y] = 0;
        if (x != 0 && y != 0) {
            if (map[x - 2][y] == 0 && map[x][y - 2] == 0)
                map = rand_dir(map, x, y);
        } else if (x != 0) {
            if (map[x - 2][y] == 0)
                map[x - 1][y] = 0;
        } else {
            if (y != 0 && map[x][y - 2] == 0)
                map[x][y - 1] = 0;
        }
    }
}

int **broken_walls(int **map, int row, int col)
{
    time_t t;

    srand((unsigned) time(&t));
    map[0][0] = 0;
    for (int x = 0; x < row; x += 2) {
        binary_tree(map, col, x);
    } if (row % 2 == 0)
        map[row - 2][col - 1] = 0;
    return (map);
}