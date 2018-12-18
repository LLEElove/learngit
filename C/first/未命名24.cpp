#include<stdio.h>
int main()
{
	int ch,ra,a;
	printf("Please input a:");
	scanf("%d",&a);
	printf("Output:\n");
	if(a%2!=0||a<=0||a>=32768)
	{
		printf("0 0\n");
	}
	else
	{
		printf("%d %d",(a%4)/2+a/4,a/2);
	}
	return 0;
}
