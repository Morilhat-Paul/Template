/*
** EPITECH PROJECT, 2022
** Template
** File description:
** show_params.c
*/

#include "../../../include/my.h"

void my_show_params(int ac, char const **av)
{
    for (int i = 0; i < ac; i++) {
        my_putstr(av[i]);
        my_putchar('\t');
    }
}
