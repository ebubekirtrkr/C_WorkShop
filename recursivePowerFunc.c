#include <stdio.h>
int power(int a, int b);
int main()
{
    printf("%d\n", power(3, 0));
    return 0;
}
int power(int a, int b)
{
    static int result=1;
    if(b==0)
        return result;
    result*=a;
    return power(a, b-1);
}