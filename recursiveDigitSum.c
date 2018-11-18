#include <stdio.h>
int recursiveDigitSum(int N);
int main()
{
    printf("%d\n", recursiveDigitSum(123));
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