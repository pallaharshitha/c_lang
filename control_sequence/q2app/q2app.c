#include<stdio.h>
void main()
{
	char a;
	printf("enter the letter:");
	scanf("%c",&a);
	switch(a)
	{
		case 'A':
		printf("A for Apple");
		break;
		case 'a' :
		printf("A for Apple");
		break;
		case 'B':
		printf("B for Bat");
		break;
		case 'b':
		printf("b for Bat");
		break;
		case 'D':
		printf("D for Dog");
		break;
		case 'd':
		printf("D for Dog");
		break;
		case 'F':
		printf("F for Fan");
		break;
		case 'f':
		printf("F for Fan");
		break;
		default:
		printf("character is not in the range");
		break;
	}
}
