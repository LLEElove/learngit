#include<stdio.h>
int main()
{
	int N,K,p=0,i;
	double price=200;
	printf("Please input money and k:");
	scanf("%d%d",&N,&K);
	printf("Output:\n");
	for(i=1;i<=20;i++)
	{
		p+=N;
		if(p>=price)
		{
			printf("Need %d years\n",i);
			break;
		}
		price=price*(1+(K/100.0));
		if(i==20)
		{
			printf("Impossible\n");
			break;
		}
	}
	return 0;
}
