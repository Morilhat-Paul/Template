##
## EPITECH PROJECT, 2022
## Project
## File description:
## Makefile
##

# This is a minimal set of ANSI/VT100 color codes
END		=	"\e[0m"
BOLD	=	"\e[1m"
ITALIC	=	"\e[3m"
DIM		=	"\e[2m"
RDIM	=	"\e[22m"

# Colors
GREEN	=	"\e[32m"
PURPLE	=	"\e[35m"
BLUE	=	"\e[36m"
LYELLOW	=	"\e[93m"


##		OPTIONS		##

TARGET_NAME		=	libmy.a
SOURCE_DIR		=	sources
OBJECT_DIR		=	objects
HEADER_DIR		=	include
ARR				=	array
MAT				=	maths
PUT				=	put
STR				=	strings
MKDIR			=	mkdir -p
RM				=	rm -rf
PRINT			=	echo

vpath %.c $(SOURCE_DIR)



## PRINTING ##

COMPILING	=	${BOLD}${PURPLE}"\t=== Compiling $<"						${END}
BUILD_DONE	=	${BOLD}${GREEN}"\t=== Building my\t\t\t"${ITALIC}"DONE !\n"	${END}



## COMPILER OPTIONS ##

CC		=	gcc
AR		=	ar rc
CFLAGS	=	-W -Wall -Wextra -Werror	\
			-I${HEADER_DIR}	\
			-Wno-unused-variable	\
			-Wno-unused-parameter



## 	SOURCES FILES	##

SRC		=	${MAT}/my_addition.c	\
			${MAT}/my_binary_to_decimal.c	\
			${MAT}/my_getnbr.c	\
			${MAT}/my_is_prime.c	\
			${MAT}/my_multiplication.c	\
			${MAT}/my_nbrcmp.c	\
			${MAT}/my_power.c	\
			${MAT}/my_square_root.c	\
			${PUT}/my_perror.c	\
			${PUT}/my_putchar.c	\
			${PUT}/my_putnbr.c	\
			${PUT}/my_putstr.c	\
			${STR}/my_addchar.c	\
			${STR}/my_revstr.c	\
			${STR}/my_nbr_to_str.c	\
			${STR}/my_str_to_word_array.c	\
			${STR}/my_strcat.c	\
			${STR}/my_strcmp.c	\
			${STR}/my_strcpy.c	\
			${STR}/my_strdup.c	\
			${STR}/my_strlen.c	\
			${STR}/my_strlowcase.c	\
			${STR}/my_strncat.c	\
			${STR}/my_strncmp.c	\
			${STR}/my_strncpy.c	\
			${STR}/my_strndup.c	\
			${STR}/my_strstr.c	\
			${STR}/my_strupcase.c	\
			${ARR}/my_destroy_array.c	\
			${ARR}/my_putarray.c	\
			${ARR}/my_putnarray.c	\
			${ARR}/my_create_array.c



## 	OBJECT FILES 	##

OBJ		=	${SRC:%.c=${OBJECT_DIR}/%.o}

${OBJECT_DIR}/%.o : %.c
	@$(MKDIR) $(dir $@)
	@$(CC) -c $< -o $@ ${CFLAGS} ${LFLAGS}
	@$(PRINT) ${COMPILING}



##		RECIPES		##

.PHONY: all re clean fclean

all: ${TARGET_NAME}

clean:
	@$(RM) ${OBJECT_DIR}

fclean: clean
	@$(RM) ${TARGET_NAME}

re: fclean all



##	FILE GENERATOR	##

$(TARGET_NAME): $(OBJ)
	@$(AR) ${TARGET_NAME} ${OBJ}
	@cp $@ ..
	@$(PRINT) ${BUILD_DONE}
