#include<stdio.h>
void itob();
void itoh();
int main()
{
 int n;
  printf("enter number:");
  scanf("%d",&n);
  itob(n);
  itoh(n);
}
void itob(int n)
{
  int a[20],i,j=0,b[20];
for(i=0;n>0;i++)
{
a[i] = n%2;
n=n/2;
}
for (i=i-1;i>=0;i--)
{
b[j]=a[i];
j++;
}
printf("\n binary vaue is:");
for(i=0;i<j;i++)
{
printf("%d",b[i]);
}
}
void itoh(int n)
{
printf("\nhexa decimal value is:%x",n);
}
