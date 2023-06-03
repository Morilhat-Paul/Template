/*
** EPITECH PROJECT, 2022
** Template
** File description:
** swap.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (find_node, basic) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");
    element_t *to_find = create_node((void *) "all");

    cr_assert_str_eq((char *) find_node(list, to_find)->data, "all");
}

Test (find_node, not_in_list) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");
    element_t *to_find = create_node((void *) "not_in_list");

    cr_assert_null(find_node(list, to_find));
}
