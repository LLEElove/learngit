#include<stdio.h>
int main()
{
	int a,b,i,sum,j,wan=0;
	printf("�������������a b���������Ϊ1-10000����\n");
	scanf("%d %d",&a,&b);
	printf("Output:\n");
	if(a<=b && a>=1 && b<=10000)
	{
		printf("%d��%d֮����������Ϊ��",a,b);
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
			printf("û������!");
	}
	else
		printf("��������!");
	printf("\n");
	return 0; 
}
