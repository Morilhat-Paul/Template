/*
** EPITECH PROJECT, 2022
** Project
** File description:
** rotate.c
*/

#include "my_simple_chained_list.h"

void rotate_from_beg(element_t **list)
{
    element_t *first_element = NULL;

    if ((list == NULL) || (*list == NULL))
        return;

    first_element = pop_front(list);
    push_back(list, first_element);
}

void rotate_from_end(element_t **list)
{
    element_t *last_element = NULL;

    if ((list == NULL) || (*list == NULL))
        return;

    last_element = pop_back(list);
    push_front(list, last_element);
}
