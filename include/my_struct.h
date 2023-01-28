/*
** EPITECH PROJECT, 2022
** Bootstrap
** File description:
** my_struct.h
*/


#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#ifndef MY_STRUCT_H_
    #define MY_STRUCT_H_

    typedef struct element {
        struct element *next;
    } element_t;

#endif /* MY_STRUCT_H_ */
