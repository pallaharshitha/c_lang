#include<stdio.h>
int factorial();
void main()
{
int n,res;
printf("Enter value of n:");
scanf("%d",&n);
res=factorial(n);
printf("%d",res);
}


int factorial(int n)
   {
      int res;
      if(n==0)
          {
            res=1;
          }
       else
          {  
            res=n*factorial(n-1);
         }
  return res;
}

