#!/bin/bash

# Color Palette
NONE="\033[1;0m"
B_RED="\e[1;31m"
B_GREEN="\e[1;32m"


# Check if ./LL exists
if [ ! -f ./LL ]; then
    echo "Error: ./LL does not exist. Please compile your code first."
    exit 1
fi

# Check if ./gen_golden_ans exists
if [ ! -f ./gen_golden_ans ]; then
    echo "Error: ./gen_golden_ans does not exist."
    exit 1
fi




testcase_dir="testcase"
testcases=$(ls $testcase_dir)


summary="summary.txt"
echo -n > $summary


# Loop through each test case
for testcase in $testcases; do
    echo -n "Running test case: $testcase ... "

    your_answer=your_${testcase}
    golden_answer=golden_${testcase}

    # Generate answer
    ./LL $testcase > $your_answer
    ./gen_golden_ans $testcase > $golden_answer

    # Check answer
    diff -w $your_answer $golden_answer > /dev/null 2>&1
    if [ $? -eq 0 ]; then
        echo -e "${B_GREEN}PASS${NONE}"
    else
        echo -e "${B_RED}FAIL${NONE}"

        echo "===========================  $testcase ===========================" >> $summary
        diff -wy $your_answer $golden_answer >> $summary
    fi
done
echo "View summary.txt for more information."