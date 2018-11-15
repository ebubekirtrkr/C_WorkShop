#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 4;
    printf("%d%d%d", i++, i++, i++);
    return 0;
}
// athena% gcc -g -O0 -Wall infilename.c -o outfilename.o
//-g -->Debugging   O0--> disable Optimazation
//gdb outfilename.o is debugging
