/*
** EPITECH PROJECT, 2022
** Template
** File description:
** is_helper.c
*/

#include "project.h"

bool is_helper(char *arg)
{
    if ((arg[0] == '-') && (arg[1] == 'h') && (arg[2] == '\0'))
        return (true);
    return (false);
}
