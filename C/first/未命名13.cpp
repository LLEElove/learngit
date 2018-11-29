#include<stdio.h>
int main()
{
	int x;
	long y;
	printf("Please input x:");
	scanf("%d",&x);
	printf("Output:\n");
	if(x==0)
		y=7909;
	if(x>0)
		y=2*x-1;
	if(x<0)
		y=(-5)*x+27;
	printf("F(%d) = %d",x,y);
	return 0;
}
