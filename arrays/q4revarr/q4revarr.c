#include<stdio.h>
void main()
{
	int a[5],i;
	printf(" enter the 5 integer numbers:\n");
       for(i=0;i<5;i++)
       scanf("%d",&a[i]);
	       printf(" array elements in reverse order are:\n");
       
       for(i=4;i>=0;i--)
       
	       printf("%d\n",a[i]);
       
}
