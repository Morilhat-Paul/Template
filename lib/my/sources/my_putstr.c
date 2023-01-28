/*
** EPITECH PROJECT, 2022
** mini_printf_bootstrap
** File description:
** my_putstr.c
*/

#include "../../../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}
