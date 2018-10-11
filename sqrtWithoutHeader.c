#include<stdio.h>
int main(){
	float a,i;
	scanf("%f",&a);
	for (i = 0.01; i*i < a;i=i+0.01);
	printf("%.2f\n",i);
	return 0;
}
