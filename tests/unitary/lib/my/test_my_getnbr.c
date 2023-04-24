/*
** EPITECH PROJECT, 2022
** Template
** File description:
** test_my_strlen.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_getnbr, basic_nbr) {
    cr_assert_eq(my_getnbr("42"), 42);
}

Test (my_getnbr, positve_nbr) {
    cr_assert_eq(my_getnbr("+42"), 42);
}

Test (my_getnbr, negative_nbr) {
    cr_assert_eq(my_getnbr("-42"), -42);
}

Test (my_getnbr, no_clean_nbr) {
    cr_assert_eq(my_getnbr("-4AAbnobb2"), -42);
}
