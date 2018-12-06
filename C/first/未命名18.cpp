#include<stdio.h>
int main()
{
	float p,w,f,d;
	int s;
	printf("Input: ");
	scanf("%f%f%d",&p,&w,&s);
	printf("Output:\n");
	if(s<250)
		d=0;
	if(s>=250 && s<500)
		d=0.02;
	if(s>=500 && s<1000)
		d=0.05;
	if(s>=1000 && s<2000)
		d=0.08;
	if(s>=2000 && s<3000)
		d=0.10;
	if(s>=3000)
		d=0.15;
	f=p*w*s*(1-d);
	printf("%.4f",f);
	return 0;
 } 
