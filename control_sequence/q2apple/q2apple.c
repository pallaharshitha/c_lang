#include<stdio.h>
void main()
{
	char a;
	printf("enter the letter : ");
	scanf("%c",&a);
	if (a=='A'|| a=='a')
	printf("A for Apple");
	else if(a=='B'|| a=='b')
	printf("B for Bat");
	else if(a=='D'|| a=='d')
	printf("D for Dog");
	else if(a=='F'|| a=='f')
	printf("F for Fan");
	else
	printf("Character is not in the range");
}
