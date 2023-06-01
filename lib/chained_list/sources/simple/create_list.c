/*
** EPITECH PROJECT, 2022
** Template
** File description:
** create_list.c
*/

#include <stdarg.h>
#include "my_simple_chained_list.h"

element_t * create_list(size_t n, ...)
{
    va_list datas;
    element_t *list = NULL;
    element_t *node = NULL;

    va_start(datas, 0);

    for (size_t i = 0; i < n; i++) {
        node = create_node(va_arg(datas, void *));
        push_back(&list, node);
    }

    return (list);
}
