#include<stdio.h>
#include<string.h>
int main()
{
	int m,x1,x2,i;
	char a[80],b[80];
	scanf("%d",&m);
	while(m)
	{
		m--;
		scanf("%s",a);
		scanf("%s",b);
		printf("Output:\n");
		x1=strlen(a);
		x2=strlen(b);
		if(x1==x2) 
			printf("%s is equal long to %s",a,b);
		if(x1>x2)
			printf("%s is longer than %s",a,b);
		if(x1<x2)
			printf("%s is shorter than %s",a,b);
		putchar(10);
	}
	return 0;
}
