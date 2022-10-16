#include<stdio.h>
#include<string.h>
int reverse_str(char[50],int,int);
int main()
{
char a[40];
int size;
printf("\n enter a string:");
gets(a);
puts(a);
size=strlen(a);
printf("\n size=%d",size);
reverse_str(a,0,size-1);
printf("\n reversed string :");
puts(a);
return 0;
}
int reverse_str(char a[50],int n,int size)
{
char c;
c=a[n];
a[n]=a[size - n];
a[size-n]=c;
if(n==size/2)
{
return a;
}
return reverse_str(a,++n,size);
}
