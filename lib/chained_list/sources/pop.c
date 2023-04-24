/*
** EPITECH PROJECT, 2022
** Project
** File description:
** pop.c
*/

#include "../../../include/my_chained_list.h"

element_t * pop_back(element_t **list)
{
    if ((list == NULL) && (*list == NULL))
        return (NULL);

    element_t *it = *list;
    element_t *last = *list;

    while (it->next != NULL) {
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
    if ((list == NULL) && (*list == NULL))
        return (NULL);

    element_t *first_element = *list;

    *list = first_element->next;
    first_element->next = NULL;

    return (*list);
}
