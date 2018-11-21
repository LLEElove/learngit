#include<stdio.h>
int main()
{
	int fac1(int x,int y);
	int fac2(int x,int y);
	int a,b,e,f;
	scanf("%d%d",&a,&b);
	e=fac1(a,b);
	f=fac2(a,b);
	printf("%d\n %d\n",e,f);
	return 0;
	
}
int result1;
int fac1(int x,int y)
{
int i, k, m, n;
   result1 = 1;
    k = x > y ? y : x;
    i = 2;
    while (i <= k){
        m = x % i;
        n = y % i;
        if (m == 0 && n == 0){
            result1 *= i;
            x /= i;
            y /= i;
            i = 2;
        }
        else
            i++;
    }    
	return result1;
}
extern  int result1;
int fac2(int x,int y)
{
	int result2,j=0,i;
	result2=x*y/result1;
	return result2;
}
