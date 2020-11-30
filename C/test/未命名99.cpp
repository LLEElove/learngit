#include<stdio.h>
#include<string.h>
int main()
{
	char a[30][30];
	int i,n,j,p=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		p=1;
		if(a[i][0]!='_' && !(a[i][0]>='a' && a[i][0]<='z') &&!( a[i][0]>='A' && a[i][0]<='Z'))
			p=0;
		else for(j=0;a[i][j]!='\0';j++)
		{
			if(!(a[i][j]>='a' && a[i][0]<='z') &&!( a[i][j]>='A' && a[i][j]<='Z')&&!(a[i][j]>='0'&&a[i][j]<='9')&&a[i][j]!=' ')
			{
				p=0;
				break;
			}
		}
		if(p==1)
		{
			printf("合法!\n");
		}
		if(p==0)
			printf("不合法!\n");
		
	}
	return 0;
 } 
