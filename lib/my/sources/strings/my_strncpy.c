/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_strncpy.c
*/

#include "../../../../include/my.h"

char * my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if ((!src) && (n == 0))
        return (dest);

    while ((src[i] != '\0') && (i < n)) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}
