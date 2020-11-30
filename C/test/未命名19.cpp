#include<stdio.h>
int main()
{
	int x,i,j,n;
	printf("Please input number: ");
	scanf("%d",&n);
	printf("Output:\n");
	if(n<=0 || n>=1000)
	{
		printf("Input error!");
	}
	else
	{
		printf("%d=",n);
		x=n/100;i=n%100;
		switch(x)
		{
			case 9:printf("CM");break;
			case 8:printf("DCCC");break;
			case 7:printf("DCC");break;
			case 6:printf("DC");break;
			case 5:printf("D");break;
			case 4:printf("CD");break;
			case 3:printf("CCC");break;
			case 2:printf("CC");break;
			case 1:printf("C");break;
		}
		x=i/10;n=i%10;
		switch(x)
		{
			case 9:printf("XCC");break;
			case 8:printf("LXXX");break;
			case 7:printf("LXX");break;
			case 6:printf("LX");break;
			case 5:printf("L");break;
			case 4:printf("XL");break;
			case 3:printf("XXX");break;
			case 2:printf("XX");break;
			case 1:printf("X");break;
		}
		switch(n)
		{
			case 9:printf("IX");break;
			case 8:printf("VIII");break;
			case 7:printf("VII");break;
			case 6:printf("VI");break;
			case 5:printf("V");break;
			case 4:printf("IV");break;
			case 3:printf("III");break;
			case 2:printf("II");break;
			case 1:printf("I");break;
		}
	}
	return 0;
}
