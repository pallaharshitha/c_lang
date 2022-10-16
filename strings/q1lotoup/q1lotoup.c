#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int i;
printf("\n enter a str:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32;
}
}
printf("\n uppercase =%s",str);

return 0;
}
