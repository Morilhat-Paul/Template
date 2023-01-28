/*
** EPITECH PROJECT, 2022
** Pool_Days_08
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include "../../../include/my.h"

char * my_strdup_string(char const *src)
{
    int i = 0;
    char *src_dup = malloc(sizeof(src) + 1);
    for (; src[i] != '\0'; i++)
        src_dup[i] = src[i];
    src_dup[i] = '\0';
    return (src_dup);
}
