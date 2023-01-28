/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_isneg.c
*/

#include "../../../include/my.h"

bool my_isneg(int nbr)
{
    if (nbr >= 0) {
        my_putchar('P');
        return (false);
    }
    my_putchar('N');
    return (true);
}
