/*
** EPITECH PROJECT, 2022
** Project
** File description:
** push.c
*/

#include "../../../include/my_chained_list.h"

element_t * push_back(element_t **list, element_t *element)
{
    element_t *it = *list;

    if (element == NULL)
        return (*list);

    if (*list == NULL) {
        element->next = NULL;
        *list = element;
        return (*list);
    }
    while (it->next != NULL)
        it = it->next;
    element->next = NULL;
    it->next = element;

    return (*list);
}

element_t * push_front(element_t **list, element_t *element)
{
    if ((list == NULL) && (*list == NULL)
        && (element != NULL))
        return (element);

    if (element == NULL)
        return (*list);

    element->next = *list;
    *list = element;

    return (*list);
}
