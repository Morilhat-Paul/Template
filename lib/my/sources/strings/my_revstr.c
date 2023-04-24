/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_revstr.c
*/

#include "../../../../include/my.h"

void my_revstr(char *str)
{
    size_t lenght = my_strlen(str);
    size_t j = lenght - 1;
    size_t i = 0;

    char *tempstr = malloc(sizeof(char) * (lenght + 1));

    while (str[i] != '\0') {
        tempstr[i] = str[j];
        i++;
        j--;
    }
    tempstr[i] = '\0';

    str = my_strcpy(str, tempstr);
    MY_FREE(tempstr);
}
