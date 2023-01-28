/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_compute_power_rec.c
*/

#include "../../../include/my.h"

int my_compute_power_rec (int nb, int p)
{
    int result = 1;
    if (p < 0)
        return (0);
    if (p == 0)
        return result;
    return (nb * my_compute_power_rec(nb, p - 1));
}
