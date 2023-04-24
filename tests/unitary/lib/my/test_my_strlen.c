/*
** EPITECH PROJECT, 2022
** Template
** File description:
** test_my_strlen.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strlen, basic) {
    cr_assert_eq(my_strlen("Hello"), strlen("Hello"));
}

Test (my_strlen, empty_str) {
    cr_assert_eq(my_strlen(""), strlen(""));
}
