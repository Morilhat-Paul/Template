#!/bin/bash
##
## EPITECH PROJECT, 2022
## Project
## File description:
## test.sh
##

# This is a minimal set of ANSI/VT100 color codes
END='\e[0m'
BOLD='\e[1m'
ITALIC='\e[3m'
DIM='\e[2m'
RDIM='\e[22m'

# Colors
GREEN='\e[32m'
PURPLE='\e[35m'
BLUE='\e[36m'
LYELLOW='\e[93m'


##  VARIABLES  ##
PROJECT='template'
FOLDER='functional'
NAME=${FOLDER}/${PROJECT}
OUTPUT_FILE='output.txt'
RESULT_FILE='resolve_output.txt'
declare -i PASSED_TEST=0
declare -i FAILING_TEST=0
declare -i TOTAL=0
PASSED=1
FAILED=0
RETURN_VALUE=0



## SCRIPT ##
start_test () {
    echo -e ${BOLD}${BLUE}"\n\t\t\tSTARTING THE FUNCTIONAL TESTS !\n" ${END}

    source ${FOLDER}/helper/helper.sh
    test_helper
    if [[ $? -eq $PASSED ]]; then
        let "PASSED_TEST += PASSED"
    fi
    let "TOTAL += 1"

    source ${FOLDER}/basic/basic.sh
    start_basic

    if [[ $PASSED_TEST -eq $TOTAL ]]; then
        echo -e ${BOLD}${GREEN}"\nAll tests are passed ! GG !"
        echo -e ${BOLD}${BLUE}"\n\t\t\tEND OF FUNCTIONAL TESTS !" ${END}
    else
        let "FAILING_TEST = TOTAL - PASSED_TEST"
        echo -e ${BOLD}${LYELLOW}"\n"$FAILING_TEST "are failing and "$PASSED_TEST" are passed ..." ${END}
        echo -e ${BOLD}${BLUE}"\n\t\t\tEND OF FUNCTIONAL TESTS !" ${END}
        exit 1
    fi

}

start_test
