/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_binary_to_decimal.c
*/

#include "../../../include/my.h"

int my_binary_to_decimal(char *binary)
{
    int dec_value = 0;
    int base = 1;
    for (int i = my_strlen(binary) - 1; i >= 0; i--) {
        if (binary[i] == '1')
            dec_value += base;
        base *= 2;
    }
    return (dec_value);
}
