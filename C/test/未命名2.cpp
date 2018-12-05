#include<stdio.h>
#include<string.h>
int main()
{
	void fac(char *arr);
	char arr[80];
	printf("Please Input 5 Characters:\n");
	gets(arr);
	printf("Output:\n");
	fac(arr);
	return 0;
}
void fac(char *arr)
{
	int i;
	i=strlen(arr)-1;
	for(;i>=0;i--)
	{
		putchar(*(arr+i));
	}
} 
