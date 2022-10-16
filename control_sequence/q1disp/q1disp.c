#include<stdio.h>
void main()
{
    int i,j;
    printf("enter the values of i,j");
    scanf("%d%d",&i,&j);
    (i>40&&j>40)?printf("both are not less than equal to 40"):
	    (((20<i)||(20<j))?printf("both are less than equal to 40"):
	     ((i==20||j==20))?printf("atleast one variable is having 20"):
	     printf("both variables are not having 20"));
}
