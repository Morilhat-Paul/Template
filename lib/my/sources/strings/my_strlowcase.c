/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_strupcase.c
*/

#include "my.h"

char * my_strlowcase(char *str)
{
    char *new_str = NULL;

    if (!str)
        return (NULL);

    new_str = my_strdup(str);

    for (int i = 0; new_str[i] != '\0'; i++)
        if ((IS_ALPHA(new_str[i])) && (!IS_LOWCASE(new_str[i])))
            new_str[i] += 32;

    return (new_str);
}
