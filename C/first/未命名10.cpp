#include<stdio.h>
int main()
{
	int x,y;
	printf("please input x,y:");
	scanf("%d,%d",&x,&y);
	printf("Output:\n");
	if(x>y)
		printf("%d",x);
	else
		printf("%d",y);
	return 0; 
}
