#include<stdio.h> 
int main()
{
	double a,b;
	printf("Input a,b: ");
	scanf("%lf%lf",&a,&b);
	if(a>b)
		printf("Output:\n%0.2lf %0.2lf",a,b);
	if(b>a)
		printf("Output:\n%0.2lf %0.2lf",b,a);
	return 0;
}
