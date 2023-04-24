/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_is_prime.c
*/

#include "criterion/criterion.h"
#include "my.h"

Test (my_is_prime, basic_true) {
    cr_assert_eq(my_is_prime(5), true);
}

Test (my_is_prime, basic_false_01) {
    cr_assert_eq(my_is_prime(15), false);
}

Test (my_is_prime, basic_false_02) {
    cr_assert_eq(my_is_prime(4), false);
}

Test (my_is_prime, nb_equal_zero) {
    cr_assert_eq(my_is_prime(0), false);
}

Test (my_is_prime, nb_lower_than_zero) {
    cr_assert_eq(my_is_prime(-1), false);
}
