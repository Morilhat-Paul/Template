/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_power.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_power, basic) {
    cr_assert_eq(my_power(3, 2), 9);
    cr_assert_eq(my_power(3, 3), 27);
}

Test (my_power, p_equal_zero) {
    cr_assert_eq(my_power(3, 0), 1);
}

Test (my_power, p_negative) {
    cr_assert_eq(my_power(3, -1), 0);
}
