/*
** EPITECH PROJECT, 2022
** Template
** File description:
** testsmy_strcpy.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strncpy, basic) {
    char *src = my_strdup("Hello");
    char *dest = my_strdup("Salut tous le monde");

    my_strncpy(dest, src, 5);

    cr_assert_str_eq(dest, "Hello");
}

Test (my_strncpy, nbr_is_lower_than_dest) {
    char *dest = my_strdup("Hello");
    char *src = my_strdup("Salut tous le monde");

    my_strncpy(dest, src, 2);

    cr_assert_str_eq(dest, "Sa");
}

Test (my_strncpy, null_src) {
    char *dest = my_strdup("Hello");
    char *src = my_strdup("Salut tous le monde");

    my_strncpy(dest, NULL, 6);

    cr_assert_str_eq(dest, "Hello");
}

Test (my_strncpy, nb_equal_zero) {
    char *dest = my_strdup("Hello");
    char *src = my_strdup("Salut tous le monde");

    my_strncpy(dest, src, 0);

    cr_assert_str_eq(dest, "Hello");
}

Test (my_strncpy, null_src_and_nb_equal_zero) {
    char *dest = my_strdup("Hello");
    char *src = my_strdup("Salut tous le monde");

    my_strncpy(dest, NULL, 0);

    cr_assert_str_eq(dest, "Hello");
}
