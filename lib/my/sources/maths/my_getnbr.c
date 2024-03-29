/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_getnbr.c
*/

#include "my.h"

ssize_t my_getnbr(char const *str)
{
    ssize_t nb = 0;
    int isneg = 1;
    int i = 0;

    if (str[0] == '-') {
        isneg *= -1;
        i = 1;
    }
    if (str[0] == '+')
        i = 1;
    for (; str[i] != '\0'; i++)
        if ((str[i] >= '0') & (str[i] <= '9')) {
            nb *= 10;
            nb += str[i] - 48;
        }

    return (nb * isneg);
}
