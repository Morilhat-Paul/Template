/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_square_root.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_square_root, basic) {
    cr_assert_eq(my_square_root(64), 8);
    cr_assert_eq(my_square_root(81), 9);
}

Test (my_square_root, zero) {
    cr_assert_eq(my_square_root(0), 0);
}

Test (my_square_root, negative) {
    cr_assert_eq(my_square_root(-64), 0);
}
