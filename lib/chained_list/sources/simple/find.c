/*
** EPITECH PROJECT, 2022
** Template
** File description:
** find.c
*/

#include "my_simple_chained_list.h"

element_t * find_node(element_t *list, element_t *to_find)
{
    element_t *it = list;

    while (it->data != to_find->data) {
        it = it->next;
        if (!it)
            return (NULL);
    }

    return (it);
}
