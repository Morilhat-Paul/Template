/*
** EPITECH PROJECT, 2022
** Template
** File description:
** test_my_nbrcmp.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_nbrcmp, lower) {
    cr_assert_eq(my_nbrcmp(0, 1), -1);
}

Test (my_nbrcmp, higher) {
    cr_assert_eq(my_nbrcmp(1, 0), 1);
}

Test (my_nbrcmp, equal) {
    cr_assert_eq(my_nbrcmp(0, 0), 0);
}
