/*
** EPITECH PROJECT, 2022
** Template
** File description:
** testsmy_is_prime.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_is_prime, basic) {
    cr_assert_eq(my_is_prime(7), true);
    cr_assert_eq(my_is_prime(97), true);
    cr_assert_eq(my_is_prime(48733), true);
}

Test (my_is_prime, not_a_primary) {
    cr_assert_eq(my_is_prime(-1), false);
    cr_assert_eq(my_is_prime(0), false);
    cr_assert_eq(my_is_prime(1), false);
    cr_assert_eq(my_is_prime(100), false);
}
