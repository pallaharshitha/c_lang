#include<stdio.h>
int factorial(int x);
int find_nCr(int x,int y);
int find_nPr(int x, int y);
int main() {
int n,r;
int ncr,npr;
printf("Enter given n and r:\n");
scanf("%d%d",&n,&r);
ncr=find_nCr(n,r);
npr=find_nPr(n,r);
printf("%dC%d=%d\n",n,r,ncr);
printf("%dP%d=%d\n",n,r,npr);
return 0;}
int find_nCr(int x,int y)
{
int res;
res=factorial(x)/(factorial(y)*factorial(x-y));
return res;
}
int find_nPr(int x,int y)
{
int res;
res=factorial(x)/factorial(x-y);
return res;
}
int factorial(int n)
{
if(n==0)
{
return 1;
}  else {
return (n*factorial(n-1));
}}
