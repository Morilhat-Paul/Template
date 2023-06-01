/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_strlen.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strlen, null_str) {
    cr_assert_eq(my_strlen(NULL), 0);
}
