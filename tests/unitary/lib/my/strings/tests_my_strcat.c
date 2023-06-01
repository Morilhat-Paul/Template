/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_strcat.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strcat, basic) {
    cr_assert_str_eq(my_strcat("Hello", "Yo"), "HelloYo");
}

Test (my_strcat, dest_is_lower) {
    cr_assert_str_eq(my_strcat("Yo", "Hello"), "YoHello");
}

Test (my_strcat, dest_empty) {
    cr_assert_str_eq(my_strcat("", "Hello"), "Hello");
}

Test (my_strcat, src_empty) {
    cr_assert_str_eq(my_strcat("Hello", ""), "Hello");
}

Test (my_strcat, null_dest) {
    cr_assert_str_eq(my_strcat(NULL, "Hello"), "Hello");
}

Test (my_strcat, null_src) {
    cr_assert_str_eq(my_strcat("Hello", NULL), "Hello");
}
