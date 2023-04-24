/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_putnarray.c
*/

#include "../../../../include/my.h"

static bool error_handling(void **array,
                void(*put_line)(void *), char separator)
{
    if (array == NULL)
        return (false);

    if (put_line == NULL) {
        my_perror(PUT_LINE_ERROR);
        return (false);
    }

    if ((separator != '\0') && (!IS_ALPHA_NUM(separator))) {
        my_perror(NONE_ALPHA_NUM_SEPARATOR);
        return (false);
    }

    return (true);
}

void my_putnarray(void *array[], void(*put_line)(void *), char separator, int n)
{
    if (!error_handling(array, put_line, separator))
        return;

    for (int i = 0; (array[i] != NULL) && (i < n); i++) {
        put_line(array[i]);
        if (separator != '\0')
            my_putchar(separator);
    }
}
