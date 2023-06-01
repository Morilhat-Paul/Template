/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_binary_to_decimal.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (my_binary_to_decimal, basic) {
    cr_assert_eq(my_binary_to_decimal("01"), 1);
    cr_assert_eq(my_binary_to_decimal("10"), 2);
    cr_assert_eq(my_binary_to_decimal("110"), 6);
}

Test (my_binary_to_decimal, not_a_binary, .init = redirect_all_stdout) {
    cr_assert_eq(my_binary_to_decimal("120"), -1);
    cr_assert_stderr_eq_str(NOT_A_BINARY);
}
