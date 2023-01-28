/*
** EPITECH PROJECT, 2022
** Project
** File description:
** destroy_list.c
*/

#include "../../../include/my.h"

void destroy_list (element_t **list)
{
    if (*list == NULL)
        return;
    element_t *it = *list;
    element_t *temp = NULL;
    while (it != NULL) {
        temp = it->next;
        free(it);
        it = temp;
    }
}
