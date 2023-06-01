/*
** EPITECH PROJECT, 2022
** Template
** File description:
** testsmy_strcpy.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strdup, null_src) {
    cr_assert_eq(my_strdup(NULL), NULL);
}
