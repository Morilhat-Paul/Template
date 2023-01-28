/*
** EPITECH PROJECT, 2022
** mini_printf_bootstrap
** File description:
** my_putnbr.c
*/

#include "../../../include/my.h"

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
