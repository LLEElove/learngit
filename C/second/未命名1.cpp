#include<stdio.h>
int main()
{
	double i=2,result=1.0,j=1;
	int n;
	printf("Please input n:");
	scanf("%d",&n);
	printf("Output:");
	if(n<=0 || n>=1000)
		printf("Input error!");
	else
	{
		while(i<=n)
		{
			j*=(-1);
			result+=j*(1/i);
			i++;
		}
		printf("the ans is %.5f",result);
	}
	
	return 0;
}
