/*
** EPITECH PROJECT, 2022
** Project
** File description:
** draw_list.c
*/

#include "../../../include/my_chained_list.h"
#include "../../../include/my.h"

void draw_list(element_t *list, void (*pf)(void *))
{
    if (list == NULL) {
        my_putstr("The list is empty\n");
        return;
    }

    while (list) {
        (*pf)(list->data);
        list = list->next;
    }
    my_putchar('\n');
}
