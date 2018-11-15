#include <stdio.h>
int recursiveDigitSum(int N);
int main(int argc, char const *argv[])
{
    printf("%d\n", recursiveDigitSum(1234567891));
    return 0;
}
int recursiveDigitSum(int N)
{
    int static sum = 0;
    sum += N % 10;
    if (N <= 0)
        return sum;
    return recursiveDigitSum(N / 10);
}