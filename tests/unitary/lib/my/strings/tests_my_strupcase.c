/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_strupcase.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strupcase, basic) {
    cr_assert_str_eq(my_strupcase("He1Lo"), "HE1LO");
}

Test (my_strupcase, null_str) {
    cr_assert_eq(my_strupcase(NULL), NULL);
}
