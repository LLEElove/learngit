#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p;
	printf("please input triange sides:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("Output:\n");
	p=(a+b+c)/2;
	if(a+b>c && a+c>b && b+c>a)
	{
		printf("area=%.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
	}
	else
		printf("date error");
	return 0;
}
