#include<stdio.h>
#define MAX_SIZE 100
void main()
{
	int arr[MAX_SIZE];
	int size,i,tosearch,found;
	printf("enter size of array:");
	scanf("%d",&size);
	printf("enter the elements in array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n enter the element tosearch:");
	scanf("%d",&tosearch);
	found=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==tosearch)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("\n %d is found at position %d",tosearch,i+1);
	}
	else
	{
		printf("\n %d is not found in the array",tosearch);
	}
}
