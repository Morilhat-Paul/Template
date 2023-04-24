/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_strncpy.c
*/

#include "criterion/criterion.h"
#include "my.h"

Test (my_strncpy, basic) {
    char *src = my_strdup("Hello");
    char *dest = my_strdup("Salut tous le monde");

    my_strncpy(dest, src, 5);
    free(src);

    cr_assert_str_eq(dest, "Hello");
    free(dest);
}

Test (my_strncpy, dest_is_too_short) {
    char *dest = my_strdup("Hello");
    char *src = my_strdup("Salut tous le monde");

    my_strncpy(dest, src, 6);
    free(src);

    cr_assert_str_eq(dest, "Salut");
    free(dest);
}

Test (my_strncpy, nbr_is_lower_than_dest) {
    char *dest = my_strdup("Hello");
    char *src = my_strdup("Salut tous le monde");

    my_strncpy(dest, src, 2);
    free(src);

    cr_assert_str_eq(dest, "Sa");
    free(dest);
}
