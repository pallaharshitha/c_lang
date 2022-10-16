#include<stdio.h>
void fun(int a);
int d=50;
int main()
{
    auto int a=10;
    register int b;
    s();
    fun(a);
    printf("\nauto a%d",a);
    printf("\nregister b is%d",b);
    s();
    extern int d;
    printf("\nextern d:%d",d);
    return 0;
}

void fun(int a)
{
  a++;
  printf("\ninside function a value is%d",a);
}

