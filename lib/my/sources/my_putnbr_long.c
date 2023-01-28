/*
** EPITECH PROJECT, 2022
** mini_printf_bootstrap
** File description:
** my_putnbr.c
*/

#include "../../../include/my.h"

int my_putnbr_long(long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        my_putnbr_long(nb / 10);
        my_putnbr_long(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
