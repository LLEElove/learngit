#include<stdio.h>
int main()
{
	int x,y;
	printf("please input x,y:");
	scanf("%d,%d",&x,&y);
	printf("Output:\n");
	if(x>y)
		printf("%d is bigger",x);
	else
		printf("%d is bigger",y);
	return 0;
}
