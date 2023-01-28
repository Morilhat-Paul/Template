/*
** EPITECH PROJECT, 2022
** Project
** File description:
** draw_list.c
*/

#include "../../../include/my.h"

void draw_list (element_t **list)
{
    int i = 0;
    if (*list == NULL) {
        my_putstr("The list is empty\n");
        return;
    }
    for (element_t *it = *list; it != NULL; it = it->next, i++) {
        my_putstr("This is the list !");
    }
    my_putchar('\n');
    return;
}
