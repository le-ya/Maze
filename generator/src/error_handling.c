/*
** EPITECH PROJECT, 2021
** Created by Lucien
** File description:
** error_handling
*/

#include "my.h"

int error_handling(int argc, char **argv)
{
    if (argc < 3 || argc > 4)
        return (84);
    if (my_getnbr(argv[1]) < 1 || my_getnbr(argv[2]) < 1)
        return (84);
    if (argc == 4)
        if (strcmp(argv[3], "perfect") != 0)
            return (84);
}