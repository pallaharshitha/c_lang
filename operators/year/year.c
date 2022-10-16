#include<stdio.h>
void main()
{
   unsigned int d1,d2,m1,m2,y1,y2;
   unsigned int d,m,y,f;
   printf("enter the first date:");
   scanf("%d %d %d",&d1,&m1,&y1);
   printf("enter the second date:");
   scanf("%d %d %d",&d2,&m2,&y2);
   d=d1-d2;
   m=m1-m2;
   y=y1-y2;
   f= ((366*(y))+(y/4)-(y/100)+(y/400)+d+(((153*m)+8)/5));
   printf("the diff between the dates is: %d",f);
}

