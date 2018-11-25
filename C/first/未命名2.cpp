#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,y,i;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("Output:\n");
	for(i=1;i<n;i++)
	{
		x=sqrt(i+100);
		y=sqrt(i+268);
		if(x*x==i+100 && y*y==i+268)
			printf("%d\n",i);
	}
	return 0;
} 
