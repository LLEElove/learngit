#include<stdio.h>
int main()
{
	int a[5],i,j,min,t;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		min=i;
		for(j=i;j<=4;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	for(i=0;i<=4;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
