#include <stdio.h>
int main()
{
	int money,j,pursh,k;
	double price=200;
	printf("Please input money and k:");
	scanf("%d%d",&money,&k);
	pursh=0;
	price=200;
	for(j=1;j<=20;j++)
	{
		pursh+=money;
		if(pursh>=price)
		{
			printf("Output:\nNeed %d years\n",j);
			return 0;
		}
		price=price*(1+(k/100.0));
	}
	printf("Output:\nImpossible\n");
	return 0;
}

