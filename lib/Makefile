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
_LYELLOW	=	\e[93m


all:
	@echo "${_END}${_BOLD}${_LYELLOW}	\
	=== Building libs\t\t\t${_ITALIC}IN PROGRESS${_END}"
	@make -s -j8 -C ./chained_list
	@make -s -j8 -C ./my
	@echo "${_END}${_BOLD}${_GREEN}	\
	=== Building libs\t\t\t${_ITALIC}DONE${_END}\n"

clean:
	@make -C ./chained_list clean
	@make -C ./my clean
	@echo "${_END}${_BOLD}${_GREEN}	\
	=== Cleaning oblect files\t\t\t${_ITALIC}DONE !${_END}\n"

fclean:
	@make -C ./chained_list fclean
	@make -C ./my fclean
	@rm -rf *.a
	@echo "${_END}${_BOLD}${_GREEN}	\
	=== Cleaning oblect files and binary\t\t\t${_ITALIC}DONE !${_END}\n"
