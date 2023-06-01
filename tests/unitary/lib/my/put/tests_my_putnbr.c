/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_putnbr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (my_putnbr, positive, .init = redirect_all_stdout) {
    my_putnbr(12);
    cr_assert_stdout_eq_str("12");
}

Test (my_putnbr, negative, .init = redirect_all_stdout) {
    my_putnbr(-12);
    cr_assert_stdout_eq_str("-12");
}
