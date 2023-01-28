/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_sort_int_array.c
*/

#include "../../../include/my.h"

bool is_alpha(char letter)
{
    if ((letter >= 'A') & (letter <= 'Z'))
        return (true);
    if ((letter >= 'a') & (letter <= 'z'))
        return (true);
    if ((letter >= '0') & (letter <= '9'))
        return (true);
    return (false);
}

int count_words(char const *buffer, int nbr_of_words, int x)
{
    if (buffer[0] == '\0')
        return (0);
    for (int y = 0; is_alpha(buffer[x]); y++, x++);
    nbr_of_words++;
    if (buffer[x] != '\0') {
        x++;
        nbr_of_words = count_words(buffer, nbr_of_words, x);
    }
    return (nbr_of_words);
}

int store_word(char *begin, char **dest)
{
    int len = 0;

    while (is_alpha(begin[len]))
        len++;
    *dest = malloc(sizeof(char) * (len + 1));
    (*dest)[len] = '\0';
    for (int i = 0; i < len; i++)
        (*dest)[i] = begin[i];
    return len;
}

char **my_str_to_word_array(char *str)
{
    int nbr_of_words = 0;
    int word = 0;
    nbr_of_words = count_words(str, nbr_of_words, 0);
    if (nbr_of_words == 0)
        return (NULL);
    char **array = malloc(sizeof(char *) * (nbr_of_words + 1));
    array[nbr_of_words] = NULL;
    for (int x = 0; str[x] != '\0';) {
        if (!is_alpha(str[x])) {
            x++;
            continue;
        }
        x += store_word(&str[x], &array[word]);
        word++;
    }
    array[word] = NULL;
    return (array);
}
