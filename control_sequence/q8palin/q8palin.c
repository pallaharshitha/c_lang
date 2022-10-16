#include<stdio.h>
void main()
{
   int n,n1,rev=0,rem;
   printf("enter the value:");
   scanf("%d",&n);
   n1=n;
   while(n!=0)
   {
     rem=n%10;
     rev=rev*10+rem;
     n/=10;
   }
   if(n1==rev)
   printf("the given num is a palindrome %d",n1);
   else
	   printf("the given num is not a palindrome %d",n1);
}
