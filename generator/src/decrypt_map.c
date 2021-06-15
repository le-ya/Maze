/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** decrypt_map
*/

#include "../include/my.h"

void decrypt_map(int **map, int row, int col)
{
    for (int x = 0; x != row; x++) {
        for (int y = 0; y != col; y++) {
            if ((x == 0 && y == 0) || (x == (row - 1) && y == (col - 1)))
                printf("*");
            else if (map[x][y] == -1)
                printf("X");
            else
                printf("*");
        }
        if (x != row - 1)
            printf("\n");
    }
}