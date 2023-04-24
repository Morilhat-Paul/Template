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

Test (my_perror, positive_nbr, .init = redirect_all_stdout) {
    my_perror("Error");
    cr_assert_stderr_eq_str("Error");
}
