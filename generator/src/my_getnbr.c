/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** my_getnbr.c
*/

#include "my.h"

int my_getnbr(char *str)
{
    int nb = 0;
    int neg = 0;
    int x = 0;

    if (str[0] == '-') {
        neg = 1;
        x = 1;
    } for (; str[x] != '\0'; x++) {
        if (str[x] < '0' || str[x] > '9')
            return (-1);
        else
            nb = nb * 10 + (str[x] - 48);
    } if (neg == 1)
        return (0);
    else
        return (nb);
}