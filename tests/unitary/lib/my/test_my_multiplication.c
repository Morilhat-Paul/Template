/*
** EPITECH PROJECT, 2022
** Lem-In
** File description:
** test_my_multiplication.c
*/

#include "criterion/criterion.h"
#include "my.h"

Test (my_multiplication, basic) {
    cr_assert_eq(my_multiplication(2, 2, 2), 4);
}
