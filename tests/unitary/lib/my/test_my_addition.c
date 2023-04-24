/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_addition.c
*/

#include "criterion/criterion.h"
#include "my.h"

Test (my_addition, basic) {
    cr_assert_eq(my_addition(2, 3, 2), 5);
}
