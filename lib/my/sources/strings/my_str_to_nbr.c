/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_str_to_number.c
*/

#include "../../../../include/my.h"

size_t calul_lenght_number(size_t nbr)
{
    size_t lenght = 0;

    while (nbr >= 1) {
        nbr /= 10;
        lenght++;
    }

    return (lenght);
}

char * my_nbr_to_str(ssize_t nbr)
{
    size_t lenght = calul_lenght_number(nbr);
    char *str = malloc(sizeof(char) * (lenght + 1));
    size_t decimal = 0;
    size_t i = 0;

    str[lenght] = '\0';
    while (i < lenght) {
        decimal = nbr % 10;
        str[i] = decimal + 48;
        nbr /= 10;
        i++;
    }
    my_revstr(str);

    return (str);
}
