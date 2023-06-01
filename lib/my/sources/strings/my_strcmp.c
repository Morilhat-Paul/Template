/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char const *str1, char const *str2)
{
    int i = 1;
    if (!str1)
        return (-1);
    if (!str2)
        return (1);

    while ((*str1 != '\0') && (*str2 != '\0')) {
        if (*str1 < *str2)
            return (-i);
        if (*str1 > *str2)
            return (i);
        str1++;
        str2++;
        i++;
    }
    if ((*str1 != *str2) & (*str1 == '\0'))
        return (-i);
    if ((*str1 != *str2) & (*str2 == '\0'))
        return (i);
    return (0);
}
