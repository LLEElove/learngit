#include<stdio.h>
int main()
{
	int fac(int);
	int x;
	printf("������һ������");
	scanf("%d",&x);
	fac(x);
	return 0;
} 
int fac(int n)
{
	int i;
	for(i=2;i<=(n/2+1);i++)
	{
		if(n%i==0)
		{
			printf("��������");
			break;
		}
		if(i==(n/2+1))
			printf("������");
	}	
}
