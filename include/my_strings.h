/*
** EPITECH PROJECT, 2022
** Template
** File description:
** my_maths.h
*/

#ifndef MY_STRINGS_H_
    #define MY_STRINGS_H_

    #include <sys/types.h>

    /**
    ** @brief Add a char at the position you want in a string
    ** @param str The string you want to modify
    ** @param c The char you want to add
    ** @param position The position in the string
    ** where you want to add the char
    ** (0 to add at the end of the string)
    ** @return Pointer to the string with the char added
    **/
    char * my_addchar(char *str, char c, size_t position);

    /**
    ** @brief Revert a string
    ** @param str The string you want to revert
    **/
    void my_revstr(char *str);

    /**
    ** @brief Converts a number to it's corresponding string
    ** @param nbr The number you want to convert
    ** @return The corresponding string
    **/
    char * my_nbr_to_str(ssize_t nbr);

    /**
    ** @brief Convert a string to an array of strings
    ** @param str The string you want to convert
    ** @param is_separator Pointer to a function that
    ** will return if a char (in the string)
    ** is a separator or not
    ** @return The array of strings
    **/
    char **my_str_to_word_array(char *str, bool (*is_separator)(char));

    /**
    ** @brief Appends the src string to the dest string,
    ** overwriting the terminating null byte ('\0') at the end of dest,
    ** and then adds a terminating null byte.
    ** The strings may not overlap, and the dest string
    ** must have enough space for the result.
    ** @param dest The destination string
    ** @param src The string you want to add
    ** @return Pointer to the concat string
    **/
    char * my_strcat(char *dest, char const *src);

    /**
    ** @brief Compare two strings
    ** @param str1 The first string you want to compare
    ** @param str2 The first string you want to compare
    ** @return 0 if the two strings are equal,
    ** if str1 compares less than str2,
    ** the postition of the first not-matching character in str1 is returned,
    ** and if str1 compares greater than str2,
    ** the negative postition of the first
    ** not-matching character in str1 is returned
    **/
    int my_strcmp(char const *str1, char const *str2);

    /**
    ** @brief Copies the string pointed to by src,
    ** including the terminating null byte ('\0'),
    ** to the buffer pointed to by dest.
    ** The strings may not overlap, and the destination
    ** string dest must be large enough to receive the copy
    ** @param dest The destinaton string
    ** @param src The string you want to copie
    ** @return Pointer to the destination string dest
    **/
    char * my_strcpy(char *dest, char const *src);

    /**
    ** @brief Duplicate a string
    ** @param str The string you want to duplicate
    ** @return Pointer to a new string which is a duplicate of the string
    **/
    char * my_strdup(char const *src);

    /**
    ** @brief Calculate the length of a string
    ** @param str The string you want to copie
    ** @return The size of the string
    **/
    size_t my_strlen(char const *str);

    /**
    ** @brief Transform all the upcase charactere of a string
    ** into lowcase charactere
    ** @param str The source string
    ** @return Pointer to the new source string
    **/
    char * my_strlowcase(char *str);

    /**
    ** @brief Appends the src string to the dest string,
    ** overwriting the terminating null byte ('\0') at the end of dest,
    ** and then adds a terminating null byte.
    ** The strings may not overlap, and the dest string
    ** must have enough space for the result.
    ** @param dest The destination string
    ** @param src The string you want to add
    ** @param n The number of bytes to be concatenated
    ** @return Pointer to the concat string
    **/
    char * my_strncat(char *dest, char const *src, int n);

    /**
    ** @brief Compare n bytes of two strings
    ** @param str1 The first string you want to compare
    ** @param str2 The first string you want to compare
    ** @param str2 The first string you want to compare
    ** @return 0 if the two strings are equal,
    ** if str1 compares less than str2,
    ** the postition of the first not-matching character in str1 is returned,
    ** and if str1 compares greater than str2,
    ** the negative postition of the first
    ** not-matching character in str1 is returned
    **/
    int my_strncmp(char const *s1, char const *s2, int n);

    /**
    ** @brief Copies n bytes to the string pointed to by src,
    ** to the buffer pointed to by dest.
    ** The strings may not overlap, and the destination
    ** string dest must be large enough to receive the copy.
    ** @param dest The destinaton string
    ** @param src The string you want to copie
    ** @param n The number of bytes to copy
    ** @return Pointer to the destination string dest
    **/
    char * my_strncpy(char *dest, char const *src, int n);

    /**
    ** @brief Duplicate n bytes of a string
    ** @param str The string you want to duplicate
    ** @param n The number of bytes you want to duplicate
    ** @return Pointer to a new string which is a 'n' duplicate of the string
    **/
    char * my_strndup(char const *src, int n);

    /**
    ** @brief Finds the first occurrence of the substring to_find
    ** in the string str.
    ** The terminating null bytes ('\0') are not compared
    ** @param str The source string
    ** @param to_find The substring you want to locate
    ** @return Pointer to the beginning of the located substring,
    ** or NULL if the substring is not found
    **/
    char * my_strstr(char *str, char const *to_find);

    /**
    ** @brief Transform all the lowcase charactere of a string
    ** into upcase charactere
    ** @param str The source string
    ** @return Pointer to the new source string
    **/
    char * my_strupcase(char *str);

    /* Macro for verify if a character
    ** is alpha */
    #define IS_ALPHA(c) \
    (( ( (c) >= 'a' ) && ( (c) <= 'z' ) ) \
|| ( ( (c) >= 'A' ) && ( (c) <= 'Z' ) ))

    /* Macro for verify if a character
    ** is a numeric */
    #define IS_NUM(c) \
    (( ( (c) >= '0' ) && ( (c) <= '9' ) ) )

    /* Macro for verify if a character
    ** is alphanumeric */
    #define IS_ALPHA_NUM(c) \
    (( ( (c) >= 'a' ) && ( (c) <= 'z' ) ) \
|| ( ( (c) >= 'A' ) && ( (c) <= 'Z' ) ) \
|| ( ( (c) >= '0' ) && ( (c) <= '9' ) ))

    /* Macro for verify if a character
    ** is upcase */
    #define IS_UPCASE(c) \
    (( ( (c) >= 'A' ) && ( (c) <= 'Z' ) ) )

    /* Macro for verify if a character
    ** is lowcase */
    #define IS_LOWCASE(c) \
    (( ( (c) >= 'a' ) && ( (c) <= 'z' ) ) )

    #define WRONG_POSITION \
("my_addchar: Wrong position."   \
" The position of the char is not between 0"  \
" and the length of the string.\n")

#endif /* MY_STRINGS_H_ */
