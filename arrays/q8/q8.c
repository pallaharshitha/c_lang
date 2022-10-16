#include<stdio.h>
#define N 11
void main()
{
	int a[N],i,pos,num;
	printf("enter %d integer numbers\n",(N-1));
        for (i=0;i<(N-1);i++)
	scanf("%d",&a[i]);
	printf("enter the position of new num\n:");
	scanf("%d",&pos);
	if(pos<N)
	{
		printf("enter the new num to be inserted %d\n:",pos);
		scanf("%d",&num);
		for(i=N-1;i>pos;i--)
                 a[i]=a[i-1];
		a[pos]=num;
		printf("array after inserting%dat position %d\n",num,pos);
		for(i=0;i<N;i++)
			printf("%d\n",a[i]);
	}
	else
	{
		printf(" enter position within the array size\n");
	}
	printf("\n");
}
