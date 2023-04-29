/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_maths.h
*/

#ifndef MY_MATHS_H_
    #define MY_MATHS_H_

        #include <sys/types.h>
        #include <stdbool.h>
        #include <stdlib.h>
        #include <stdarg.h>

    /**
    ** @brief Add 'n' numbers
    ** @param n The numbers of numbers you want to add
    ** @param ... The numbers you want to add
    ** @return The result of the addition
    **/
    ssize_t my_addition(int n, ...);

    /**
    ** @brief Transform a binary string to the number corresponding
    ** @param str The binary string
    ** @return The number corresponding to the binary,
    ** -1 if the string is not a binary string
    **/
    size_t my_binary_to_decimal(char *binary);

    /**
    ** @brief Get the number corresponding to the string
    ** @param str The string containing the number
    ** @return The number corresponding to the string
    **/
    ssize_t my_getnbr(char const *str);

    /**
    ** @brief Verify if a number is prime
    ** @param nb The number you want to verify
    ** @return True if the number is prime,
    ** false if the number is not prime
    **/
    bool my_is_prime(int nb);


    /**
    ** @brief Multiply 'n' numbers
    ** @param n The numbers of numbers you want to multiply
    ** @param ... The numbers you want to multiply
    ** @return The result of the multiplication
    **/
    ssize_t my_multiplication(int n, ...);

    /**
    ** @brief Compare two numbers
    ** @param nb1 The first number you want to compare
    ** @param nb2 The first second you want to compare
    ** @return 0 if numbers are equals,
    ** 1 if nb1 is greater than nb2 or
    ** -1 if nb1 is less than nb2
    **/
    int my_nbrcmp(ssize_t nb1, ssize_t nb2);

    /**
    ** @brief Calculate the power of the number
    ** has the exponent 'p'
    ** @param nb The number you want to calculate
    ** @param p The exponent
    ** @return The power of the number
    ** has the exponent 'p'
    **/
    int my_power(int nb, int p);

    /**
    ** @brief Calculate the square root of the number
    ** @param nb The number you want to calculate
    ** @return The square root of the number
    **/
    int my_square_root(int nb);

    /* Macro to get the absolute number of a number */
    #define ABS(value) ((ssize_t) value < 0 ? (value * -1) : value)

    /* Macro to get the square of a number */
    #define SQUARE(x) (x * x)

    /* Macro to verify if a number is negative not */
    #define IS_NEG(value) ((ssize_t) value < 0)

    /* Macro to check if a value1 is greater than value2 */
    #define NBR_IS_SUP(value1, value2)  \
    ((ssize_t) value1) > ((ssize_t) value2)

    /* Macro to check if a value1 is less than value2 */
    #define NBR_IS_INF(value1, value2)  \
    ((ssize_t) value1) < ((ssize_t) value2)

    /* Macro to check if a value1 is equal than value2 */
    #define NBR_IS_EQ(value1, value2)  \
    ((ssize_t) value1) == ((ssize_t) value2)

    #define NOT_A_BINARY \
"my_binary_to_decimal: The string is not a binary string"

#endif /* MY_MATHS_H_ */
