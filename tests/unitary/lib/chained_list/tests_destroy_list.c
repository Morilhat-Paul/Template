/*
** EPITECH PROJECT, 2022
** Template
** File description:
** destroy_list.c
*/

#include <criterion/criterion.h>
#include "my_simple_chained_list.h"

Test (destroy_list, basic) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");

    destroy_list(list);

    cr_assert_not(((char *) list->data == (char *) "Hello"));
}

Test (destroy_list, null_list) {
    destroy_list(NULL);
}
