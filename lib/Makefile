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



## 		OPTIONS 	##

MAKE	=	make -s -C
PRINT	=	echo



## PRINTING ##

BUILD_DONE 		=	${BOLD}${GREEN}"=== Building libs\t\t\t"${ITALIC}"DONE !\n"					${END}
BUILD_PROGRESS 	=	${BOLD}${LYELLOW}"=== Building libs\t\t\t"${ITALIC}"IN PROGRESS"			${END}
CLEAN_BIN 		=	${BOLD}${GREEN}"=== Cleaning binary from libraries\t\t"${ITALIC}"DONE !"	${END}
CLEAN_OBJ 		=	${BOLD}${GREEN}"=== Cleaning object files from libraries\t"${ITALIC}"DONE !"${END}



##		RECIPES		##

all:
	@$(PRINT) ${BUILD_PROGRESS}
	@$(MAKE) ./chained_list
	@$(MAKE) ./my
	@$(PRINT) ${BUILD_DONE}

clean:
	@$(MAKE) ./chained_list clean
	@$(MAKE) ./my clean
	@$(PRINT) ${CLEAN_OBJ}

fclean:
	@$(MAKE) ./chained_list fclean
	@$(MAKE) ./my fclean
	@$(RM) *.a
	@$(PRINT) ${CLEAN_BIN}
