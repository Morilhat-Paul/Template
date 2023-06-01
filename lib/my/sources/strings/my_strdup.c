/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_strdup.c
*/

#include "my.h"

char * my_strdup(char const *src)
{
    if (!src)
        return (NULL);

    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));
    my_strcpy(str, src);

    return (str);
}
