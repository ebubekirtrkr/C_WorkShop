/*solution for https://www.w3resource.com/c-programming-exercises/for-loop/index.php */
/*

Write a program in C to display the pattern like right angle triangle using an asterisk.
The pattern like :

*
**
***
****

*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Please enter number of rows that you want : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
