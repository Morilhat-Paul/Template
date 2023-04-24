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


all:
	@echo ${BOLD}${LYELLOW}\
	"=== Building libs\t\t\t"${ITALIC}"IN PROGRESS" ${END}
	@make -s -j8 -C ./chained_list
	@make -s -j8 -C ./my
	@echo ${BOLD}${GREEN}\
	"=== Building libs\t\t\t"${ITALIC}"DONE !\n" ${_END}

clean:
	@make -C ./chained_list clean
	@make -C ./my clean
	@echo ${BOLD}${GREEN}\
	"=== Cleaning object files from libraries\t"${ITALIC}"DONE !" ${END}

fclean:
	@make -C ./chained_list fclean
	@make -C ./my fclean
	@rm -rf *.a
	@echo ${BOLD}${GREEN}\
	"=== Cleaning binary from libraries\t\t"${ITALIC}"DONE !"${END}
