#include<stdio.h>
int main()
{
	int a[50],n,i,t;
	printf("Input n: ");
	scanf("%d",&n);
	printf("Input n numbers: ");
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	printf("Output:\n");
	for(i=0;i<=n/2-1;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(i=0;i<=n-1;i++)
		printf("%d ",a[i]); 
	printf("\n");
	return 0;
}
