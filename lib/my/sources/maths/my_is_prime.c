/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_is_prime.c
*/

#include "../../../../include/my.h"

bool my_is_prime (int nb)
{
    int n = 2;
    int i;

    if (nb <= 1)
        return (false);

    while (nb % n != 0)
        n++;
    i = n;
    if (i == nb)
        return (true);
    if ((i != nb) || (i != 1))
        return (false);

    my_is_prime(n + 1);
    return (false);
}
