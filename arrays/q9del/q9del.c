#include<stdio.h>
void main()
{
	int arr[50],pos,i,n;
	printf("enter the num of elements in an array:\n");
	scanf("%d",&n);
	printf("enter the elements %d\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the location where to delete:\n");
	scanf("%d",&pos);
	if(pos>=n+1)
	printf("deletion not posible\n");
	else
	{
	for(i=pos-1;i<n-1;i++)
		arr[i]=arr[i+1];
	printf("resultant arr\n");
	for(i=0;i<n-1;i++)
		printf("%d\n",arr[i]);
	}
}


