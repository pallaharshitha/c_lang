#include<stdio.h>
void main()
{
     int arr1[]={1,2,3,4,5};
     int length=sizeof(arr1)/sizeof(arr1[0]);
     int arr2[length];
     for (int i=0;i<length;i++)
     {
	    arr2[i]=arr1[i];
     }
     printf("elements of original array:\n");
     for(int i=0;i<length;i++)
     {
	     printf("%d",arr1[i]);
     }
     printf("\n");
     printf("elemennts of new array:\n");
     for(int i=0;i<length;i++)
     {
	     printf("%d",arr2[i]);
}
}
