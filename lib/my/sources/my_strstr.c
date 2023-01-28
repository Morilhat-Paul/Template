/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_strstr.c
*/

#include "../../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int nbr = 0;
    int lenght = my_strlen(to_find);
    char *res;
    for (int i = 0; str[i] != '\0'; i++) {
        if (nbr == lenght) {
            res = &str[i - lenght];
            return (res);
        }
        if (str[i] != to_find[nbr])
            nbr = 0;
        if (str[i] == to_find[nbr])
            nbr++;
    }
    return (NULL);
}
