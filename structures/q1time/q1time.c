#include<stdio.h>

struct time
{
int hours,minutes,seconds;
};
void main()
{
struct time t;
printf("Enter the time in hrs,mins,secs:");
scanf("%d%d%d",&t.hours,&t.minutes,&t.seconds);
printf("The time is: %dhrs:%dmins:%dsec",t.hours,t.minutes,t.seconds);
}
