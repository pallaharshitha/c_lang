#include<stdio.h>
void main()
{
	int num,pos;
	printf("enter any num");
       scanf("%d",&num);
       printf("enter pos");
       scanf("%d",&pos);
    printf("before num=%d\n",num);
     num=num &~(1<<pos);
     printf("after num=%d\n",num);
}
