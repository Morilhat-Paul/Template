/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_putnarray.c
*/

#include "../../../include/my.h"

void my_putnarray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        my_putnbr(arr[i]);
}
