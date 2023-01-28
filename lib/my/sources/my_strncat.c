/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_strncat.c
*/

#include "../../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int lenght = my_strlen(dest);
    while (src[i] != '\0' && i < nb) {
        dest[lenght] = src[i];
        i++;
        lenght++;
    }
    dest[lenght] = '\0';
    return (0);
}
