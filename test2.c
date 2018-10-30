#include <stdio.h>

int main() {
    int ch;
    int nm = 0;
    ch = getchar();
    while (ch != ' ' && ch != '\n' && ch != '\t' && ch != '\r' && ch != '\v')
    {
        nm = nm * 10 + (ch - '0');
        ch = getchar();
    }
    printf("%d", nm);
    return 0;
}