#include<stdio.h>
void main()
{
	int num,n,newnum;
	printf("enter any no");
	scanf("%d",&num);
	printf("enter nth bit to set:");
	scanf("%d",&num);
	newnum=(1<<n)|num;
	printf("bit set successfully\n");
	printf("no before setting %d bit:%d\n",n,num);
	printf("no after setting %d bit:%d\n",n,newnum);
}
