/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_compute_square_root.c
*/

#include "../../../include/my.h"

int my_compute_square_root(int nb)
{
    int a = 1;
    while (nb * nb != 0) {
        if (a * a == nb)
            return (a);
        a += 1;
    }
    return (0);
}
