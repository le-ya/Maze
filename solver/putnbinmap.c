/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** putnbinmap
*/

#include "my.h"

int **putnbinmap(char **map, int **mapnb, int row, int col)
{
    for (int i = 0; i != row; i++) {
        for (int j = 0; j != col; j++) {
            if (map[i][j] == '*')
                mapnb[i][j] = 0;
            else
                mapnb[i][j] = -1;
        }
    }
    return (mapnb);
}