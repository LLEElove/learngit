#include<stdio.h>
int main()
{
	int n,i;
	double h,m=100;
	h=100/2;
	printf("Please input n: ");
	scanf("%d",&n);
	putchar(10);
	printf("Output:\n");
	if(n<=0)
		printf("Input error!");
	else
	{
		for(i=2;i<=n;i++)
		{
			m=m+2*h;
			h=h/2;
		}
	}
	printf("The height of the bounce is(m):%.3f.\nThe height of the %dth bounce is:%.3f.",m,n,h);
	return 0;
} 
