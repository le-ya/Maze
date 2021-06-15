/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** startsolver
*/
#include "my.h"

int sizetab(char **tab)
{
    int res = 0;

    for (int i = 0; tab[res] != NULL; res++);
    return (res);
}

void findpath(char **map, int **mapnb)
{
    int maxi = strlen(map[0]);
    int maxj = sizetab(map);
    int distance = 1;
    for (int i = 0; map[i]  != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            while (mapnb[i][j] != -1) {
                mapnb[i][j] = 2;
                exit(0);
                j++;
                distance++;
            }
        }
    }
}