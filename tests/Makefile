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

TARGET_NAME		=	unit_tests
PROJECT_NAME	=	template
SOURCE_DIR		=	../sources
OBJECT_DIR		=	../objects
LIBRARY_DIR		=	../lib
LIBRARY_SRC_MY	=	$(LIBRARY_DIR)/my/sources
LIBRARY_SRC_LIST=	$(LIBRARY_DIR)/chained_list/sources
HEADER_DIR		=	../include
CRITERION		=	--coverage -lcriterion
ARR				=	array
MAT				=	maths
PUT				=	put
STR				=	strings


## COMPILER OPTIONS ##

CC			=	gcc
CFLAGS		=	-W -Wall -Wextra -Werror	\
				-I${HEADER_DIR}	\
				-Wno-unused-variable	\
				-Wno-unused-parameter	\
				-Wno-unused-but-set-variable	\
				-Wno-unused-but-set-parameter	\
				-g3
LFLAGS		=	-L $(LIBRARY_DIR) -lmy	\
				-L $(LIBRARY_DIR) -lchained_list



## 	SOURCES FILES 	##

SRC_LIB_MY	=	$(LIBRARY_SRC_MY)/$(STR)/*.c	\
				$(LIBRARY_SRC_MY)/$(MAT)/*.c	\
				$(LIBRARY_SRC_MY)/$(PUT)/*.c	\
				$(LIBRARY_SRC_MY)/$(ARR)/*.c	\
				# $(LIBRARY_SRC_MY)/*.c

SRC		=	$(SRC_LIB_MY)	\
			$(SOURCE_DIR)/is_helper.c

UNIT_TESTS	=	unitary/lib/my/*.c	\
				unitary/sources/*.c


FUNC_TEST	=	functional/test.sh



## 	OBJECT FILES 	##

OBJ		=	${SRC:%.c=${OBJECT_DIR}/%.o}

${OBJECT_DIR}/%.o : %.c
	@mkdir -p $(dir $@)
	@${CC} -c $< -o $@ ${CFLAGS} ${LFLAGS}
	@echo ${BOLD}${PURPLE}"=== Compiling $<" $(END)



##		RECIPES		##

.PHONY: all re clean fclean

all: $(TARGET_NAME)
	@./$<

clean:
	rm -f *.gc*
	@echo ${BOLD}${GREEN}\
	"=== Cleaning testing files\t\t\t"${ITALIC}"DONE !" ${END}

fclean: clean
	@rm -f $(TARGET_NAME)
	@rm -f functional/$(PROJECT_NAME)
	@echo ${BOLD}${GREEN}\
	"=== Cleaning binary test\t\t\t"${ITALIC}"DONE !" ${END}

re: fclean all

functional: clean
	cp ../$(PROJECT_NAME) functional/
	@./$(FUNC_TEST)


##	FILE GENERATOR	##

$(TARGET_NAME):
	cp ../$(PROJECT_NAME) functional/
	$(CC) -o $@ $(CFLAGS) $(SRC) $(LFLAGS) $(UNIT_TESTS) $(CRITERION)
	@echo ${BOLD}${GREEN}\
	"=== Building tests\t\t\t\t"${ITALIC}"DONE !" ${END}
