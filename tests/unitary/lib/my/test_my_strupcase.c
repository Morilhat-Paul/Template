/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_strupcase.c
*/

#include "criterion/criterion.h"
#include "my.h"

Test (my_strupcase, basic) {
    char *str = my_strdup("Hello");
    cr_assert_str_eq(my_strupcase(str), "HELLO");
    free(str);
}
