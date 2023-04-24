/*
** EPITECH PROJECT, 2022
** Template
** File description:
** test_my_strlen.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (swap, number) {
    ssize_t nbr1 = 42;
    ssize_t nbr2 = 84;

    SWAP(nbr1, nbr2);

    cr_assert_eq(nbr1, 84);
    cr_assert_eq(nbr2, 42);
}
