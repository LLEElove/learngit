#include<stdio.h>
int main()
{
	int m,n,i,t,bei,yue;
	printf("Please input two numbers:\n");
	scanf("%d,%d",&m,&n);
	printf("Output:\n");
	if(m<=0 || n<=0)
		printf("Input error!");
	else
	{
		if(m<n)
		{
			t=m;
			m=n;
			n=t;
		}
		for(i=n;i>=2;i--)
		{
			if(m%i==0 && n%i==0)
			{
				yue=i;
				break;
			}
		}
		bei=m*n/yue;
		printf("GCD:%d\nLCM:%d",yue,bei);
	}
	return 0;
}
