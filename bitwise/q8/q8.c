#include<stdio.h>
void main()
{
int n,num,s,squ=1,b,mul,div,c,base=2;
printf("enter the number of shifts:");
scanf("%d",&n);
printf("\n enter the num:");
scanf("%d",&num);
printf("\n enter your choice\n1.leftshift&multiply\n2.rightshift&divide\n");
scanf("%d",&s);
switch(s)
{
case 1:c=(num<<n);
   for(int i=0;i<n;i++)
{
   squ=squ*base;
}
mul=num*squ;
printf("\nleftshift value of%d:%d",num,c);
printf("\nmultiply value of %d:%d",num,mul);
break;
case 2:c=(num>>n);
   for(int i=1;i<=n;i++)
 {
  squ=squ*base;
}
  div=num/squ;
  printf("\nrightshift value of %d:%d",num,c);
printf("\ndivide value of %d:%d",num,div);
break;
default:printf("\nwrong choice");
}
}
