##
## EPITECH PROJECT, 2022
## Project
## File description:
## helper.sh
##

# This is a minimal set of ANSI/VT100 color codes
END='\e[0m'
BOLD='\e[1m'
ITALIC='\e[3m'
DIM='\e[2m'
RDIM='\e[22m'

# Colors
GREEN='\e[32m'
YELLOW='\e[33m'
PURPLE='\e[35m'
LYELLOW='\e[93m'

## RETURN VALUES ##
PASSED=1
FAILED=0
PROBLEM=-1

## TEST ##
test_helper () {
    TEST="helper"
    RESULT=${FOLDER}/${TEST}
    OUTPUT=${FOLDER}/${TEST}
    RESULT+="/${RESULT_FILE}"
    OUTPUT+="/${OUTPUT_FILE}"
    FLAG=0

    ./${NAME} -h &> ${OUTPUT}

    if [[ $? -eq 0 ]]; then
        if diff -u "${OUTPUT}" "${RESULT}"; then
            echo -e ${PURPLE}${GREEN}"${TEST} test passed !"${END}
            return $PASSED
        else
            echo -e ${PURPLE}${LYELLOW}"${TEST} test failed ! (Output)"${END}
            return $FAILED
        fi
    else
        echo -e ${PURPLE}${LYELLOW}"${TEST} test failed ! (Return)"${END}
        return $FAILED
    fi
    return $PROBLEM
}
