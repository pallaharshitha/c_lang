#include<stdio.h>
#define INT_SIZE sizeof(int) 
#define INT_BITS INT_SIZE * 8 - 1
int rotateRight(int num,unsigned int rotation);
int main()
{
int num;
unsigned int rotation;
printf("enter a number:");
scanf("%d",&num);
printf("Enter a number of rotation:");
scanf("%u",&rotation);
printf("%d right rotated %u times =%d\n",num,rotation,rotateRight(num,rotation));
return 0;
}

int rotateRight(int num,unsigned int rotation)
{

rotation %= INT_BITS;
while(rotation--)

num =((num >> 1) & (~(1<< INT_BITS))|((num & 1) << INT_BITS));


return num;
}
