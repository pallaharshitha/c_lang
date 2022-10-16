#include<stdio.h>
#define mi 2.54
#define fi 12
void main()
{
 float cm;
 int inch,feet;
 printf("Enter the centimeter:");
 scanf("%f",&cm);
 inch=(int)cm/mi;
 feet=inch/fi;
 printf("\n%f centimeter is %d feet \t %dinches",cm,feet,inch);
}
