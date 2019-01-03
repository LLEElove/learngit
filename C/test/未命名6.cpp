#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Please input N:");
	scanf("%d",&n);
	printf("Output:\n");
	if(n>100000)
		printf("Input error!\n");
	else if(n>=2)	
	{
		printf("2 ");
		for(i=2;i<=n;i++)
		{
			for(j=2;j<=i/2+1;j++)
			{
				if(i%j==0)
					break;
				if(j==i/2+1)
				{
					printf("%d ",i);
					break;
				}
			}
		}
	 } 
	return 0;
 } 
