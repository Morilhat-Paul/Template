/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** my_strcat.c
*/

#include "my.h"

char * my_strcat(char *dest, char const *src)
{
    if (!src)
        return (dest);

    if (!dest)
        return ((char *) src);

    int lenght = my_strlen(dest) + my_strlen(src);
    char *result = malloc(sizeof(char) * (lenght + 1));
    int i = 0;

    for (; dest[i] != '\0'; i++)
        result[i] = dest[i];
    for (int j = 0; src[j] != '\0'; j++, i++)
        result[i] = src[j];
    result[i] = '\0';

    return (result);
}
