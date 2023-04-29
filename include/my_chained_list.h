/*
** EPITECH PROJECT, 2022
** Include
** File description:
** my_chained_list.h
*/


#ifndef MY_CHAINED_LIST_H_
    #define MY_CHAINED_LIST_H_

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
    ** @brief Draw the list
    ** @param list The list
    ** @param pf Pointer to the function that draw
    ** one element of the list
    **/
    void draw_list(element_t *list, void (*pf)(void *));

    /**
    ** @brief Destroy the list
    ** @param list The list
    **/
    void destroy_list(element_t *list);

    /**
    ** @brief Caclculate the lenght of the list
    ** @param list The list
    ** @return The lenght of the list
    **/
    size_t len_list(element_t *list);

    /**
    ** @brief Create one element
    ** @param data Pointer to the data that will
    ** be stock in element
    ** @return Pointer to the new element
    **/
    element_t * create_node(void *data);

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
    ** @brief Add an element at the end of the list
    ** @param list Pointer to the list
    ** @return Pointer to the list
    **/
    element_t * push_front(element_t **list, element_t *element);

#endif /* MY_CHAINED_LIST_H_ */
