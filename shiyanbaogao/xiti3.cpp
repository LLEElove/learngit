#include<stdio.h>
int main()
{
	int fac(int),x;
	double y;
	for(x=32;x<=100;x=x+4)
	{
		y=fac(x);
		printf("%d     %2.2f\n",x,y);
	}
	return 0;
}
double fac(int x)
{
	double y;
	y=(x-32.0)/1.80;
	return y;
}
