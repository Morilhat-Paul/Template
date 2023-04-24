/*
** EPITECH PROJECT, 2022
** sources
** File description:
** main.c
*/

#include "../include/project.h"

int main(int argc, char **argv)
{
    if ((argc == 2) && (is_helper(argv[1]))) {
        my_putstr(HELPER);
        return (0);
    }
    return (template(argc, argv));
}
