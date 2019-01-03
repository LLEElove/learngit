#include<stdio.h>
int main()
{
	int a[2][3],i,j,t;
	printf("input number of test:\n");
	scanf("%d",&t);
	while(t)
	{
		t--;
		printf("input the first group version No.:(main sub revision)\n");
		scanf("%d%d%d",&a[0][0],&a[0][1],&a[0][2]);
		printf("input  thesecond group version No.:(main sub revision)\n");
		scanf("%d%d%d",&a[1][0],&a[1][1],&a[1][2]);
		printf("Output:\n");
		if(a[0][0]>a[1][0])
			printf("First\n");
		if(a[0][0]<a[1][0])
			printf("Second\n");
		if(a[0][0]==a[1][0] && a[0][1]>a[1][1])
			printf("First\n");
		if(a[0][0]==a[1][0] && a[0][1]<a[1][1])
			printf("Second\n");
		if(a[0][0]==a[1][0] && a[0][1]==a[1][1] && a[0][2]>a[1][2])
			printf("First\n");
		if(a[0][0]==a[1][0] && a[0][1]==a[1][1] && a[0][2]<a[1][2])
			printf("Second\n");
		if(a[0][0]==a[1][0] && a[0][1]==a[1][1] && a[0][2]==a[1][2])
			printf("Same\n");
	}
	return 0;
}
