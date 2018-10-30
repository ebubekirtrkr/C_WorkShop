#include <stdio.h>
int main(){
	float degree;
	char kar;
	scanf("%f %c",&degree, &kar);
	if(kar == 'F')
	{
		printf("%.2f\n",((degree-32)/1.8)) ;
	}
	if(kar == 'C')
	{
		printf("%.2f\n", degree*1.8+32);
	}
	return 0;
}