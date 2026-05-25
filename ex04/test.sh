#!/bin/bash

make

echo -e "\n--- TEST 1: Simple Substitution ---"
./sed pulp_fiction.txt "VINCENT" "JULES"
if [ -f "pulp_fiction.txt.replace" ]; then
    echo "Success: File generated."
    echo "Remaining occurrences of VINCENT: $(grep -c "VINCENT" pulp_fiction.txt.replace)"
else
    echo "Error: File was not generated."
fi

echo -e "\n--- TEST 2: Infinite Loop Protection ---"
./sed pulp_fiction.txt "Pumpkin" "PumpkinPumpkin"
echo "Success: The program did not crash."

echo -e "\n--- TEST 3: Argument Error ---"
./sed pulp_fiction.txt "" "Teste"

echo -e "\n--- TEST 4: Non-existent File ---"
./sed not_found.txt "A" "B"
