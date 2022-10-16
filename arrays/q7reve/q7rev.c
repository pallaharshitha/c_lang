#include<stdio.h>
void main()
{
	int ori[5]={1,2,3,4,5};
	int cop[5];
	int i,c;
	c=4;
	for(i=0;i<5;i++)
	{
		cop[c]=ori[i];
		c--;
	}
	printf("ori to cop\n");
	for(i=0;i<5;i++)
	{
	printf("%2d %2d\n",ori[i],cop[i]);
	}
}

