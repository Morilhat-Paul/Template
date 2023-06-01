/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_perror.c
*/

#include "my.h"

void my_perror(char *str)
{
    write(2, str, my_strlen(str));
}
