#include<stdio.h>
void main()
{
	int a,b;
        int sum,sub,mul,mod;
	float div;
	printf("enter the values of a,b:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=(float)a/b;
	mod=a%b;
	printf("\n sum=%d",a+b);
	printf("\n sub=%d",a-b);
	printf("\n mul=%d",a*b);
	printf("\n div=%f",(float)a/b);
	printf("\n mod=%d",a%b);
}
