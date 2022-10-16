#include<stdio.h>

void main()
{
char uppstr[50]="",lowstr[50]="";
int i=0;
printf("enter the upp str:" );
gets(uppstr);
while(uppstr[i]!='\0')
{
lowstr[i]=uppstr[i]+32;
i++;
}
printf("\n lower case =%s",lowstr);
gets();
}

