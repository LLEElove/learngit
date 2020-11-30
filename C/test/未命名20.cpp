#include<stdio.h>
#include<string.h>
int main()
{
	int a[10],b[10],i,j=0,x1=0,x2=0;
	printf("Input:\n");
	printf("please input array a:\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("please input array b:\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(a[i]>b[i])
			x1++;
		if(a[i]<b[i])
			x2++;
		if(a[i]==b[i])
			j++;
	}
	printf("Output:\n");
	printf("%d %d %d\n",x1,j,x2);
	if(x1>x2)
		printf("a>b");
	if(x1<x2)
		printf("a<b");
	if(x1==x2)
		printf("a=b");
	return 0;
}
