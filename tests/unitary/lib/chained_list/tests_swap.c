/*
** EPITECH PROJECT, 2022
** Template
** File description:
** swap.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (swap_node, basic) {

    element_t *node1 = create_node((void *) "Hello");
    element_t *node2 = create_node((void *) "World");

    swap_node(node1, node2);

    cr_assert_str_eq((char *) node1->data, "World");
    cr_assert_null(node1->next);
    cr_assert_str_eq((char *) node2->data, "Hello");
    cr_assert_null(node2->next);
}

Test (swap_node, null_node1) {

    element_t *node1 = NULL;
    element_t *node2 = create_node((void *) "World");

    swap_node(node1, node2);

    cr_assert_str_eq((char *) node2->data, "World");
    cr_assert_null(node2->next);
    cr_assert_null(node1);
}

Test (swap_node, null_node2) {

    element_t *node1 = create_node((void *) "Hello");
    element_t *node2 = NULL;

    swap_node(node1, node2);

    cr_assert_str_eq((char *) node1->data, "Hello");
    cr_assert_null(node1->next);
    cr_assert_null(node2);
}
