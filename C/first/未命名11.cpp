#include<stdio.h>
#include<math.h>
int main()
{
	float fac(float a,float b,float c,float d,float x);
	float a,b,c,d,k;
	printf("Please input a b c d k:\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&k);
	printf("Output:\n");
	fac(a,b,c,d,k);
	printf("The root is:%.4f",fac(a,b,c,d,k));
	return 0;
}
float fac(float a,float b,float c,float d,float x)
{
	while(fabs(a*x*x*x+b*x*x+c*x+d)>1e-6)
		x=x-((a*x*x*x+b*x*x+c*x+d)/(3*x*x+2*b*x+c));
	return x;
} 
