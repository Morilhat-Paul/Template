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

TARGET_NAME		=	template
SOURCE_DIR		=	sources
OBJECT_DIR		=	objects
LIBRARY_DIR		=	lib
HEADER_DIR		=	include
TEST_DIR		= 	tests


vpath %.c $(SOURCE_DIR)



## COMPILER OPTIONS ##

CC			=	gcc
CFLAGS		=	-W -Wall -Wextra -Werror	\
				-I${HEADER_DIR}	\
				-Wno-unused-variable	\
				-Wno-unused-parameter	\
				-Wno-unused-but-set-variable	\
				-Wno-unused-but-set-parameter	\
				-g3
LFLAGS		= 	-L $(LIBRARY_DIR) -lchained_list	\
				-L $(LIBRARY_DIR) -lmy	\



## 	SOURCES FILES 	##

SRC		=	main.c	\
			is_helper.c	\
			template.c



## 	OBJECT FILES 	##

OBJ		=	${SRC:%.c=${OBJECT_DIR}/%.o}

${OBJECT_DIR}/%.o : %.c
	@mkdir -p $(dir $@)
	@${CC} -c $< -o $@ ${CFLAGS} ${LFLAGS}
	@echo ${BOLD}${PURPLE}"=== Compiling $<" $(END)



##		RECIPES		##

.PHONY: all re clean fclean

all: $(TARGET_NAME)

clean:
	@make -s -C $(LIBRARY_DIR) clean
	@rm -rf $(OBJECT_DIR)
	@echo ${BOLD}${GREEN}\
	"=== Cleaning object files\t\t\t"${ITALIC}"DONE !" ${END}

fclean: clean
	@make -s -C $(LIBRARY_DIR) fclean
	@rm -f $(TARGET_NAME)
	@echo ${BOLD}${GREEN}\
	"=== Cleaning binary\t\t\t\t"${ITALIC}"DONE !" ${END}

re: fclean all

tests_run: fclean_tests
	@echo ${BOLD}${BLUE}"\n\t\t\tSTARTING THE UNITARY TESTS !\n" ${END}
	@make -s -C $(TEST_DIR)/ ||	\
	(echo ${BOLD}${BLUE}"\n\t\t\tEND OF UNITARY TESTS !\n" ${END} && exit 1)
	@echo ${BOLD}${BLUE}"\n\t\t\tEND OF UNITARY TESTS !\n" ${END}

tests_functional:
	@make -s -C $(TEST_DIR)/ functional

display_test:
	@echo ${BOLD}${BLUE}"\n\t\t\tSTARTING THE UNITARY TESTS !\n" ${END}
	@gcovr --exclude $(TEST_DIR)/unitary/ --branches --print-summary
	@gcovr --exclude $(TEST_DIR)/unitary/
	@echo ${BOLD}${BLUE}"\n\t\t\tEND OF UNITARY TESTS !\n" ${END}

tests_all: fclean_tests
	@-make -s -C $(TEST_DIR)/ functional
	@echo ${BOLD}${BLUE}"\n\t\t\tSTARTING THE UNITARY TESTS !\n" ${END}
	@-make -s -C $(TEST_DIR)/
	@gcovr --exclude $(TEST_DIR)/unitary/ --branches --print-summary
	@gcovr --exclude $(TEST_DIR)/unitary/
	@make -s -C $(TEST_DIR)/ clean
	@echo ${BOLD}${BLUE}"\n\t\t\tEND OF UNITARY TESTS !\n" ${END}

clean_tests:
	@make -s -C $(TEST_DIR)/ clean

fclean_tests:
	@make -s -C $(TEST_DIR)/ fclean

clean_all: fclean fclean_tests



##	FILE GENERATOR	##

$(TARGET_NAME): $(OBJ)
	@make -s -C $(LIBRARY_DIR)/
	@echo ${END}${BOLD}${LYELLOW}\
	"=== Building\t\t\t\t"${ITALIC}"IN PROGRESS" ${END}${PURPLE}
	@$(CC) -o $@ $(CFLAGS) $^ $(LFLAGS)
	@echo ${BOLD}${GREEN}\
	"=== Building\t\t\t\t"${ITALIC}"DONE !" ${END}
