/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_binary_to_decimal.c
*/

#include "my.h"

static bool error_handling(char *binary)
{
    for (int i = 0; binary[i] != '\0'; i++) {
        if ((binary[i] == '0') || (binary[i] == '1'))
            continue;
        my_perror(NOT_A_BINARY);
        return (false);
    }

    return (true);
}

size_t my_binary_to_decimal(char *binary)
{
    size_t dec_value = 0;
    size_t base = 1;

    if (!error_handling(binary))
        return (-1);

    for (int i = my_strlen(binary) - 1; i >= 0; i--) {
        if (binary[i] == '1')
            dec_value += base;
        base *= 2;
    }

    return (dec_value);
}
