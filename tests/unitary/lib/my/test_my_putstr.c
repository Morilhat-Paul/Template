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

Test (my_putstr, basic, .init = redirect_all_stdout) {
    my_putstr("Hello");
    cr_assert_stdout_eq_str("Hello");
}
