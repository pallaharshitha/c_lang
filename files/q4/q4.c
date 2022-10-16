#include<stdio.h>
int  main()
{
char ch[20];
printf("Enter the file name:\n");
scanf("%s",ch);
FILE *fp;
fp=fopen("q4.c","r");
if(fp==NULL)
{
perror("error");
return -1;
}
while(fgets(ch,20,fp)!=NULL)
{
fputs(ch,stdout);
}
fclose(fp);
}
