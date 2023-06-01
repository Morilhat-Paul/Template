##
## EPITECH PROJECT, 2022
## Bootstrap
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



## 		OPTIONS 	##

TARGET_NAME			=	unit_tests
PROJECT_NAME		=	template
SOURCE_DIR			=	../sources
HEADER_DIR			=	../include
LIBRARY_DIR			=	../lib
LIBRARY_SRC_MY		=	${LIBRARY_DIR}/my/sources
LIBRARY_SRC_LIST	=	${LIBRARY_DIR}/chained_list/sources
OBJECT_DIR			=	unitary/objects
SRC_UNIT_DIR		=	unitary/sources
LIBRARY_UNIT_DIR_MY	=	unitary/lib/my
LIBRARY_UNIT_DIR_LIST	=	unitary/lib/chained_list
COV_REPORT			=	coverage.txt coverage_branches.txt
CRITERION			=	--coverage -lcriterion
MAKE				=	make -s -C
MKDIR				=	mkdir -p
RM					=	rm -rf
PRINT				=	echo
ARR					=	array
MAT					=	maths
PUT					=	put
STR					=	strings



## PRINTING ##

BUILD_DONE 		= 	${BOLD}${GREEN}"=== Building tests\t\t\t\t"${ITALIC}"DONE !"		${END}
BUILD_PROGRESS	= 	${BOLD}${LYELLOW}"=== Building tests\t\t\t\t"${ITALIC}"IN PROGRESS"	${END}
CLEAN_TESTS 	=	${BOLD}${GREEN}"=== Cleaning testing files\t\t\t"${ITALIC}"DONE !"	${END}
CLEAN_TESTS_BIN =	${BOLD}${GREEN}"=== Cleaning binary test\t\t\t"${ITALIC}"DONE !"	${END}
COMPILING 		=	${BOLD}${PURPLE}"=== Compiling $<" 									${END}



## COMPILER OPTIONS ##

CC			=	gcc
CFLAGS		=	-W -Wall -Wextra -Werror	\
				-I${HEADER_DIR}	-I../lib/my/include -I../lib/chained_list/include\
				-Wno-unused-variable	\
				-Wno-unused-parameter	\
				-Wno-unused-but-set-variable	\
				-Wno-unused-but-set-parameter
LFLAGS		=	-L ${LIBRARY_DIR} -lmy	\
				-L ${LIBRARY_DIR} -lchained_list



## 	SOURCES FILES 	##

SRC_LIB_MY	=	${LIBRARY_SRC_MY}/${MAT}/my_addition.c	\
				${LIBRARY_SRC_MY}/${MAT}/my_binary_to_decimal.c	\
				${LIBRARY_SRC_MY}/${MAT}/my_getnbr.c	\
				${LIBRARY_SRC_MY}/${MAT}/my_is_prime.c	\
				${LIBRARY_SRC_MY}/${MAT}/my_multiplication.c	\
				${LIBRARY_SRC_MY}/${MAT}/my_nbrcmp.c	\
				${LIBRARY_SRC_MY}/${MAT}/my_power.c	\
				${LIBRARY_SRC_MY}/${MAT}/my_square_root.c	\
				${LIBRARY_SRC_MY}/${PUT}/my_perror.c	\
				${LIBRARY_SRC_MY}/${PUT}/my_putchar.c	\
				${LIBRARY_SRC_MY}/${PUT}/my_putnbr.c	\
				${LIBRARY_SRC_MY}/${PUT}/my_putstr.c	\
				${LIBRARY_SRC_MY}/${STR}/my_addchar.c	\
				${LIBRARY_SRC_MY}/${STR}/my_revstr.c	\
				${LIBRARY_SRC_MY}/${STR}/my_nbr_to_str.c	\
				${LIBRARY_SRC_MY}/${STR}/my_str_to_word_array.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strcat.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strcmp.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strcpy.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strdup.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strlen.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strlowcase.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strncat.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strncmp.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strncpy.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strndup.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strstr.c	\
				${LIBRARY_SRC_MY}/${STR}/my_strupcase.c	\
				${LIBRARY_SRC_MY}/${ARR}/my_destroy_array.c	\
				${LIBRARY_SRC_MY}/${ARR}/my_putarray.c	\
				${LIBRARY_SRC_MY}/${ARR}/my_putnarray.c	\
				${LIBRARY_SRC_MY}/${ARR}/my_create_array.c

SRC_LIB_LIST=	${LIBRARY_SRC_LIST}/*.c

SRC			=	${SRC_LIB_MY}	\
				${SOURCE_DIR}/is_helper.c

UNIT_TESTS	=	${LIBRARY_UNIT_DIR_MY}/${ARR}/*.c	\
				${LIBRARY_UNIT_DIR_MY}/${MAT}/*.c	\
				${LIBRARY_UNIT_DIR_MY}/${PUT}/*.c	\
				${LIBRARY_UNIT_DIR_MY}/${STR}/*.c	\
				${SRC_UNIT_DIR}/*.c


FUNC_TEST	=	functional/test.sh



##		RECIPES		##

.PHONY: all re clean fclean

all: $(TARGET_NAME)
	@./$<

clean:
	@$(RM) *.gc*
	@$(RM) ../*.gcov
	@$(PRINT) ${CLEAN_TESTS}

fclean: clean
	@$(RM) ${COV_REPORT}
	@$(RM) ${TARGET_NAME}
	@$(RM) functional/${PROJECT_NAME}
	@$(PRINT) ${CLEAN_TESTS_BIN}

re: fclean all

functional: clean
	@cp ../${PROJECT_NAME} functional/
	@./${FUNC_TEST}



##	FILE GENERATOR	##

$(TARGET_NAME):
	@cp ../${PROJECT_NAME} functional/
	@$(CC) -o $@ ${CFLAGS} ${SRC} ${LFLAGS} ${UNIT_TESTS} ${CRITERION}
	@$(PRINT) $(BUILD_DONE)
