/*
** EPITECH PROJECT, 2021
** Dante
** File description:
** main
*/
#include "my.h"

void auto_free(char **map, int **mapnb, int row)
{
    for (int x = 0; x != row - 1; x++) {
        free(mapnb[x]);
    } free(mapnb);
    for (int x = 0; x != row - 1; x++) {
        free(map[x]);
    } free(map);
}

int save_row(int nb)
{
    static int save_r;

    if (nb != 0)
        save_r = nb;
    return (save_r);
}

int **mallocint(int nb_rows, int nb_colls)
{
    int **arr = malloc(sizeof(int *) * nb_rows + 1);

    for (int j = 0; j < nb_rows; j++)
        arr[j] = malloc(sizeof(int) * nb_colls + 1);
    return (arr);
}

int main(int ac, char **av)
{
    int coll;
    int row;
    char **map;
    int **mapnb;

    if (ac != 2)
        return (84);
    checkfile(av[1]);
    map = load_map(av[1], &row, &coll);
    error_handling(map, row, coll);
    mapnb = mallocint(row, coll);
    mapnb = putnbinmap(map, mapnb, row, coll);
    mapnb = add_numbers(mapnb, row, coll);
    mapnb = trace_path(mapnb, row, coll);
    map_convert(map, mapnb, row, coll);
    auto_free(map, mapnb, row);
}