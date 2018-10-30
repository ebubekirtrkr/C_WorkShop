#include <stdio.h>
int main()
{	
	int x1, x2, x3, x4, lrgst, sum , lwrst;
	float avr;
	char opr;
	scanf("%i %i %i %i %c",&x1, &x2, &x3, &x4, &opr);
	switch(opr)
	{
		case 'x':
		lrgst=x1;
		if (x1>x2)
		{
			if (x1>x3)
			{
				if (x1>x4)
					lrgst=x1;
				else
					lrgst=x4;
			}
			else
			{
				if (x3>x4)
					lrgst=x3;
				else
					lrgst=x4;
			}
		}
		else if (x2>x3)
		{
			if (x2>x4)
				lrgst=x2;
			else
				lrgst=x4;
		}
		else
		{
			if (x3>x4)
				lrgst=x3;
			else
				lrgst=x4;
		}
		printf("%#x\n",lrgst );
		break;

		case 'm':
		lwrst=x1;
		if (x1<x2)
		{
			if (x1<x3)
			{
				if (x1<x4)
					lwrst=x1;
				else
					lwrst=x4;
			}
			else
			{
				if (x3<x4)
					lwrst=x3;
				else
					lwrst=x4;
			}
		}
		else if (x2<x3)
		{
			if (x2<x4)
				lwrst=x2;
			else
				lwrst=x4;
		}
		else
		{
			if (x3<x4)
				lwrst=x3;
			else
				lwrst=x4;
		}
		printf("%#x\n",lwrst );
		break;

		case 's':
		sum=x1+x2+x3+x4;
		printf("%#x\n",sum );
		break;

		case 'a':
		avr=((float)x1+(float)x2+(float)x3+(float)x4)/4;
		printf("%e\n",avr );
		break;
	}


	return 0;
}
