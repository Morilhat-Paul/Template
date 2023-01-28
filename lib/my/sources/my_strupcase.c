/*
** EPITECH PROJECT, 2022
** tmp
** File description:
** my_strupcase.c
*/

#include "../../../include/my.h"

bool is_upcase(char letter)
{
    if ((letter >= 'A') & (letter <= 'Z'))
        return (true);
    return (false);
}

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\n'; i++) {
        if (!is_upcase(str[i]))
            str[i] -= 32;
    }
    return (0);
}
