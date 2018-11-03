/*solution for https://www.w3resource.com/c-programming-exercises/for-loop/index.php */
/*

Write a program in C to make such a pattern like right angle triangle with number increased by 1.

 1
 2 3
 4 5 6
 7 8 9 10

*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,a=1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
