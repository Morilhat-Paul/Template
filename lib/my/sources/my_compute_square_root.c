/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_compute_square_root.c
*/

#include "../../../include/my.h"

int my_compute_square_root(int nb)
{
    for (int i = 1; i * i != 0; i++)
        if (i * i == nb)
            return (i);
    return (0);
}
