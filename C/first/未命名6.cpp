#include<stdio.h>
int main()
{
	char x;
	printf("Input: ");
	scanf("%c",&x);
	printf("Output:\n");
	if(x>='A' && x<='Z')
		printf("%c",(x+32));
	return 0;
} 
