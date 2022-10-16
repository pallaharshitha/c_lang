#include<stdio.h>
int index(int s[],int,int);
void main()
{
int i,s[40],sz,t;
printf("\n enter the size of an array :");
scanf("%d",&sz);
printf("enter the elements of array:");
for(i=0;i<sz;i++)
{
scanf("%d",&s[i]);
}
printf("\n enter the num whose rightmost occurance you want to find:");
scanf("%d",&t);
index(s,sz,t);
}
int index(int s[],int size,int t)
{
int i;
int j=1;
for(i=size-1,j=1;i>=0;--i)
{
if(s[i]==t)
{
printf("\n %d rightmost occurance is %d\n",t,j);
break;
}
j++;
}
}
