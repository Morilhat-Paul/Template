/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_compute_square_root.c
*/


#include "criterion/criterion.h"
#include "my.h"

Test (my_square_root, basic) {
    cr_assert_eq(my_square_root(25), 5);
}

Test (my_square_root, nb_equal_zero) {
    cr_assert_eq(my_square_root(0), 0);
}

Test (my_square_root, nb_lower_than_zero) {
    cr_assert_eq(my_square_root(-25), 0);
}
