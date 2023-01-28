/*
** EPITECH PROJECT, 2022
** Template
** File description:
** is_aplha.c
*/

#include "../../../include/my.h"

bool my_is_alpha(char letter)
{
    if ((letter >= 'A') & (letter <= 'Z'))
        return (true);
    if ((letter >= 'a') & (letter <= 'z'))
        return (true);
    if ((letter >= '0') & (letter <= '9'))
        return (true);
    return (false);
}
