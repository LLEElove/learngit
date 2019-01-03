#include<stdio.h>
int main()
{
	int a[3][4],i,j;
	printf("Please input 3 students' scores:[0-100]\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		} 
	printf("Output:\nNot pass students are:\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=3;j++)
		{
			if(a[i][j]<60)
			{
				printf("%d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3]);
				break;
			}
		}
		return 0;
}
