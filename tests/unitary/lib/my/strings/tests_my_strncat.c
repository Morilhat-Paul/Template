/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_strncat.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strncat, basic) {
    cr_assert_str_eq(my_strncat("Hello", "Yo", 2), "HelloYo");
}

Test (my_strncat, dest_is_lower) {
    cr_assert_str_eq(my_strncat("Yo", "Hello", 5), "YoHello");
}

Test (my_strncat, nb_equal_zero) {
    cr_assert_str_eq(my_strncat("Yo", "Hello", 0), "Yo");
}

Test (my_strncat, nb_lower_than_strlen) {
    cr_assert_str_eq(my_strncat("Yo", "Hello", 2), "YoHe");
}

Test (my_strncat, nb_higher_than_strlen) {
    cr_assert_str_eq(my_strncat("Yo", "Hello", 8), "YoHello");
}

Test (my_strncat, nb_equal_zero_and_null_src) {
    cr_assert_str_eq(my_strncat("Yo", NULL, 0), "Yo");
}

Test (my_strncat, null_dest) {
    cr_assert_str_eq(my_strncat(NULL, "Hello", 5), "Hello");
}
