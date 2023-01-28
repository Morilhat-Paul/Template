/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_get_size_file.c
*/

#include "../../../include/my.h"

size_t my_get_size_file(char const *file)
{
    struct stat *infos_file = malloc(sizeof(struct stat));
    stat(file, infos_file);
    ssize_t size = infos_file->st_size;
    free(infos_file);
    return (size);
}
