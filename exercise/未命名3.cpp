#include<stdio.h>
int main()
{
	int fac(int x);
	int x;
	scanf("%d",&x);
	fac(x);
	printf("%d",fac(x));
	return 0;
}
int fac(int x)
{
	int y;
	if(x==1 || x==0)
		y=1;
	else if(x>1)
		y=x*fac(x-1);
	return y;
}
