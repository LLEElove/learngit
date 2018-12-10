#include<stdio.h>
int main()
{
	int a,b,i,sum,j,wan=0;
	printf("请输入查找区间a b（最大区间为1-10000）：\n");
	scanf("%d %d",&a,&b);
	printf("Output:\n");
	if(a<=b && a>=1 && b<=10000)
	{
		printf("%d到%d之间的完数情况为：",a,b);
		for(j=a;j<=b;j++)
		{
			sum=0;
			for(i=1;i<j;i++)
			{
				if(j%i==0)
				sum+=i;
			}
			if(sum==j)
			{
				wan++;
				printf("%d ",j);
			} 
		}
		if(wan==0)
			printf("没有完数!");
	}
	else
		printf("输入有误!");
	printf("\n");
	return 0; 
}
