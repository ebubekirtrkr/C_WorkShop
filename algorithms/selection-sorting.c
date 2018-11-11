/*
SELECION SORTING

The algorithm divides the input array into two parts:
1: the subarray of items already sorted, which is built up from left to right, and 
2: the subarray of items remaining to be sorted that occupy the rest of the array.
Initially, the sorted subarray is empty and the unsorted subarray is the entire input array. The algorithm proceeds by finding the smallest element in the unsorted subarray, swapping it with the leftmost unsorted element (putting it in sorted order), and moving the subarray boundaries one element to the right.
*/
#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, position, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0; c < (n - 1); c++)
  {
    position = c;
   
    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      swap = array[c];
      array[c] = array[position];
      array[position] = swap;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);
 
  return 0;
}

