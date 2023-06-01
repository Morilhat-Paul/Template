/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_addchar.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (my_addchar, basic) {
    cr_assert_str_eq(my_addchar("Hello", 'P', 6), "HelloP");
}

Test (my_addchar, end) {
    cr_assert_str_eq(my_addchar("Hello", 'P', 0), "HelloP");
}

Test (my_addchar, first) {
    cr_assert_str_eq(my_addchar("Hello", 'P', 1), "PHello");
}

Test (my_addchar, positon_higher_than_strlen, .init = redirect_all_stdout) {
    cr_assert_eq(my_addchar("Hello", 'P', 8), NULL);
    cr_assert_stderr_eq_str(WRONG_POSITION);
}
