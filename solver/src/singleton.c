/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** singleton
*/

int maxpos(int single)
{
    static int res;

    if (single != 0)
        res = single;
    return (res);
}