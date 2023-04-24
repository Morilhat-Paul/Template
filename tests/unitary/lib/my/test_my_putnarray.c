/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_putarray.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void put_line(void *line)
{
    my_putstr((char *) line);
}

Test (my_putnarray, basic_str, .init = redirect_all_stdout) {
    char **array = malloc(sizeof(char *) * 3);
    array[0] = my_strdup("Hello ");
    array[1] = my_strdup("tous le monde !");
    array[2] = NULL;

    my_putnarray((void *) array, &put_line, '\0', 2);
    free(array[0]);
    free(array[1]);
    free(array);

    cr_assert_stdout_eq_str("Hello tous le monde !");
}

Test (my_putnarray, n_equal_zero, .init = redirect_all_stdout) {
    char **array = malloc(sizeof(char *) * 3);
    array[0] = my_strdup("Hello ");
    array[1] = my_strdup("tous le monde !");
    array[2] = NULL;

    my_putnarray((void *) array, &put_line, '\0', 3);
    free(array[0]);
    free(array[1]);
    free(array);

    cr_assert_stdout_eq_str("Hello tous le monde !");
}
