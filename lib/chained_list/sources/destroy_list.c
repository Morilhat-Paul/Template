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
    for (element_t *it = *list; it != NULL; it = it->next) {
        free(it);
    }
}
