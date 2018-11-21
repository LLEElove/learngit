#include<stdio.h>
int main()
{
	int fac(int n,int x);
	int x,n,result;
	scanf("%d%d",&n,&x);
	fac(n,x);
	printf("suoxiangshi=%d\n",fac(n,x));
	return 0;
}
int fac(int n,int x)
{
	int result;
	if(n==0)
		result=1;
	if(n==1)
		result=x;
	if(n>1)
		result=((2*n-1)*x-fac(n-1,x)-(n-1)*fac(n-2,x))/n;
	return result;
}
