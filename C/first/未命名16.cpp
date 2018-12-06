#include<stdio.h>
int main()
{
	int data1,data2;
	char op;
	printf("Please input data1 op data2: ");
	scanf("%d %c %d",&data1,&op,&data2);
	printf("Output:\n");
	switch(op)
	{
	case'+':printf("%d%c%d=%0.f",data1,op,data2,(double)data1+data2);break;
	case'-':printf("%d%c%d=%0.f",data1,op,data2,(double)data1-data2);break;
	case'*':printf("%d%c%d=%0.f",data1,op,data2,(double)data1*data2);break;
	case'/':
	{
		if(data2==0)
		{
			printf("Error! chu shu wei 0.");
			break; 
		}
			printf("%d%c%d=%.2f",data1,op,data2,(double)data1/data2);break;
	}
	case'%':
	{
		if(data2==0)
		{ 
			printf("Error! chu shu wei 0.");
			break;
		}
			printf("%d%c%d=%d",data1,op,data2,data1%data2);break;
	}
	}
	return 0;
}
