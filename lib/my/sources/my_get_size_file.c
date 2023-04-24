/*
** EPITECH PROJECT, 2022
** Project
** File description:
** my_get_size_file.c
*/

#include "../../../include/my.h"
#include <sys/stat.h>

size_t my_get_size_file(char const *file)
{
    struct stat *infos_file = malloc(sizeof(struct stat));
    ssize_t size = 0;

    stat(file, infos_file);
    size = infos_file->st_size;
    free(infos_file);

    return (size);
}
