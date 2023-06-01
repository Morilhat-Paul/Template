/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_strndup.c
*/

#include "my.h"

char * my_strndup(char const *src, int n)
{
    if ((!src) || (n == 0))
        return (NULL);

    char *str = malloc(sizeof(char) * (n + 1));
    my_strncpy(str, src, n);

    return (str);
}
