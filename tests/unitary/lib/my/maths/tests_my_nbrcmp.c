/*
** EPITECH PROJECT, 2022
** Template
** File description:
** tests_my_nbrcmp.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_nbrcmp, basic) {
    cr_assert_eq(my_nbrcmp(0, 1), -1);
    cr_assert_eq(my_nbrcmp(1, 0), 1);
    cr_assert_eq(my_nbrcmp(1, 1), 0);
}
