/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_strcat.c
*/

#include "../../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int lenght = my_strlen(dest);
    for (int i = 0; src[i] != '\0'; i++, lenght++)
        dest[lenght] = src[i];
    dest[lenght] = '\0';
    return (dest);
}
