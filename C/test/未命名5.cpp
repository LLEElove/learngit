#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char str1[20],str2[15][100],str3[20];
	int i=0,first,last,flag=0;
	printf("input the file's name and the string: ");
	scanf("%s",str1);
	scanf("%s",str3);
	printf("Output:\n");
	if((fp=fopen(str1,"r"))==NULL)
	{
		printf("\nfile open error!");
		exit(0);
	}
	else
	{
		printf("------------------------File content:----------------------\n");
		while(fgets(str2[i],100,fp)!=NULL)
		{
			printf("%s",str2[i]);
			if(strcmp(str2[i],str3)==0 && flag==1)
			{
				flag=2;
				last=2;	
			}	
			if(strcmp(str2[i],str3)==0)
			{
					first=i;
					flag=1;
			}
			i++;
		}
		if(flag==0)
		{
			first=-1;
			last=-1;
		}
		printf("\n------------------------File summary:----------------------\n");
		printf("%d lines, first line: %d, last line: %d\n",i,first,last);
	}
	return 0;
} 
