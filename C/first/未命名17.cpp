#include<stdio.h>
int main()
{
	int i,n,la,kao,yin,t=0,min;
	char a[101];
	printf("请输入现在队伍的列数：\n");
	scanf("%d", &n);
	printf("拉面的制作时间：\n");
	scanf("%d",&la);
	printf("烤肉的制作时间：\n");
	scanf("%d",&kao);
	printf("饮料的制作时间：\n");
	scanf("%d",&yin);
	min=3*100*(kao+yin+la);
	while(n!=0)
	{
		printf("第%d对的排列情况：\n",n);
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
	printf("Output:\n最快吃上饭的那个队伍的排队时间是:%d",min);
	return 0;
}
