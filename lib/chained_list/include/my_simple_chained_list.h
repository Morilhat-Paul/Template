/*
** EPITECH PROJECT, 2022
** Template
** File description:
** "my_simple_chained_list.h"
*/

#ifndef MY_SIMPLE_CHAINED_LIST_H_
    #define MY_SIMPLE_CHAINED_LIST_H_

    #include <sys/types.h>
    #include <stdlib.h>

    /**
    ** @brief Element for the chained_list
    ** @param data Pointer to the data you want to store
    ** @param next Pointer to the next element of the list,
    ** NULL if it's the end
    **/
    typedef struct element {
        void *data;
        struct element *next;
    } element_t;

    /**
    ** @brief Create a list
    ** @param n The number of nodes in the list
    ** @param ... All the data (in void *) you want in the list
    ** @return The created list
    **/
    element_t * create_list(size_t n, ...);

    /**
    ** @brief Create one element
    ** @param data Pointer to the data that will
    ** be stock in element
    ** @return Pointer to the new element
    **/
    element_t * create_node(void *data);

    /**
    ** @brief Destroy the list
    ** @param list The list
    **/
    void destroy_list(element_t *list);

    /**
    ** @brief Draw the list
    ** @param list The list
    ** @param pf Pointer to the function that draw
    ** one element of the list
    **/
    void draw_list(element_t *list, void (*pf)(void *));

    /**
    ** @brief Find a node in a list
    ** @param list The list where you want to search
    ** @param to_find The node you want to find
    ** @return Pointer to the desired node or null if it's not found
    **/
    element_t * find_node(element_t *list, element_t *to_find);

    /**
    ** @brief Caclculate the lenght of the list
    ** @param list The list
    ** @return The lenght of the list
    **/
    size_t len_list(element_t *list);

    /**
    ** @brief Remove the last element of the list
    ** @param list Pointer to the list
    ** @return Pointer to the remove element
    **/
    element_t * pop_back(element_t **list);

    /**
    ** @brief Remove the fist element of the list
    ** @param list Pointer to the list
    ** @return Pointer to the remove element
    **/
    element_t * pop_front(element_t **list);

    /**
    ** @brief Add an element at the end of the list
    ** @param list Pointer to the list
    ** @return Pointer to the list
    **/
    element_t * push_back(element_t **list, element_t *element);

    /**
    ** @brief Add an element at the front of the list
    ** @param list Pointer to the list
    ** @return Pointer to the list
    **/
    element_t * push_front(element_t **list, element_t *element);

    /**
    ** @brief Rotate the list from the endde
    ** @param list Pointer to the list you want to rotate
    **/
    void rotate_from_end(element_t **list);

    /**
    ** @brief Rotate the list from the begining
    ** @param list Pointer to the list you want to rotate
    **/
    void rotate_from_beg(element_t **list);

    /**
    ** @brief Swap two element
    ** @param node1 First node
    ** @param node2 Second node
    **/
    void swap_node(element_t *node1, element_t *node2);

#endif /* MY_SIMPLE_CHAINED_LIST_H_ */
