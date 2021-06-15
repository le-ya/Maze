/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** add_numbers
*/

#include "my.h"

int save_col(int nb)
{
    static int save;

    if (nb != 0)
        save = nb;
    return (save);
}

int **increase_numbers(int **map, int x, int y, int *nb)
{
    int row = save_row(0);
    int col = save_col(0);
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;

    if (x > 0)
        up = map[x - 1][y];
    if (x < row - 1)
        down = map[x + 1][y];
    if (y != 0)
        left = map[x][y - 1];
    if (y < col - 2)
        right = map[x][y + 1];
    if (up > 0 || down > 0 || right > 0 || left > 0) {
        map[x][y] = *nb;
        *nb += 1;
    } return (map);
}

int **find_cases(int **map, int row, int col, int *nb)
{
    for (int x = row - 1; x >= 0; x--) {
        for (int y = col - 2; y >= 0; y--) {
            if (map[x][y] == 0)
                map = increase_numbers(map, x, y, nb);
        }
    }
    return (map);
}

int **add_numbers(int **map, int row, int col)
{
    int nb = 2;

    map[row - 1][col - 2] = 1;
    save_col(col);
    save_row(row);
    while (map[0][0] == 0)
        map = find_cases(map, row, col, &nb);
    return (map);
}