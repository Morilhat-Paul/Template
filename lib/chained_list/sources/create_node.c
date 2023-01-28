/*
** EPITECH PROJECT, 2022
** Project
** File description:
** create_node.c
*/

#include "../../../include/my.h"

element_t * create_node (void)
{
    element_t *element = malloc(sizeof(element_t));
    element->next = NULL;
    return (element);
}
