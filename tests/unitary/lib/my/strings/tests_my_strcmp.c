/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_strcmp.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strcmp, lower_diff) {
    cr_assert_eq(my_strcmp("Hello", "Yo"), -1);
}

Test (my_strcmp, diff_higher) {
    cr_assert_eq(my_strcmp("Yo", "Hello"), 1);
}

Test (my_strcmp, equal) {
    cr_assert_eq(my_strcmp("Hello", "Hello"), 0);
}

Test (my_strcmp, lower) {
    cr_assert_eq(my_strcmp("Hell", "Hello"), -5);
}

Test (my_strcmp, diff) {
    cr_assert_eq(my_strcmp("Hello", "Hell"), 5);
}

Test (my_strcmp, null_str1) {
    cr_assert_eq(my_strcmp(NULL, "Hello"), -1);
}

Test (my_strcmp, null_str2) {
    cr_assert_eq(my_strcmp("Hello", NULL), 1);
}
