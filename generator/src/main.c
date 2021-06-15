/*
** EPITECH PROJECT, 2021
** main
** File description:
** generator
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    if (error_handling(argc, argv) == 84)
        return (84);
    else
        return (generate_map(argc, argv));
}
