#include<stdio.h>
int main()
{
	double a,b,t;
	printf("Input a,b: ");
	scanf("%lf%lf",&a,&b);
	printf("Output:\n");
	if(b<a)
	{
		t=b;
		b=a;
		a=t;
	}
	printf("%.2f %.2f",a,b);
	return 0;
 } 
