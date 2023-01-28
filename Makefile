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



## 		OPTIONS 	##

TARGET_NAME		=	template
SOURCE_DIR		=	sources
OBJECT_DIR		=	objects
LIBRARY_DIR		=	lib
HEADER_DIR		=	include

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
LFLAGS		=	-L $(LIBRARY_DIR) -lmy	\
				-L $(LIBRARY_DIR) -lchained_list



## 	SOURCES FILES 	##

SRC		=	main.c



## 	OBJECT FILES 	##

OBJ		=	$(SRC:.c=.o)



##		RECIPES		##

.PHONY: all directories re clean fclean

all:	directories $(TARGET_NAME)

directories: | $(SOURCE_DIR) $(OBJECT_DIR)

clean:
	@make --no-print-directory -C $(LIBRARY_DIR) clean
	@rm -rf ./$(OBJECT_DIR)/*.o

fclean: clean
	@make --no-print-directory -C $(LIBRARY_DIR) fclean
	@rm -rf ./$(OBJECT_DIR)
	@rm -f ./$(TARGET_NAME)

re: clean all



##	FILE GENERATOR	##

$(TARGET_NAME): $(OBJ)
	@make -s -C $(LIBRARY_DIR)/
	@echo "${_END}${_BOLD}${_LYELLOW}	\
	=== Building\t\t\t${_ITALIC}IN PROGRESS${_END}${_PURPLE}"
	@$(CC) -o $@ $(CFLAGS) $^ $(LFLAGS)
	@mv *.o $(OBJECT_DIR)
	@echo "${_END}${_BOLD}${_GREEN}	\
	=== Building\t\t\t${_ITALIC}DONE${_END}\n"

$(LIBRARY):
	@make --no-print-directory -C lib/

$(OBJECT_DIR):
	@mkdir -p $@

$(SOURCE_DIR):
	@echo "${_BOLD}${_LYELLOW}Error: source folder not found !\n${_END}"
