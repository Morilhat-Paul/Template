/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_strncmp.c
*/

#include "../../../include/my.h"

int is_diff(char const c1, char const c2, int lenght)
{
    if (c1 > c2)
        return (lenght);
    if (c1 < c2)
        return (-lenght);
    return (0);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int lenght = 0; lenght < n; lenght++) {
        if (s1[lenght] != s2[lenght])
            return (is_diff(s1[lenght], s2[lenght], lenght));
    }
    return (-1);
}
