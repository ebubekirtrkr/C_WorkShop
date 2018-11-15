#include <stdio.h>
int main()
{
    int arr[50];
    int placement, a = 0, begin, min, length;
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    //PRINT INITIAL ARRAY
    printf("old  ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    //SORT ARRAY NUMBERS UNTIL LENGTH-1
    while (a < length)
    {
        begin = arr[a];
        min = arr[a];
        for (int i = a; i < length; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                placement = i;
            }
        }
        arr[a] = min;
        arr[placement] = begin;
        a++;
    }
    //PRINT SORTED ARRAY
    printf("sorted:  ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}