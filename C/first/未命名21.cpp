#include<stdio.h>
int main()
{
	int benjin,cunqi;
	double lixi;
	printf("Input:\n");
	printf("Please input benjin,cunqi:\n");
	scanf("%d,%d",&benjin,&cunqi);
	if(benjin>=0)
	{
		switch(cunqi)
		{
			case 1:lixi=benjin*0.0315;break;
			case 2:lixi=2*benjin*0.0363;break;
			case 3:lixi=3*benjin*0.0402;break;
			case 5:lixi=5*benjin*0.0469;break;
			case 8:lixi=8*benjin*0.0536;break;
		}
		printf("\nOutput:\n");
		printf("lixi = %.2lf yuan!",lixi);
	}
	else
	{
		printf("\nOutput:\n");
		printf("The Money is Invalid!");
	}
	return 0;
	
}
