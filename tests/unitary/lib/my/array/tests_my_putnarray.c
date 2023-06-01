/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_putnarray.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

#define RESULT  \
"Hello  tous le monde ! Hello \ttous le monde !\tHello \n" \
"tous le monde !\n"

static void redirect_all_stdout(void) {
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

    my_putnarray((void *) array, &put_line, '\0', 3);

    cr_assert_stdout_eq_str("Hello tous le monde !");
}

Test (my_putnarray, spaces_seprator, .init = redirect_all_stdout) {
    char **array = malloc(sizeof(char *) * 3);
    array[0] = my_strdup("Hello ");
    array[1] = my_strdup("tous le monde !");
    array[2] = NULL;

    my_putnarray((void *) array, &put_line, ' ', 3);
    my_putnarray((void *) array, &put_line, '\t', 3);
    my_putnarray((void *) array, &put_line, '\n', 3);

    cr_assert_stdout_eq_str(RESULT);
}

Test (my_putnarray, none_spaces_seprator, .init = redirect_all_stdout) {
    char **array = malloc(sizeof(char *) * 3);
    array[0] = my_strdup("Hello ");
    array[1] = my_strdup("tous le monde !");
    array[2] = NULL;

    my_putnarray((void *) array, &put_line, '1', 3);

    cr_assert_stderr_eq_str(NONE_SPACES_SEPARATOR);
}

Test (my_putnarray, null_array, .init = redirect_all_stdout) {
    my_putnarray((void *) NULL, &put_line, '\0', 3);
}

Test (my_putnarray, null_put_line, .init = redirect_all_stdout) {
    char **array = malloc(sizeof(char *) * 3);
    array[0] = my_strdup("Hello ");
    array[1] = my_strdup("tous le monde !");
    array[2] = NULL;

    my_putnarray((void *) array, NULL, '\0', 3);

    cr_assert_stderr_eq_str(PUT_LINE_ERROR);
}

Test (my_putnarray, nb_lower_than_array_rows, .init = redirect_all_stdout) {
    char **array = malloc(sizeof(char *) * 3);
    array[0] = my_strdup("Hello ");
    array[1] = my_strdup("tous le monde !");
    array[2] = NULL;

    my_putnarray((void *) array, &put_line, '\0', 1);

    cr_assert_stdout_eq_str("Hello ");
}
