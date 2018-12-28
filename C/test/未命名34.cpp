#include<stdio.h>
int main()
{
	int a,b,i,j,n,x,c,d;
	printf("Please input n: ");
	scanf("%d",&n);
	printf("Output:\n");
	if(n<=1)
	{
		printf("Input error!");
		return 0;
	}
	else
	{
		printf("There are following friendly-numbers:\n");
		for(a=1;a<=n;a++)
		{
			for(i=1;i<a;i++)
			{
				if(a%i==0)
					c+=i;
			}
			for(b=1;b<=n;b++)
			{
				for(j=1;j<b;j++)
				{
					if(b%j==0)
						d+=j;
				}
				if(c==b && d==a)
				{
					printf("%d--%d",a,b);
					break;
				}
			}
			
		}
	}
	return 0;
}
