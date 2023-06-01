/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_multiplication.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_multiplication, basic) {
    cr_assert_eq(my_multiplication(2, 2, 5), 10);
    cr_assert_eq(my_multiplication(2, 2, -5), -10);
}

Test (my_multiplication, n_equal_zero) {
    cr_assert_eq(my_multiplication(0), 0);
}
