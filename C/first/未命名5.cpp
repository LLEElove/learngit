#include<stdio.h>
int main()
{
	int a,b;
	printf("please input a,b,c:");
	scanf("%d,%d",&a,&b);
	printf("Output:\n");
	if(a>0 && b>0)
	{
		if(a==b)
			printf("-1");
		else
			printf("%d",(a+b));
	}
	else
		printf("error");
	return 0;
} 
