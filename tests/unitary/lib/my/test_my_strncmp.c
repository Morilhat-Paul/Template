/*
** EPITECH PROJECT, 2022
** Template
** File description:
** test_my_nbrcmp.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strncmp, lower_diff) {
    cr_assert_eq(my_strncmp("Hello", "Yo", 2), -1);
}

Test (my_strncmp, diff_higher) {
    cr_assert_eq(my_strncmp("Yo", "Hello", 2), 1);
}

Test (my_strncmp, equal) {
    cr_assert_eq(my_strncmp("Hello", "Hello", 5), 0);
}

Test (my_strncmp, lower) {
    cr_assert_eq(my_strncmp("Hell", "Hello", 5), -5);
}

Test (my_strncmp, diff) {
    cr_assert_eq(my_strncmp("Hello", "Hell", 5), 5);
}

Test (my_strncmp, null_str1) {
    cr_assert_eq(my_strncmp(NULL, "Hello", 1), -1);
}

Test (my_strncmp, null_str2) {
    cr_assert_eq(my_strncmp("Hello", NULL, 1), 1);
}
