#include<stdio.h>
void printnum();
void printnum2();

void printnum2()
{
auto int num=0;
printf("%d\n",++num);
}
int main()
{
printnum2();
printnum2();

printnum();
printnum();
return 0;
}
void printnum()
{
static int num=0;
printf("\n %d",++num);
}
