#include<stdio.h>
void main()
{
	int num,num1,rem,res=0;
	printf("enter the value :");
	scanf("%d",&num1);
	num=num1;
	while (num!=0)
	{
		rem=num%10;
		res+=rem*rem*rem;
		num /=10;
	}
	if(res==num1)
	printf("the given num is arm %d",num1);
	else
        printf("the given num is not arm %d",num1);
}
