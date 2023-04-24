/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_strncat.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strncat, basic) {
    cr_assert_str_eq(my_strncat("Hello", "Yo", 2), "HelloYo");
}

Test (my_strncat, dest_is_lower) {
    cr_assert_str_eq(my_strncat("Yo", "Hello", 5), "YoHello");
}

Test (my_strncat, nb_equal_zero) {
    cr_assert_str_eq(my_strncat("Yo", "Hello", 0), "Yo");
}
