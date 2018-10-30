#include <stdio.h>
int main()
{ /*
      
       *      4
      ***     3 
     *****    2
    *******   1
   *********  0
   
     1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1


*/
int x=1;
int y=0;
int tab=4;
int sayac=4;

while(x<10)
{ 
  while(x>y)
  {
    while(sayac>=0)
    {
      printf(" ");
      sayac--;
    }
    if(x%2==1)
    {
      printf("*");
    }
    y++;
  }
  y=0;
  x++;
  if(x%2==0)
  {
    printf("\n");
    sayac=(--tab);
  }
  } 
  return 0;
}
