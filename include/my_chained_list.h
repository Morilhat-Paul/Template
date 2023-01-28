/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_chained_list.h
*/

#include "my_struct.h"

#ifndef MY_CHAINED_LIST_H_
    #define MY_CHAINED_LIST_H_

    void draw_list(element_t **list);
    void destroy_list(element_t **list);
    void swap_list(element_t **list);
    void rotate_list_from_beg(element_t **list);
    void rotate_list_from_end(element_t **list);
    element_t * create_node(void);
    element_t * pop_back(element_t **list);
    element_t * pop_front(element_t **list);
    element_t * push_back(element_t **list, element_t *element);
    element_t * push_front(element_t **list, element_t *element);

#endif /* MY_CHAINED_LIST_H_ */
