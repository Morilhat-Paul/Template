/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_strlowcase.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strlowcase, basic) {
    cr_assert_str_eq(my_strlowcase("He1Lo"), "he1lo");
}

Test (my_strlowcase, null_str) {
    cr_assert_eq(my_strlowcase(NULL), NULL);
}
