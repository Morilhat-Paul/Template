/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_str_to_word_array.c
*/

#include <criterion/criterion.h>
#include "my.h"

bool is_separator(char c)
{
    switch (c) {
        case ' ': return (true);
        default: return (false);
    }
    return (false);
}

Test (my_str_to_word_array, basic) {
    char **array = my_str_to_word_array("Hello tous le monde", &is_separator);

    cr_assert_str_eq(array[0], "Hello");
    cr_assert_str_eq(array[1], "tous");
    cr_assert_str_eq(array[2], "le");
    cr_assert_str_eq(array[3], "monde");
    cr_assert_eq(array[4], NULL);
}

Test (my_str_to_word_array, empty_str) {
    cr_assert_eq(my_str_to_word_array("", &is_separator), NULL);
}

Test (my_str_to_word_array, just_separator) {
    cr_assert_eq(my_str_to_word_array("       ", &is_separator), NULL);
}

Test (my_str_to_word_array, just_one_word) {
    char **array = my_str_to_word_array("Hello", &is_separator);
    cr_assert_str_eq(array[0], "Hello");
    cr_assert_eq(array[1], NULL);
}

Test (my_str_to_word_array, null_str) {
    cr_assert_eq(my_str_to_word_array(NULL, &is_separator), NULL);
}

Test (my_str_to_word_array, null_function) {
    cr_assert_eq(my_str_to_word_array("Hello tous le monde", NULL), NULL);
}

Test (my_str_to_word_array, null_str_and_null_function) {
    cr_assert_eq(my_str_to_word_array(NULL, NULL), NULL);
}
