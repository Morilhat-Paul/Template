/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_binary_to_decimal.c
*/

#include "criterion/criterion.h"
#include "my.h"

Test (my_binary_to_decimal, basic) {
    cr_assert_eq(my_binary_to_decimal("01"), 1);
}
