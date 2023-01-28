/*
** EPITECH PROJECT, 2022
** Project
** File description:
** read_file.c
*/

#include "../../../include/my.h"

int my_read_file(const char *file, char **buffer)
{
    char *buffer_ = *buffer;
    int fd = open(file, O_RDONLY);
    ssize_t size = my_get_size_file(file);
    buffer_ = malloc(sizeof(char) * (size + 1));
    if (fd == -1) {
        my_putstr("Open failed\n");
        return (84);
    }
    ssize_t read_byte = read(fd, buffer_, size);
    if (read_byte == -1) {
        my_putstr("Read failed\n");
        return (84);
    }
    buffer_[size] = '\0';
    *buffer = buffer_;
    close(fd);
    return (0);
}
