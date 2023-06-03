/*
** EPITECH PROJECT, 2022
** Template
** File description:
** len_list.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (len_list, basic) {
    element_t *list = NULL;

    push_back(&list, create_node((void *) "Hello"));
    push_back(&list, create_node((void *) "all"));
    push_back(&list, create_node((void *) "World"));

    cr_assert_eq(len_list(list), 3);
}
