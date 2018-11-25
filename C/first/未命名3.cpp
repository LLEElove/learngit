#include<stdio.h>
int main()
{
	float a,b,c,t;
	printf("Input a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	printf("Output:\n");
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	printf("%0.2f %0.2f %0.2f",a,b,c);
	return 0;
} 
