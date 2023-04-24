/*
** EPITECH PROJECT, 2022
** Project
** File description:
** destroy_list.c
*/

#include "../../../include/my_chained_list.h"

void destroy_list(element_t *list)
{
    if (list == NULL)
        return;

    element_t *it = list;
    element_t *temp = NULL;

    while (it) {
        temp = it->next;
        free(it);
        it = temp;
    }
}
