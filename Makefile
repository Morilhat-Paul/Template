##
## EPITECH PROJECT, 2022
## Lem_in
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

VERSION 			:=	$(shell git describe --tags --always)
VERSION_HEADER		=	include/version.h
TARGET_NAME			=	template
SOURCE_DIR			=	sources
OBJECT_DIR			=	objects
LIBRARY_DIR			=	lib
LIBRARY_MY_HEADER	=	${LIBRARY_DIR}/my/include
LIBRARY_LIST_HEADER	=	${LIBRARY_DIR}/chained_list/include
SRC_HEADER			=	include
TEST_DIR			= 	tests
MAKE				=	make -s -C
MKDIR				=	mkdir -p
GCOVR				=	gcovr --exclude
RM					=	rm -rf
PRINT				=	echo

vpath %.c $(SOURCE_DIR)


## PRINTING ##

BUILD_DONE		= 	${BOLD}${GREEN}"=== Building\t\t\t\t"${ITALIC}"DONE !"			${END}
BUILD_PROGRESS	=	${BOLD}${LYELLOW}"=== Building\t\t\t\t"${ITALIC}"IN PROGRESS"	${END}
CLEAN_BIN		= 	${BOLD}${GREEN}"=== Cleaning binary\t\t\t\t"${ITALIC}"DONE"		${END}
CLEAN_OBJ		= 	${BOLD}${GREEN}"=== Cleaning object\t\t\t\t"${ITALIC}"DONE !"	${END}
COMPILING		= 	${BOLD}${PURPLE}"=== Compiling $<"								$(END)
START_UNITARY	= 	${BOLD}${BLUE}"\n\t\t\tSTARTING THE UNITARY TESTS !\n"			${END}
END_UNITARY		= 	${BOLD}${BLUE}"\n\t\t\tEND OF UNITARY TESTS !\n"				${END}



## COMPILER OPTIONS ##

CC			=	gcc
CFLAGS		=	-W -Wall -Wextra -Werror	\
				-I${SRC_HEADER} -I${LIBRARY_MY_HEADER} -I${LIBRARY_LIST_HEADER}	\
				-Wno-unused-variable	\
				-Wno-unused-parameter	\
				-Wno-unused-but-set-variable	\
				-Wno-unused-but-set-parameter	\
				-g3
LFLAGS		= 	-L ${LIBRARY_DIR} -lchained_list	\
				-L ${LIBRARY_DIR} -lmy



## 	SOURCES FILES 	##

SRC		=	main.c	\
			is_helper.c	\
			template.c



## 	OBJECT FILES 	##

OBJ		=	${SRC:%.c=${OBJECT_DIR}/%.o}

${OBJECT_DIR}/%.o : %.c
	@$(MKDIR) $(dir $@)
	@$(CC) -c $< -o $@ ${CFLAGS} ${LFLAGS}
	@$(PRINT) ${COMPILING}



##		RECIPES		##

.PHONY: all re clean fclean

all: ${TARGET_NAME}

version.h:
	@$(PRINT) $(VERSION)

version: version.h
	@$(PRINT) "#define PROJECT_VERSION \"$(VERSION)\"" > ${VERSION_HEADER}

clean:
	@$(MAKE) ${LIBRARY_DIR} clean
	@$(RM) ${OBJECT_DIR}
	@$(RM) *.log
	@$(PRINT) ${CLEAN_OBJ}

fclean: clean
	@$(MAKE) ${LIBRARY_DIR} fclean
	@$(RM) ${TARGET_NAME}
	@$(PRINT) ${CLEAN_BIN}

re: fclean all

tests_run: fclean_tests
	@$(PRINT) ${START_UNITARY_TESTS}
	@${MAKE} ${TEST_DIR}/ || ($(PRINT) ${END_UNITARY_TESTS} && exit 1)
	@$(PRINT) ${END_UNITARY_TESTS}

tests_functional:
	@$(MAKE) ${TEST_DIR}/ functional

display_test:
	@$(PRINT) ${START_UNITARY_TESTS}
	@$(GCOVR) ${TEST_DIR}/unitary/ --branches --print-summary
	@$(GCOVR) ${TEST_DIR}/unitary/
	@$(PRINT) ${END_UNITARY_TESTS}

upload_test:
	@$(PRINT) ${START_UNITARY_TESTS}
	@$(GCOVR) ${TEST_DIR}/unitary/ --branches --print-summary --keep --output=${TEST_DIR}/coverage_branches.txt
	@$(GCOVR) ${TEST_DIR}/unitary/ --keep --output=${TEST_DIR}/coverage.txt
	@$(PRINT) ${END_UNITARY_TESTS}

tests_all: fclean_tests
	@-$(MAKE) ${TEST_DIR}/ functional
	@$(PRINT) ${START_UNITARY_TESTS}
	@-$(MAKE) ${TEST_DIR}/
	@$(GCOVR) ${TEST_DIR}/unitary/ --branches --print-summary
	@$(GCOVR) ${TEST_DIR}/unitary/
	@$(MAKE)  ${TEST_DIR}/ clean
	@$(PRINT) ${END_UNITARY_TESTS}

clean_tests:
	@$(MAKE) ${TEST_DIR}/ clean

fclean_tests:
	@$(MAKE) ${TEST_DIR}/ fclean

clean_all: fclean fclean_tests



##	FILE GENERATOR	##

$(TARGET_NAME): $(OBJ)
	@$(MAKE) ${LIBRARY_DIR}/
	@$(PRINT) ${BUILD_PROGRESS}
	@$(CC) -o $@ ${CFLAGS} $^ ${LFLAGS}
	@$(PRINT) ${BUILD_DONE}
