/*
** EPITECH PROJECT, 2022
** Template
** File description:
** draw_list.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_simple_chained_list.h"
#include "my.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stderr();
    cr_redirect_stdout();
}

static void draw_node(void *data)
{
    my_putstr((char *) data);
}

Test (draw_list, basic, .init = redirect_all_stdout) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");

    draw_list(list, &draw_node);

    cr_assert_stdout_eq_str("HelloallWorld\n");
}

Test (draw_list, null_list, .init = redirect_all_stdout) {
    draw_list(NULL, &draw_node);
    cr_assert_stdout_eq_str("The list is empty\n");
}

Test (draw_list, null_function, .init = redirect_all_stdout) {
    element_t *list = create_list(3, (void *) "Hello", (void *) "all", (void *) "World");

    draw_list(list, NULL);
    cr_assert_stderr_eq_str("The function pointer is null\n");
}

Test (draw_list, null_list_and_null_function, .init = redirect_all_stdout) {
    draw_list(NULL, NULL);
    cr_assert_stdout_eq_str("The list is empty\n");
}
