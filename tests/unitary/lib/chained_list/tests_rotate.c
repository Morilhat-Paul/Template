/*
** EPITECH PROJECT, 2022
** Template
** File description:
** rotate.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (rotate_from_beg, basic) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");

    rotate_from_beg(&list);

    cr_assert_str_eq((char *) list->data, "all");
    cr_assert_str_eq((char *) list->next->data, "World");
    cr_assert_str_eq((char *) list->next->next->data, "Hello");
    cr_assert_null(list->next->next->next);
}

Test (rotate_from_beg, null_list) {
    element_t *list = NULL;

    rotate_from_beg(&list);
    rotate_from_beg(NULL);

    cr_assert_null(list);
}

Test (rotate_from_end, basic) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");

    rotate_from_end(&list);

    cr_assert_str_eq((char *) list->data, "World");
    cr_assert_str_eq((char *) list->next->data, "Hello");
    cr_assert_str_eq((char *) list->next->next->data, "all");
    cr_assert_null(list->next->next->next);
}

Test (rotate_from_end, null_list) {
    element_t *list = NULL;

    rotate_from_end(&list);
    rotate_from_end(NULL);

    cr_assert_null(list);
}
