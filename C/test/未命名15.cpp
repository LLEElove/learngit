#include <stdio.h>
void inv(int x[ ],int n);
int main()
{
	 int i,a[5]={0};
	 printf("The original array:\n");
	 for(i=0;i<5;i++)
	   scanf("%d",&a[i]);            // 输出未交换时数组各元素的值
	 printf("Output:\n");
	 inv(a,5);                        // 调用inv函数，进行交换
	 printf("The array has been inverted:\n");
	 for(i=0;i<5;i++)
	   printf("%d ",a[i]);            //  输出交换后数组各元素的值
	 printf("\n");
	 return 0;
}

void inv(int x[ ],int n)                  // 形参x是数组名
 {
	  /******start******/
	int t,i;
	for(i=0;i<=n/2-1;i++)
	{
		t=x[i];
		x[i]=x[n-i-1];
		x[n-i-1]=t;
	}
/******end******/
 }

