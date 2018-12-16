#include<stdio.h>
int main()
{
	int a,b,i,t;
	printf("Please input a and b:");
	scanf("%d%d",&a,&b);
	printf("Output:");
	if(a>10000 || a<=0 || b<=0 || b>10000)
		printf("\nInput error!\n");
	else
	{
		if(a>b)
		{
			t=b;
			b=a;
			a=t;
		}
		for(i=a;i>=2;i--)
		{
			if(a%i==0 && b%i==0)
			{
				printf("%d",(a*b)/i);
				break;
			}
		}
	}
	return 0;
} 
