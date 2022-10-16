#include<stdio.h>
void main()
{
	int a,b,max;
	printf("enter the values of a,b:");
	scanf("%d%d",&a,&b);
	max=a>b ? a:b;
	printf("maximun of the num %d and %d is %d \n",a,b,max);
}
