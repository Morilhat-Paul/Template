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

Test (my_revstr, basic, .init = redirect_all_stdout) {
    char *str = my_strdup("Hello");
    my_revstr(str);
    cr_assert_str_eq(str, "olleH");
    free(str);
}
