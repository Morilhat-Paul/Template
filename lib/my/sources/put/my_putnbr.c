/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_putnbr.c
*/

#include "my.h"

void my_putnbr(ssize_t nb)
{
    if (IS_NEG(nb)) {
        my_putchar('-');
        nb *= -1;
    }

    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    } else
        my_putchar(nb + 48);
}
