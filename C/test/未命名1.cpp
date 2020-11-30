#include <stdio.h>
int main(){
	char a[10];
	int i,j;
	gets(a);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
				a[j]='1';
				puts(a);
		}
		
	}
}
