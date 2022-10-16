#include<stdio.h>
#define fact(n){\
	for(int i=1;i<=n;i++)\
	{\
		     fact=fact*i;\
	}\
	printf("\nfactorial of %dis %d",n,fact);\
}

void main()
{
	int n,fact=1;
	printf("\n enter a num:");
	scanf("%d",&n);
		fact(n);

}

