/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** trace_path
*/

#include "my.h"

int save_max(int nb)
{
    static int save_m;

    if (nb != 0)
        save_m = nb;
    return (save_m);
}

void check_move(int *up, int *down, int *right, int *left)
{
    int max = save_max(0);

    if (*up <= 0)
        *up = max;
    if (*down <= 0)
        *down = max;
    if (*right <= 0)
        *right = max;
    if (*left <= 0)
        *left = max;
}

int make_move(int up, int down, int right, int left)
{
    if (up < down && up < right && up < left) {
        return (1);
    } if (down < up && down < right && down < left) {
        return (2);
    } if (right < up && right < down && right < left) {
        return (3);
    } if (left < up && left < down && left < right) {
        return (4);
    } return (0);
}

int find_dir(int max, int **map, int x, int y)
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
    save_max(max);
    check_move(&up, &down, &right, &left);
    return (make_move(up, down, right, left));
}

int **trace_path(int **map, int row, int col)
{
    int x = 0;
    int y = 0;
    int value = 0;
    int max = map[0][0];

    while (x != row - 1 || y != col - 2) {
        value = find_dir(max, map, x, y);
        if (value == 1)
            x -= 1;
        if (value == 2)
            x += 1;
        if (value == 3)
            y += 1;
        if (value == 4)
            y -= 1;
        if (value >= 0 && value <= 4)
            map[x][y] = -2;
    } map[x][y] = -2;
    map[0][0] = -2;
    return (map);
}