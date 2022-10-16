#include<stdio.h>
#define DEBUG	
void func1()
		{
			printf("in function 1");
                }
void fun2()
		{
			printf("in function 2");
		}
void fun3()
		{
			printf("in function3");
		}
int main()
{
#ifdef DEBUG	
          func1();
#else
	  func3();
#endif 
	 return 0;
}
