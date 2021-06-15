/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** print string
*/

#include "my.h"

void my_putstr(char const *str)
{
    char letter;
    int x = 0;

    while (str[x] != '\0') {
        letter = str[x];
        my_putchar(letter);
        x++;
    }
}
