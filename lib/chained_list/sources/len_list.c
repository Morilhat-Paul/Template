/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** len_list.c
*/

#include "../../../include/my_chained_list.h"

size_t len_list(element_t *list)
{
    size_t lenght = 0;

    while (list) {
        list = list->next;
        lenght++;
    }

    return (lenght);
}
