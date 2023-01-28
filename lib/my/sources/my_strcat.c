/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_strcat.c
*/

#include "../../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;
    while (dest[i] != '\0')
        i++;
    while (src[a] != '\0') {
        dest[i] = src[a];
        i++;
        a++;
    }
    dest[i] = '\0';
    return (dest);
}
