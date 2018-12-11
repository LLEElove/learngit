#include<stdio.h>
#include<string.h>
struct Node
{
	char name[20];
	int score;
	struct Node *next = NULL;
};
int main()
{
	struct Node *a,*b;
	struct Node str1,str2;
	str1.score=97;
	str2.score=66;
	scanf("%s",str1.name );
	scanf("%s",str2.name );
	a=&str1;
	str1.next=&str2;
	b=a;
	while(b!=NULL)
	{
		printf("%s\n%d\n",b->name ,b->score );
		b=b->next ;
	}
	return 0;
}
 
