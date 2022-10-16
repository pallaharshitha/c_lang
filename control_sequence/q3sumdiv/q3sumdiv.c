#include<stdio.h>
void main()
{
	int i,a,sum=0;
	printf("enter the value of a:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
	if(i%5==0)
	{
	 continue;
	}
	else
	{
	sum=sum+i;
	}
        }
	printf("sum of numbers =%d",sum);
}


