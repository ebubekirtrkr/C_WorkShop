#include <stdio.h>
int main()
{
    int arr[50] = {5, 4, 3, 2, 1};
    int length, index, flag;
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        scanf(" %d", &arr[i]);
    }
    do
    {
        flag = 0;
        index = 0;
        while (index < length - 1)
        {
            if (arr[index] > arr[index + 1])
            {
                int t = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = t;
            }
            index++;
        }
        for (int i = 0; i < length - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
                flag++;
        }
    } while (flag != length - 1);
    printf("sorted array: ");
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
            printf("{ %d, ", arr[i]);
        else if (i != length - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d }\n", arr[i]);
    }
    return 0;
}