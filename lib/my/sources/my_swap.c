/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_swap.c
*/

#include "../../../include/my.h"

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
