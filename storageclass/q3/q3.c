#include<stdio.h>
int s(),a=20;
int main()
{
printf("\n static value s:%d",s());
printf("\nscope of static has life time:%d",s());
return 0;
}
int s()
{
static int s=10;
extern int a;
a+=s;
s++;
printf("\n extern value :%d",a);
return s;
}

