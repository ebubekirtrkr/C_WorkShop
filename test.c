#include <stdio.h>
int main()
{	
	int k, a = 0, b = 5, c = -2;

	k = ++a || --b && ++c;
	printf("%d, %d, %d, %d", k, a, b, c);

	return 0;
}