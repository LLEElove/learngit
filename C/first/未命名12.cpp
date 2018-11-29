#include<stdio.h>
int main()
{
	int x;
	printf("Please input an integer:");
	scanf("%d",&x);
	printf("Output:\n");
	if(x%7==0 && x%5==0)
		printf("Yes.");
	else
		printf("No.");
	return 0; 
}
