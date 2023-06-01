/*
** EPITECH PROJECT, 2022
** Template
** File description:
** testsmy_strcpy.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strcpy, basic) {
    char *src = my_strdup("Hello");
    char *dest = my_strdup("Salut tous le monde");

    my_strcpy(dest, src);

    cr_assert_str_eq(dest, "Hello");
}

Test (my_strcpy, null_src) {
    char *src = my_strdup("Hello");
    char *dest = my_strdup("Salut tous le monde");

    my_strcpy(dest, NULL);

    cr_assert_str_eq(dest, "Salut tous le monde");
}
