#include<stdio.h>
#include<string.h>
int main()
{
void fac(char[],int);
char string[50];
int strLength;
gets(string);
strLength = strlen(string);

fac(string,strLength);
puts(string);

return 0;
}

void fac(char str[],int n)
{
    int i;
    char tmp;
    for (i =0;i<n/2;i++)
    {
        tmp = str[i];
        str[i]=str[n-i-1];
        str[n-i-1] =tmp;
    }
}


