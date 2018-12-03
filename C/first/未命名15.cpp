#include<stdio.h>
int main()
{
	double number1,number2;
	printf("Input 2 numbers: ");
	scanf("%lf%lf",&number1,&number2);
	printf("Output:\n");
	if(number2==0)
	{
		printf("Divide by zero.\n");
	}
	else
	{
		printf("The result is: %.2f.\n",(number1/number2));
	}
	return 0;
}
 
