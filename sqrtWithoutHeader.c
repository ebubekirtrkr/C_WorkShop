#include<stdio.h>
#include<math.h>
int main(){
	float a;
	float i=0.001;
	scanf("%f",&a);
  printf("%f\n",sqrt(a));
	while(i*i < a)
	{
		i+=0.001;
	}
	printf("%f\n",i);
	return 0;
}
