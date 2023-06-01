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

TARGET_NAME		=	libchained_list.a
SOURCE_DIR		=	sources
OBJECT_DIR		=	objects
HEADER_DIR		=	include
MAKE			=	make -s -C
MKDIR			=	mkdir -p
RM				=	rm -rf
PRINT			=	echo

vpath %.c $(SOURCE_DIR)



## PRINTING ##

COMPILING	=	${BOLD}${PURPLE}"\t=== Compiling $<"								${END}
BUILD_DONE	=	${BOLD}${GREEN}"\t=== Building chained_list\t\t"${ITALIC}"DONE !\n"	${END}



## COMPILER OPTIONS ##

CC		=	gcc
AR		=	ar rc
CFLAGS	=	-W -Wall -Wextra -Werror	\
			-I${HEADER_DIR} -I../my/include	\
			-Wno-unused-variable	\
			-Wno-unused-parameter



## 	SOURCES FILES	##

SRC		=	simple/create_node.c	\
			simple/create_list.c	\
			simple/draw_list.c	\
			simple/destroy_list.c	\
			simple/pop.c	\
			simple/push.c	 \
			simple/rotate.c	\
			simple/swap.c	\
			simple/len_list.c	\
			simple/find.c



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
