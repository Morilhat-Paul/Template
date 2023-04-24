/*
** EPITECH PROJECT, 2022
** Template
** File description:
** test_helper.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "project.h"

Test (helper, true) {
    int ac = 2;
    char *arg = "-h";

    cr_assert_eq(is_helper(arg), true);
}

Test (helper, false) {
    int ac = 2;
    char *arg = "-pash";

    cr_assert_eq(is_helper(arg), false);
}
