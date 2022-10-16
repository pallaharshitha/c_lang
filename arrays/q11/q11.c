#include<stdio.h>
void main()
{
	int arr1[50],arr2[50],size1,size2,i,j,merge[100];
	printf("enter the first arr1 size:");
	scanf("%d",&size1);
	printf("enter arr1 elements:");
	for (i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
		merge[i]=arr1[i];
	}
	j=i;
	printf("enter the second arr2 size:");
	scanf("%d",&size2);
	printf("enter arr2 elements:");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
		merge[j]=arr2[i];
		j++;
	}
	printf("\n the new array  is:\n");
	for(i=0;i<j;i++)
		printf("%d",merge[i]);

}
	

