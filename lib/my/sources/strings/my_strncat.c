/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_strncat.c
*/

#include "../../../../include/my.h"

char * my_strncat(char *dest, char const *src, int nb)
{
    if ((!src) && (nb == 0))
        return (dest);
    if (!dest)
        return ((char *) src);

    int lenght = my_strlen(dest) + my_strlen(src);
    char *result = malloc(sizeof(char) * (lenght + 1));
    int i = 0;
    int j = 0;

    for (; dest[i] != '\0'; i++)
        result[i] = dest[i];
    while ((src[j] != '\0') && (j < nb)) {
        result[i] = src[j];
        j++;
        i++;
    }
    result[i] = '\0';

    return (result);
}
