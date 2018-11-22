#include<stdio.h>
int main()
{
	void fac(int);
	int a;
	scanf("%d",&a);
	fac(a);
	return 0;
}
void fac(int x)
{
	int i;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			printf("shisushu");
			break;
		}
		if(i==x/2)
			printf("bushisushu");
	}
}
