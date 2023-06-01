/*
** EPITECH PROJECT, 2022
** Include
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include "my_maths.h"
    #include "my_puts.h"
    #include "my_strings.h"
    #include "my_array.h"

    /* Macro for free a pointer
    ** only if the pointer is not NULL or free */
    #define MY_FREE(ptr) \
    do { \
        if (ptr) { \
            free(ptr); \
            ptr = NULL; \
        } \
    } while (0);

    /*Macro for swap two variables */
    #define SWAP(a, b) ({a ^= b; b ^= a; a ^= b;})

    #define MALLOC_ERROR(name) \
    "Malloc: The memory allocation" \
    " failed for " #name "\n"

    /* Macro for malloc a pointer
    ** put an MALLOC_ERROR in stderr */
    #define MY_MALLOC(ptr)   \
    malloc(ptr);    \
        if (!ptr) \
            my_perror(MALLOC_ERROR(ptr));

#endif /* MY_H_ */
