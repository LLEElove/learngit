#include<stdio.h>
int main()
{
	int n,i,j,x;
	printf("input a number(1~9):");
	scanf("%d",&n);
	printf("Output:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			x=i*j;
			printf("%d*%d=%-3d",i,j,x);
		}
		putchar(10);
	}
	return 0;
}
