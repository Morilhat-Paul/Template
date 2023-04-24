/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_compute_power_rec.c
*/

#include "criterion/criterion.h"
#include "my.h"

Test (my_power, basic) {
    cr_assert_eq(my_power(5, 2), 25);
}

Test (my_power, exponent_equal_zero) {
    cr_assert_eq(my_power(5, 0), 1);
}

Test (my_power, exponent_lower_than_zero) {
    cr_assert_eq(my_power(5, -1), 0);
}
