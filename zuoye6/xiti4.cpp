#include<stdio.h>
int main()
{
	void fac(int [3][3]);
	int x[][3]={{1,2,3},{4,5,6},{7,8,9}};
	fac(x);
	return 0;
}
void fac(int x[][3])
{
	int j,i;
	int x1[3][3];
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			x1[j][i]=x[i][j];
		}
	} 
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",x1[i][j]);
		}
		printf("\n");
	}
} 
