#include<stdio.h>
int main()
{
	int profit;
	float n;
	printf("Input profit: ");
	scanf("%d",&profit);
	printf("Output:\n");
	if(profit<=1000)
		n=profit*0;
	if(profit>1000 && profit<=2000)
		n=profit*0.1;
	if(profit>2000 && profit<=5000)
		n=profit*0.15;
	if(profit>5000 && profit<=10000)
		n=profit*0.2;
	if(profit>10000)
		n=profit*0.25;
	printf("salary=%.2f\n",500+n);
	return 0;
}
