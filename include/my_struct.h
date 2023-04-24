/*
** EPITECH PROJECT, 2022
** Include
** File description:
** my_struct.h
*/

#include <stdlib.h>

#ifndef MY_STRUCT_H_
    #define MY_STRUCT_H_

    typedef struct element {
        void *data;
        struct element *next;
    } element_t;

#endif /* MY_STRUCT_H_ */
