/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_getnbr.c
*/

#include "../../../include/my.h"

int my_getnbr(char const *str)
{
    int nb = 0, isneg = 1, i = 0;
    if (str[0] == '-') {
        isneg *= -1;
        i = 1;
    }
    if (str[0] == '+')
        i = 1;
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nb *= 10;
            nb += str[i] - 48;
        }
    }
    return (nb * isneg);
}
