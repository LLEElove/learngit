#include <stdio.h>
void inv(int x[ ],int n);
int main()
{
	 int i,a[5]={0};
	 printf("The original array:\n");
	 for(i=0;i<5;i++)
	   scanf("%d",&a[i]);            // ���δ����ʱ�����Ԫ�ص�ֵ
	 printf("Output:\n");
	 inv(a,5);                        // ����inv���������н���
	 printf("The array has been inverted:\n");
	 for(i=0;i<5;i++)
	   printf("%d ",a[i]);            //  ��������������Ԫ�ص�ֵ
	 printf("\n");
	 return 0;
}

void inv(int x[ ],int n)                  // �β�x��������
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

