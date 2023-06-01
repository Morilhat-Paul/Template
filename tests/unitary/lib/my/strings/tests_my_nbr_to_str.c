/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_nbr_to_str.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_nbr_to_str, positive) {
    cr_assert_str_eq(my_nbr_to_str(12), "12");
}

Test (my_nbr_to_str, neagative) {
    cr_assert_str_eq(my_nbr_to_str(-12), "-12");
}
