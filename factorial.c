#include <stdio.h>
int main()
{
	int N;
	int result=1;
	scanf("%d",&N);
	while(N>0)
	{
		if (N==0)
		{
			result=1;
		}
		else
		{
			result*=N;
			--N;
		}
	}
	if (N<0)
	{
		printf("Invalid input!");
	}
	else
	{
		printf("%d\n",result );
	}
	return 0;
}
