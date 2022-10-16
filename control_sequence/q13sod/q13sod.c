#include<stdio.h>
void main()
{
	int a,b,e;
	printf("enter the number a=");
	scanf("%d",&e);
	if(0<=e&&e<=9)
	{
		printf("%d",e);
	}
	else if(10<e && e<99)
	{
		a=e%10;
		e=e/10;
		b=e%10;
		printf("sum=%d",a+b);
	}
}
