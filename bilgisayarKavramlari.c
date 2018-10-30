#include <stdio.h>
int main()
{
	int x=2;
	int y=2;
	int bayrak=0;
	int sayac=0;
	while(x>=2)
	{
		while(sayac<=20)
		{

			while(y<x)
			{
				if (x%y==0)        
				{
					bayrak=1;
					break;
				}
				if (x%y!=0)
					bayrak=0;
				y++;
			}
			y=2;

			if (bayrak==1)
			{
				bayrak=0;
			}
			else
			{
				printf("%d asal.\n",x );
				sayac++;
				bayrak=0;
			}
			x++;
		}
		return 0;
	}	
}