/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_putarray.c
*/

#include "my.h"

static bool error_handling(void **array, void(*put_line)(void *),
                                                char separator)
{
    if (array == NULL)
        return (false);

    if (put_line == NULL) {
        my_perror(PUT_LINE_ERROR);
        return (false);
    }

    if ((separator != '\0') && (!IS_SPACES(separator))) {
        my_perror(NONE_SPACES_SEPARATOR);
        return (false);
    }

    return (true);
}

void my_putarray(void *array[], void(*put_line)(void *), char separator)
{
    if (!error_handling(array, put_line, separator))
        return;

    for (int i = 0; array[i] != NULL; i++) {
        put_line(array[i]);
        if (separator != '\0')
            my_putchar(separator);
    }
}
