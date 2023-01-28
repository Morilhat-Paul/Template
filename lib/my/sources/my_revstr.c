/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_revstr.c
*/

#include "../../../include/my.h"

void my_revstr(char *str)
{
    for (int i = my_strlen(str) - 1; i >= 0; i--)
        my_putchar(str[i]);
}
