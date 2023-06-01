/*
** EPITECH PROJECT, 2022
** Project
** File description:
** swap.c
*/

#include "my_simple_chained_list.h"

void swap_node(element_t *node1, element_t *node2)
{
    element_t *temp = malloc(sizeof(node1));

    if ((!node1) || (!node2))
        return;

    temp->data = node1->data;
    node1->data = node2->data;
    node2->data = temp->data;

    free(temp);
}
