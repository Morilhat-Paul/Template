/*
** EPITECH PROJECT, 2022
** Project
** File description:
** pop.c
*/

#include "../../../include/my.h"

element_t * pop_back (element_t **list)
{
    element_t *it = *list;
    element_t *last = *list;
    if (it == NULL)
        return (it);
    while (it->next != NULL) {
        last = it;
        it = it->next;
    }
    if (it == *list)
        *list = NULL;
    last->next = NULL;
    return (it);
}

element_t * pop_front (element_t **list)
{
    element_t *first_element = *list;
    if (first_element == NULL)
        return (NULL);
    *list = first_element->next;
    first_element->next = NULL;
    return (first_element);
}
