#include<stdio.h>
void fun1()
{
	extern int x;
	printf("\nExtern data type of value we call form the global of main file and creat header file=%d",x);
}
