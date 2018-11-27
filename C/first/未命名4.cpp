#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please input a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Output:\n");
	if(a+b>c && a+c>b && b+c>a)
	{
		if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
			printf("good");
		else if(a==b || b==c ||a==c)
			printf("perfect");
		else
			printf("just a triangle");
	}
	else
		printf("Input error!");
	return 0;	
} 
