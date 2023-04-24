/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_compute_square_root.c
*/

#include "../../../../include/my.h"

int my_square_root(int nb)
{
    int i = 1;

    if (nb <= 0)
        return (0);
    for (; i * i != nb; i++);

    return (i);
}
