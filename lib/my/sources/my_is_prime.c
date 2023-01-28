/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_is_prime.c
*/

#include "../../../include/my.h"

int my_is_prime (int nb)
{
    if (nb <= 1)
        return (0);
    int n = 2;
    while (nb % n != 0)
        n++;
    int i = n;
    if (i == nb)
        return (1);
    if (i != nb || i != 1)
        return (0);
    my_is_prime(n + 1);
}
