/*
** EPITECH PROJECT, 2022
** Template
** File description:
** pop.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (pop_back, basic) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");

    cr_assert_str_eq((char *) pop_back(&list)->data, "World");
    cr_assert_str_eq((char *) list->data, "Hello");
    cr_assert_str_eq((char *) list->next->data, "all");
    cr_assert_null(list->next->next);
}

Test (pop_back, null_list) {
    element_t *list = NULL;

    cr_assert_null(pop_back(&list));
    cr_assert_null(list);

    cr_assert_null(pop_back(NULL));
}

Test (pop_back, one_node) {
    element_t *list = create_node((void *) "Hello");

    cr_assert_str_eq((char *) pop_back(&list)->data, "Hello");
    cr_assert_null(list);
}

Test (pop_front, basic) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");

    cr_assert_str_eq((char *) pop_front(&list)->data, "Hello");
    cr_assert_str_eq((char *) list->data, "all");
    cr_assert_str_eq((char *) list->next->data, "World");
    cr_assert_null(list->next->next);
}

Test (pop_front, null_list) {
    element_t *list = NULL;

    cr_assert_null(pop_front(&list));
    cr_assert_null(list);

    cr_assert_null(pop_front(NULL));
}

Test (pop_front, one_node) {
    element_t *list = create_node((void *) "Hello");

    cr_assert_str_eq((char *) pop_front(&list)->data, "Hello");
    cr_assert_null(list);
}
