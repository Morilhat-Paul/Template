##
## EPITECH PROJECT, 2022
## Project
## File description:
## Makefile
##

# This is a minimal set of ANSI/VT100 color codes
_END		=	\e[0m
_BOLD		=	\e[1m
_ITALIC		=	\e[3m
_DIM		=	\e[2m
_RDIM		=	\e[22m

# Colors
_GREEN		=	\e[32m
_YELLOW		=	\e[33m
_PURPLE		=	\e[35m
_LYELLOW	=	\e[93m


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
			swap.c



## 	OBJECT FILES 	##

OBJ		=	$(SRC:.c=.o)



##		RECIPES		##

.PHONY: all directories re clean fclean

all: directories $(TARGET_NAME)

directories: | $(SOURCES_DIR) $(OBJECT_DIR)

clean:
	@rm -rf ./$(OBJECT_DIR)/*.o

fclean: clean
	@rm -rf ./$(OBJECT_DIR)
	@rm -f $(TARGET_NAME)

re: fclean all



##	FILE GENERATOR	##

$(TARGET_NAME): $(OBJ)
	@mv *.o $(OBJECT_DIR)
	@$(AR) rc $(TARGET_NAME) $(OBJECT_DIR)/*.o
	@cp $(TARGET_NAME) ..
	@echo "${_BOLD}${_GREEN}${_DIM}	\
	\t====== ${_RDIM}${_BOLD}Building chained_list\t\t\t${_ITALIC}DONE${_END}"

$(OBJECT_DIR):
	@mkdir -p $@

$(SOURCE_DIR):
	@echo "${_BOLD}${_LYELLOW}Error: source folder not found !\n${_END}"
