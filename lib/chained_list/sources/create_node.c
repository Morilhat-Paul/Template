/*
** EPITECH PROJECT, 2022
** Project
** File description:
** create_node.c
*/

#include "../../../include/my_chained_list.h"

element_t * create_node(void *data)
{
    element_t *element = malloc(sizeof(element_t));
    element->data = data;
    element->next = NULL;
    return (element);
}
