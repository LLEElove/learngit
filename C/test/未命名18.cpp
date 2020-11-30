#include<stdio.h>
int main()
{
	int n,m,i;
	double a=1,b=1;
	printf("Input:\n");
	scanf("%d%d",&n,&m);
	printf("Output:\n");
	if(n<1 || m<0 || n>30 || m>n)
		printf("The ans is:0\n");
	else
	{
		for(i=n-m+1;i<=n;i++)
			b=b*i;
		for(i=1;i<=m;i++)
			a=a*i;
		printf("The ans is:%.0f\n",b/a);
	}
	return 0;
}
