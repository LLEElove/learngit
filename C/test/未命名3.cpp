#include<stdio.h>
int main()
{
	int fac(int n,int k,int a);
	int n,k,a;
	printf("Please input n k a:\n");
	scanf("%d%d%d",&n,&k,&a);
	printf("Output:\n");
	printf("The age is:%d.",fac(n,k,a));
	return 0;
} 
int fac(int n,int k,int a)
{
	int age;
	if(n==1)
		age=a;
	if(n>1)
		age=fac(n-1,k,a)+k;
	return age;
}
