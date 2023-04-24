/*
** EPITECH PROJECT, 2022
** Template
** File description:
** test_my_addchar.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_addchar, basic) {
    char *newstr = my_addchar("Hello", 'P', 6);
    cr_assert_str_eq(newstr, "HelloP");
}

Test (my_addchar, end) {
    char *newstr = my_addchar("Hello", 'P', 0);
    cr_assert_str_eq(newstr, "HelloP");
}

Test (my_addchar, first) {
    char *newstr = my_addchar("Hello", 'P', 1);
    cr_assert_str_eq(newstr, "PHello");
}
