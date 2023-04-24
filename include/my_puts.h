/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_maths.h
*/

#ifndef MY_PUTS_H_
    #define MY_PUTS_H_

    #include <sys/types.h>
    #include <unistd.h>

    /**
    ** @brief Print a system error message
    ** to stderr
    ** @param str The message you want to print
    **/
    void my_perror(char *str);

    /**
    ** @brief Write a character to stdout
    ** @param c The character you want to print
    **/
    void my_putchar(char c);

    /**
    ** @brief Write a number to stdout
    ** @param nb The number you want to print
    **/
    void my_putnbr(ssize_t nb);

    /**
    ** @brief Write a message to stdout
    ** @param str The message you want to print
    **/
    void my_putstr(char const *str);

#endif /* MY_PUTS_H_ */
