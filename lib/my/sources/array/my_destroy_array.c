/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_create_array.c
*/

#include "../../../../include/my.h"

void my_destroy_array(void **array)
{
    if (array == NULL)
        return;

    for (size_t i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
