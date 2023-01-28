/*
** EPITECH PROJECT, 2022
** sources
** File description:
** main.c
*/

#include "../include/project.h"

int main(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            my_putstr(HELPER);
            return (0);
        }
    }
    return (0);
}
   
