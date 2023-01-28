/*
** EPITECH PROJECT, 2022
** include
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include "my_struct.h"
    #include "my_chained_list.h"
    #include <math.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>


    /* All functions of my lib */

    size_t my_get_size_file(char const *file);
    int my_getnbr(char const *str);
    bool my_is_alpha(char letter);
    bool my_isneg(int nbr);
    void my_putchar(char c);
    int my_putnbr(int nb);
    int my_putstr(char const *str);
    void my_revstr(char *str);
    void my_show_params(int ac, char const **av);
    void my_sort_int_array(int *array, int size);
    char **my_str_to_word_array (char *str);
    char *my_strcat(char *dest, char const *src);
    char *my_strcpy(char *dest, char const *src);
    char *my_strdup(char const *src);
    int my_strlen(char const *str);
    char *my_strncat(char *dest, char const *src, int nb);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strstr(char *str, char const *to_find);
    void my_swap(int *a, int *b);
    int my_read_file(const char *file, char **buffer);

#endif /* MY_H_ */
