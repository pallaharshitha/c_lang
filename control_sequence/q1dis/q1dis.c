#include<stdio.h>
void main()
{
int i,j;
printf("Enter the values of i,j");
scanf("%d %d",&i,&j);
if(i<20 && j<20)
printf("Both variables are not having 20");
else if(i<20 || j<=20)
printf("Atleast one variable is having 20");
else if(i<=40 && j<=40)
printf("Both are less than or equal to 40");
else
printf("Both are not less than equal to 40");
}

