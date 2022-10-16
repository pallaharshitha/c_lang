#include<stdio.h>
int large(int *value,int n,int a);
int main()
{
  int n;
  int arr[n];
  printf("how many numbers:/n");
  scanf("%d",&n);
  printf("element");
  for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[n]);
   }
  int  largest=arr[0];
  largest=large(arr,n-1,largest);
  printf("largest number:%d",largest);
 return 0;
}
int large(int*value,int n,int a)
{
    if(n<a)
    {
     return a;
    }
    else if(value[n]>a)
    {
      a=value[n];
      return large(value,n-1,a);
    }
}
