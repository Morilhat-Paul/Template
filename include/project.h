/*
** EPITECH PROJECT, 2022
** Template
** File description:
** project.h
*/

#ifndef PROJECT_H_
    #define PROJECT_H_

    /* All includes for this project */

    #include "my.h"


    /* All functions for this project */

    /**
    ** @brief Verfy if arguments use
    ** when the program was launch correspond
    ** to the helper arguments
    ** @param arg The array containing the arguments
    ** @return true if it's correspond,
    ** false if it's not
    **/
    bool is_helper(char *arg);

    /**
    ** @brief The template function
    ** @param ac The number of argument
    ** when the program is launch
    ** @param av The array containing the arguments
    ** @return 0 if there is no error,
    ** 84 if an error occured
    **/
    int template(int ac, char **av);

    /* All Macros for this project */

    /* Macro for the helper */
    #define HELPER \
    "\nUSAGE\n" \
    "\nDESCRIPTION\n"

#endif /* PROJECT_H_ */
