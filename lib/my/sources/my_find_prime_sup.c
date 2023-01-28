/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_find_prime_sup.c
*/

#include "../../../include/my.h"

int is_another_prime (int nb)
{
    int n = 2;
    while (nb % n != 0) {
        n++;
    }
    int i = n;
    if (i == nb) {
        return (nb);
    }
    is_another_prime(nb + 1);
}

int is_prime (int nb)
{
    int n = 2;
    while (nb % n != 0) {
        n++;
    }
    int i = n;
    if (i == nb) {
        return (nb);
    }
    if (i != nb || i != 1) {
        is_another_prime(nb + 1);
    }
    is_prime(n + 1);
}

int my_find_prime_sup(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    int result = is_prime(nb);
    if (result == 1) {
        return (nb);
    } else {
        nb++;
        int result_another_prime = is_another_prime(nb);
        return (result_another_prime);
    }
}
