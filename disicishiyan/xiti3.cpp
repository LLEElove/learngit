#include<stdio.h>
int main()
{
	double fac(double),y;
	int x;
	
	for(x=32;x<=100;x=x+4)
	{
		y=fac(x);
		printf("%d     %.2f\n",x,y);
	}
	return 0;
}
double fac(double x)
{
	double y;
	y=(x-32.0)/1.80;
	return y;
}
