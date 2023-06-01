/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_str_to_word_array.c
*/

#include "my.h"

size_t count_words(char const *str, bool (*is_separator)(char))
{
    size_t nb_word = 1;
    size_t nb_separator = 0;

    if (str[0] == '\0')
        return (0);

    for (int i = 0; str[i] != '\0'; i++) {
        nb_separator = 0;
        while (is_separator(str[i])) {
            nb_separator++;
            i++;
        }
        if (nb_separator == my_strlen(str))
            return (0);
        if (nb_separator > 0)
            nb_word++;
    }

    return (nb_word);
}

size_t count_len_word(char *str, bool (*is_separator)(char))
{
    size_t len = 0;

    while ((str[len] != '\0') && (!is_separator(str[len])))
        len++;

    return (len);
}

char ** store_words(char **array, char *str, bool (*is_separator)(char))
{
    size_t i = 0;
    size_t line = 0;
    size_t len_word = 0;

    while (str[i] != '\0') {
        len_word = count_len_word(&str[i], is_separator);
        array[line] = my_strndup(&str[i], len_word);
        i += (len_word);
        if (str[i] == '\0')
            break;
        while (is_separator(str[i]))
            i++;
        line++;
    }

    return (array);
}

char **my_str_to_word_array(char *str, bool (*is_separator)(char))
{
    size_t nb_word = -1;
    char **array = NULL;

    if ((!str) || (!is_separator))
        return (NULL);
    nb_word = count_words(str, is_separator);

    if (nb_word == 0)
        return (NULL);

    array = malloc(sizeof(char *) * (nb_word + 1));
    array[nb_word] = NULL;
    if (nb_word == 1) {
        array[0] = my_strdup(str);
        return (array);
    }
    store_words(array, str, is_separator);

    return (array);
}
