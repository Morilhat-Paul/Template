/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_isneg.c
*/

#include "../../../include/my.h"

bool my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
        return (true);
    }
    my_putchar('N');
    return (false);
}
