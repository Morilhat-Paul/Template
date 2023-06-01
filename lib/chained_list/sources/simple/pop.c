/*
** EPITECH PROJECT, 2022
** Project
** File description:
** pop.c
*/

#include "my_simple_chained_list.h"

element_t * pop_back(element_t **list)
{
    element_t *it = NULL;
    element_t *last = NULL;

    if ((list == NULL) || (*list == NULL))
        return (NULL);

    it = *list;
    last = *list;

    while (it->next) {
        last = it;
        it = it->next;
    }
    if (it == *list)
        *list = NULL;
    last->next = NULL;

    return (it);
}

element_t * pop_front(element_t **list)
{
    element_t *first_element = NULL;

    if ((list == NULL) || (*list == NULL))
        return (NULL);

    first_element = *list;

    *list = first_element->next;
    first_element->next = NULL;

    return (first_element);
}
