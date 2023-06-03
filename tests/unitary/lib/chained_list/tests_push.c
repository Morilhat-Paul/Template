/*
** EPITECH PROJECT, 2022
** Template
** File description:
** push.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (push_back, basic) {
    element_t *list = create_list(2, (void *) "Hello", (void *) "all");

    cr_assert_str_eq((char *) push_back(&list, create_node((void *) "World") )->data, "Hello");
    cr_assert_str_eq((char *) list->data, "Hello");
    cr_assert_str_eq((char *) list->next->data, "all");
    cr_assert_str_eq((char *) list->next->next->data, "World");
    cr_assert_null(list->next->next->next);
}

Test (push_back, null_list) {
    element_t *list = NULL;

    cr_assert_str_eq(push_back(&list, create_node((void *) "Hello"))->data, "Hello");
    cr_assert_str_eq((char *) list->data, "Hello");
    cr_assert_null(list->next);

    cr_assert_str_eq((char *) push_back(NULL, create_node((void *) "Hello"))->data, "Hello");
}

Test (push_back, null_element) {
    element_t *list = create_list(2, (void *) "Hello", (void *) "all");

    cr_assert_str_eq(push_back(&list, NULL)->data, "Hello");
    cr_assert_str_eq((char *) list->data, "Hello");
    cr_assert_str_eq((char *) list->next->data, "all");
    cr_assert_null(list->next->next);
}

Test (push_front, basic) {
    element_t *list = create_list(2, (void *) "all", (void *) "World");

    cr_assert_str_eq((char *) push_front(&list, create_node((void *) "Hello"))->data, "Hello");
    cr_assert_str_eq((char *) list->data, "Hello");
    cr_assert_str_eq((char *) list->next->data, "all");
    cr_assert_str_eq((char *) list->next->next->data, "World");
    cr_assert_null(list->next->next->next);
}

Test (push_front, null_list) {
    element_t *list = NULL;

    cr_assert_str_eq((char *) push_front(&list, create_node((void *) "Hello"))->data, "Hello");
    cr_assert_str_eq((char *) list->data, "Hello");
    cr_assert_null(list->next);

    cr_assert_str_eq((char *) push_front(NULL, create_node((void *) "Hello"))->data, "Hello");
}

Test (push_front, null_element) {
    element_t *list = create_list(2, (void *) "Hello", (void *) "all");

    cr_assert_str_eq((char *) push_front(&list, NULL)->data, "Hello");
    cr_assert_str_eq((char *) list->data, "Hello");
    cr_assert_str_eq((char *)list->next->data, "all");
    cr_assert_null((char *) list->next->next);
}
