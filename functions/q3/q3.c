#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int a,b;
	printf("enter two integers for a and b\n");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("after swap a=%d and b=%d",a,b);
	return 0;
}
  void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

