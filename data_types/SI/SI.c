#include<stdio.h>
void main()
{
	float p,t,r,SI;
	printf("enter the principle value:");
	scanf("%f",&p);
	printf("enter the time value:");
	scanf("%f",&t);
	printf("enter the rate value:");
	scanf("%f",&r);
	SI=p*t*r/100;
	printf("\n SI is %.2f",SI);
}

