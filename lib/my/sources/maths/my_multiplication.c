/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_addition.c
*/

#include "../../../../include/my.h"

ssize_t my_multiplication(int n, ...)
{
    ssize_t total = 1;
    va_list ptr;

    if (n == 0)
        return (0);

    va_start(ptr, n);
    for (int i = 0; i < n; i++)
        total *= va_arg(ptr, int);
    va_end(ptr);

    return (total);
}
