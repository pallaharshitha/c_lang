#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the real parts of first complex number:");
	scanf("%d%d",&a,&b);
	printf("enter the imaginary parts of second complex number:");
	scanf("%d%d",&c,&d);
	printf("\n addition of the two complex numbers= %d+i%d",(a+b),(c+d));
        printf("\n substraction of the two complex numbers= %d-i%d",(a-b),(c-d));
	printf("\n multiplication of the two complex numbers= %d*i%d",(a*b),(c*d));
}
