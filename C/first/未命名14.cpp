#include<stdio.h>
int main()
{
	int x,y;
	printf("Input x: ");
	scanf("%d",&x);
	printf("Output:\n");
	if(x==0)
		y=0;
	if(x<0)
		y=-1;
	if(x>0)
		y=1;
	printf("y=%d\n",y);
	return 0;
}
