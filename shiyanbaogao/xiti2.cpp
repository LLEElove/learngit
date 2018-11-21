#include<stdio.h>
int main()
{
	int a,b,result;
	scanf("%d%d",&a,&b);
	int fac(int);
	result=fac(a)/fac(a-b);
	printf("result=%d",result);
	return 0;
}
int fac(int x)
{
	int result,i;
	result=1;
	for(i=1;i<=x;i++)
	{
		result=result*i;
	}
	return result;
}
