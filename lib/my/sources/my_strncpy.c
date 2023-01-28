/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_strncpy.c
*/

#include "../../../include/my.h"

char *my_strncpy (char *dest, char const *src, int n)
{
    int nb = 0;
    int i = 0;
    while (src[nb] != '\0')
        nb++;
    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    if (n > nb)
        dest[i] = '\0';
    return (dest);
}
