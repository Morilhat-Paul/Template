/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_strupcase.c
*/

#include "../../../../include/my.h"

char * my_strupcase(char *str)
{
    if (!str)
        return (NULL);

    for (int i = 0; str[i] != '\0'; i++)
        if ((IS_ALPHA(str[i])) && (!IS_UPCASE(str[i])))
            str[i] -= 32;

    return (str);
}
