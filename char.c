#include <stdio.h>
int main()
{
	/*CALCULATE TO COMPOUND INTEREST*/
	int counter = 0;
	int year, deposit;
	float interestRate;
	float result = 1;
	scanf("%d %d %f", &year, &deposit, &interestRate);
	while (counter < year)
	{
		result *= ((interestRate / 100) + 1);
		counter++;
	}
	result *= deposit;
	printf("%.2f", result);
	return 0;
}