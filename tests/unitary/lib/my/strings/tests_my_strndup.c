/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_strndup.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strndup, null_src) {
    cr_assert_eq(my_strndup(NULL, 6), NULL);
}

Test (my_strndup, nb_equal_zero) {
    char *dest = my_strdup("Hello");

    my_strndup(dest, 0);

    cr_assert_str_eq(dest, "Hello");
}

Test (my_strndup, null_src_and_nb_equal_zero) {
    char *dest = my_strdup("Hello");

    my_strndup(NULL, 0);

    cr_assert_str_eq(dest, "Hello");
}
