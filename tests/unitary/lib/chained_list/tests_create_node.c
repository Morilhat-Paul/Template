/*
** EPITECH PROJECT, 2022
** Template
** File description:
** create_node.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (create_node, basic) {
    element_t *node = create_node((void *) "Hello");

    cr_assert_str_eq((char *) node->data, "Hello");
    cr_assert_null(node->next);
}
