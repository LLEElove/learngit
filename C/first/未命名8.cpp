#include<stdio.h>
int main()
{
	int score;
	printf("Please input a score: ");
	scanf("%d",&score);
	printf("Output:\n");
		if(score>100 || score<0)
			printf("Input error!");
		else if(score>=90 && score<=100)
			printf("%d belongs to A",score);
		else if(score>=60 && score<=89)
			printf("%d belongs to B",score);
		else if(score<60 && score>=0)
			printf("%d belongs to C",score);
	return 0;
}
