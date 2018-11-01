#include <stdio.h>
/* 
   Write a program that reads numbers until a negative number is read, and
   prints the number of values read, the largest value, the smallest value,
   and the range. */
int main()
{
    int n, n2, smallest, largest;
    int count = 0;
    scanf("%d", &n);
    if (n < 0)
    {
        return 0;
    }
		largest=n;
    smallest = n;
    count++;

    while (scanf("%d", &n2) != EOF)
    {
        if (n2 < 0)
        {
            break;
        }
        if (n2 < smallest)
        {
            smallest = n2;
        }
        else if (n2 > largest)
        {
            largest = n2;
        }
        count++;
    }
    printf("smallest:%d largest:%d range:[%d,%d] number of inputs:%d", smallest, largest, smallest, largest, count);
    return 0;
}