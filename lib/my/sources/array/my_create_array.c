/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_create_array.c
*/

#include "my.h"

void ** my_create_array(size_t n, ...)
{
    va_list ptr;
    void **array = malloc(sizeof(void *) * (n + 1));

    va_start(ptr, 0);

    for (size_t i = 0; i < n; i++)
        array[i] = va_arg(ptr, void *);
    array[n] = NULL;

    va_end(ptr);

    return (array);
}
