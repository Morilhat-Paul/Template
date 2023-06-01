/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_destroy_array.c
*/

#include <criterion/criterion.h>
#include "project.h"

Test (my_destroy_array, basic) {
    char **array = malloc(sizeof(char *) * 3);
    array[0] = my_strdup("Hello ");
    array[1] = my_strdup("tous le monde !");
    array[2] = NULL;

    my_destroy_array((void **) array);
}

Test (my_destroy_array, null) {
    my_destroy_array(NULL);
}
