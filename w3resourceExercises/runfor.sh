 #!/bin/bash
 read -p "enter the c-question number: " nm
gcc -o for-loop-q${nm}.out for-loop-q${nm}.c
./for-loop-q${nm}.out