#include<stdio.h>
int main()
{
	int i,n,la,kao,yin,t=0,min;
	char a[101];
	printf("���������ڶ����������\n");
	scanf("%d", &n);
	printf("���������ʱ�䣺\n");
	scanf("%d",&la);
	printf("���������ʱ�䣺\n");
	scanf("%d",&kao);
	printf("���ϵ�����ʱ�䣺\n");
	scanf("%d",&yin);
	min=3*100*(kao+yin+la);
	while(n!=0)
	{
		printf("��%d�Ե����������\n",n);
		scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='A' || a[i]=='a')
			t+=la+kao+yin;
		else if(a[i]=='B' || a[i]=='b')
			t+=2*la+kao;
		else if(a[i]=='C' || a[i]=='c')
			t+=3*la+3*kao+2*yin;
	}
		if(t<min)
			min=t;
		t=0;
		n--;
	}
	printf("\n");
	printf("Output:\n�����Ϸ����Ǹ�������Ŷ�ʱ����:%d",min);
	return 0;
}
