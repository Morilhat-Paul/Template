/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_nbrcmp.c
*/

#include "../../../../include/my.h"

int my_nbrcmp(ssize_t nb1, ssize_t nb2)
{
    if (nb1 > nb2)
        return (1);

    if (nb1 < nb2)
        return (-1);

    return (0);
}
