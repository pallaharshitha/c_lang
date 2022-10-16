#include<stdio.h>
void main()
{
unsigned int n;
printf("Enter the integer:\n");
scanf("%d",&n);
int count=0;
while(n!=0)
{
if(n & 1 == 1)

count++;

n=n>>1;
}
printf("no:of bits those are 1 in its binary representation: %d \n",count);


}
