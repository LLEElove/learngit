#include<stdio.h>
int main()
{
	int m,n,i;
	double result1=1,result2=1,ans;
	printf("Input:\n");
	scanf("%d%d",&n,&m);
	printf("Output:\n");
	if(n<1||n>30||m<0||m>n)
		printf("The ans is:0\n");
	else
	{
		for(i=1;i<=m;i++)
			result1=result1*i;
		for(i=n-m+1;i<=n;i++)
			result2=result2*i;
		ans=result2/result1;
		printf("The ans is:%.0f\n",ans);		
	}
	return 0;
	
}
