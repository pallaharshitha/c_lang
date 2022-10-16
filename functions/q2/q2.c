#include<stdio.h>
int factorial(n);
int main()
{
	 int n,total;
	 printf("enter a positive integer\n");
	 scanf("%d",&n);
	 total=factorial(n);
	 printf("factorial of %d=%d",n,total);
	 return 0;
}
 int factorial(int n)
{
	if(n>=1)
	{
		return n*factorial(n-1);
	}
	else
	{
		return 1;
	}
}

