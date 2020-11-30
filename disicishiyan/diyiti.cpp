#include<stdio.h>
int main()
{
	int a,b,c,d,e,max;
	int fac(int,int,int);
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	fac(a,b,c);
	max=fac(fac(a,b,c),d,e);
	printf("max=%d\n",max);
	return 0;
}
int fac(int x,int y,int z)
{
	if(x>y && x>z)
		return x;
	if(y>x && y>z)
		return y;
	if(z>x && z>y)
		return z;
}
