/*
** EPITECH PROJECT, 2022
** Template
** File description:
** test_my_strlen.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (my_putnbr, positive_nbr, .init = redirect_all_stdout) {
    my_putnbr(42);
    cr_assert_stdout_eq_str("42");
}

Test (my_putnbr, negative_nbr, .init = redirect_all_stdout) {
    my_putnbr(-42);
    cr_assert_stdout_eq_str("-42");
}
