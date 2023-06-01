/*
** EPITECH PROJECT, 2022
** Template
** File description:
** is_helper.c
*/

#include <criterion/criterion.h>
#include "project.h"

Test (is_helper, basic) {
    cr_assert_eq(is_helper("-h"), true);
}

Test (is_helper, basic_verbose) {
    cr_assert_eq(is_helper("--helper"), true);
}

Test (is_helper, not_helper) {
    cr_assert_eq(is_helper("-pash"), false);
}
