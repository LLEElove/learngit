#include<stdio.h>
int main()
{
	int year,month,day,x;
	printf("Please input year,month,day\n");
	scanf("%d,%d,%d",&year,&month,&day);
	printf("Output:\n");
	if(month==1)
		x=day;
	if(month==2)
		x=31+day;
	if(month==3)
		x=28+31+day;
	if(month==4)
		x=31+28+31+day;
	if(month==5)
		x=31+28+30+31+day;
	if(month==6)
		x=31+28+31+31+30+day;
	if(month==7)
		x=31*3+30*2+28+day;
	if(month==8)
		x=31*5+30*1+28+day;
	if(month==9)
		x=31*5+30*2+28+day;
	if(month==10)
		x=31*5+30*3+28+day;
	if(month==11)
		x=31*6+30*3+28+day;
	if(month==12)
		x=31*6+30*4+28+day;
	if((year%4==0 && year%100!=0) || year%400==0)
		if(month>=3)
		x+=1;
	printf("It is the %dth day",x);
	return 0;
}
