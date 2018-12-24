#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char filename[10],str[80];
	int n,i=0;
	printf("Input filename:");
	scanf("%s",&filename);
	printf("Input n:");
	scanf("%d",&n);
	printf("Output:\n");
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("Open Error!\n");
		exit(0);
	}
	fgets(str,n+1,fp);
	printf("%s\n",str);
	fclose(fp);
	return 0;
}
