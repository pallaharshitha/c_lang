#include<stdio.h>
void main()
{
int i,a,b,n;
printf("\n enter the values :");
scanf(" %d %d",&a,&b);
for(i=1;i<=a;i++)
{
   if(a%i==0 && b%i==0)
{
    n=1;
}
}
{
if(n==1)
   printf("\n %d and %d are co-prime numbers\n",a,b);
else
   printf("\n %d and %d are not co-prime num\n",a,b);
}
}
