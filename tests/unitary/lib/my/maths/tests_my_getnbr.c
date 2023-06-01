/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_getnbr.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_getnbr, basicc) {
    cr_assert_eq(my_getnbr("+12"), 12);
}

Test (my_getnbr, positive) {
    cr_assert_eq(my_getnbr("12"), 12);
}

Test (my_getnbr, negative) {
    cr_assert_eq(my_getnbr("-12"), -12);
}

Test (my_getnbr, not_a_number) {
    cr_assert_eq(my_getnbr("1A2"), 12);
}
