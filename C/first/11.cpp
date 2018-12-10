#include<stdio.h>

int main() {
        int a,b,i,j,sum,wan;
        wan=0;
	printf("请输入查找区间a b（最大区间为1-10000）：\n");
        scanf("%d %d",&a,&b);
	printf("Output:\n");
	if((a<1)||(b>10000)||(a>=b))
		printf("输入有误!");
	else
	{
	      printf("%d到%d之间的完数情况为：",a,b);
                
              for(i=a;i<=b;i++){  
                sum=0;
                for(j=1;j<i;j++) 
                { 
                   
                     if(i%j==0) 
                     { 
                           sum+=j; 
                     } 
                } 
                if(sum==i)
                { 
                  wan=1;
                  printf("%d ",i);
                } 
              }

              if(wan==0)
                 printf("没有完数!");

        } 

                /*if (a<=6 && b>=6) printf("6 ");
                if (a<=28 && b>=28) printf("28 ");
                if (a<=496 && b>=496) printf("496 ");
                if (a<=8128 && b>=8128) printf("8128 ");
				if(a>=1&&b<6) printf("没有完数！");
				if(a>6&&b<28) printf("没有完数！");
				if(a>28&&b<496) printf("没有完数！");
				if(a>496&&b<8128) printf("没有完数！");
				if(a>8128&&b<=10000) printf("没有完数！");*/


        printf("\n");
        return 0;
}
