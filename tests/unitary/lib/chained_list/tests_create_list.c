/*
** EPITECH PROJECT, 2022
** Template
** File description:
** create_node.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (create_list, basic) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");

    cr_assert_str_eq((char *) list->data, "Hello");
    cr_assert_str_eq((char *) list->next->data, "all");
    cr_assert_str_eq((char *) list->next->next->data, "World");
    cr_assert_null(list->next->next->next);
}
