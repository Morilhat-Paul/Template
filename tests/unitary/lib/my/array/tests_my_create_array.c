/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_create_array.c
*/

#include <criterion/criterion.h>
#include "project.h"

Test (my_create_array, basic) {
    char **arr = (char **) my_create_array(2, "Hello", "World");
    char *result[3] = { "Hello", "World", NULL };

    cr_assert_str_eq((char *) arr[0], result[0]);
    cr_assert_str_eq((char *) arr[1], result[1]);
    cr_assert_eq((char *) arr[2], result[2]);
}
