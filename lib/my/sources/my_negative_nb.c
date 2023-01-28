/*
** EPITECH PROJECT, 2022
** printf
** File description:
** my_negatve_nb.c
*/

#include "../../../include/my.h"

float negative_nb(float nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    return (nb);
}
