/*
** EPITECH PROJECT, 2022
** Project
** File description:
** push.c
*/

#include "my_simple_chained_list.h"
#include "my.h"

element_t * push_back(element_t **list, element_t *element)
{
    element_t *it = NULL;

    if (element == NULL)
        return (*list);
    if (list == NULL) {
        list = &element;
        return (element);
    }
    if (*list == NULL) {
        element->next = NULL;
        *list = element;
        return (*list);
    }
    it = *list;
    while (it->next != NULL)
        it = it->next;
    element->next = NULL;
    it->next = element;

    return (*list);
}

element_t * push_front(element_t **list, element_t *element)
{
    if (element == NULL)
        return (*list);

    if (list == NULL) {
        list = &element;
        return (element);
    }

    if (*list == NULL) {
        *list = element;
        return (*list);
    }

    element->next = *list;
    *list = element ;

    return (*list);
}
