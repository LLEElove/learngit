#include <stdio.h>
int main()
{
	int N,i,j,flag=0;
	printf("Please input N:");
	scanf("%d",&N);
	printf("Output:\n");
	if(N<0||N>100000)
		printf("Input error!");
	else
	{
		for(i=2;i<N;i++)
		{
			
			for(j=2;j<i;j++)
			{	
				if(i%j==0)
				{
					flag=1;
					break;
				} 
			}	
			if(flag==0)
				printf("%d ",i);
			flag=0;
		}
	}
	return 0;
}
