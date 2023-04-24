/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_strstr.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strstr, basic) {
    char *to_find = "Hello";
    char *str = "Hello tous le monde";

    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "Hello tous le monde");
}

Test (my_strstr, no_find) {
    char *to_find = "Salut";
    char *str = "Hello tous le monde";

    char *result = my_strstr(str, to_find);

    cr_assert_eq(result, NULL);
}

Test (my_strstr, find_in_middle) {
    char *to_find = "tous";
    char *str = "Hello tous le monde";

    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "tous le monde");
}
