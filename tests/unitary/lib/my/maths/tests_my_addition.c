/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_addition.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_addition, basic) {
    cr_assert_eq(my_addition(2, 2, 3), 5);
}

Test (my_addition, n_equal_zero) {
    cr_assert_eq(my_addition(0), 0);
}
