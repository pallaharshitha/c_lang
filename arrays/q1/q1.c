#include<stdio.h>
int main()
{
  char name[] = {'H','A','R','S','H','I','M','E','G','H','A'};
  int count=0;
  int length = sizeof(name);
  printf("My Name:");
for(int i=0;i<length;i++)
{
  printf("%c",name[i]);
  }
printf("\n size of array:%ld",sizeof(name));
for(int j=0;j<length;j++)
{
  count ++;
 }
 printf("\n length of my name :%d",count);
return 0;
}

