#include<stdio.h>
void main()
{
	int a[25],i,n;
	float sum=0,avg=0;
	printf("enter the no of elements in an array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");

	{
          for(i=1;i<=n;i++)
          scanf("%d",&a[i]);
	}
	  for(i=1;i<=n;i++)
	{
	  sum=sum+a[i];
	  avg=sum/n;
	}
	  printf("\nsum of array:%f",sum);
	  printf("\navg of array:%f",avg);
	
}

