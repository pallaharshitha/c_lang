#include<stdio.h>
void main()
int fact(int)
{
  int n,r,x;
  printf("enter a number\n");
  scanf("%d",&n);
  printf("enter a number\n");
  scanf("%d",&r);
  x=fact(n)/fact(n-r);
  printf("value of %d P %d=%d\n",n,r,x);
}
  int fact(int n);
{
	int i,f=1;
	for (i=0;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
