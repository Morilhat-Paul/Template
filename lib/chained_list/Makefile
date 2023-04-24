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

vpath %.c $(SOURCE_DIR)



## COMPILER OPTIONS ##

CC		=	gcc
AR		=	ar
CFLAGS	=	-W -Wall -Wextra -Werror	\
			-I$(HEADER_DIR)	\
			-Wno-unused-variable	\
			-Wno-unused-parameter



## 	SOURCES FILES	##

SRC		=	create_node.c	\
			draw_list.c	\
			destroy_list.c	\
			pop.c	\
			push.c	 \
			rotate.c	\
			swap.c	\
			len_list.c



## 	OBJECT FILES 	##

OBJ		=	${SRC:%.c=${OBJECT_DIR}/%.o}

${OBJECT_DIR}/%.o : %.c
	@mkdir -p $(dir $@)
	@${CC} -c $< -o $@ ${CFLAGS} ${LFLAGS}
	@echo ${BOLD}${PURPLE}"\t=== Compiling $<" $(END)



##		RECIPES		##

.PHONY: all re clean fclean

all: $(TARGET_NAME)

clean:
	@rm -rf $(OBJECT_DIR)

fclean: clean
	@rm -f $(TARGET_NAME)

re: fclean all



##	FILE GENERATOR	##

$(TARGET_NAME): $(OBJ)
	@$(AR) rc $(TARGET_NAME) $<
	@cp $@ ..
	@echo ${BOLD}${GREEN}	\
	"\t=== Building chained_list\t\t"${ITALIC}"DONE !\n" ${END}
