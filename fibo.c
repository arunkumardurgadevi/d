#include<stdio.h>
int main()
{
int t1=1,t2=1,next=0,n;
printf("enter a positive integer");
scanf("%d",&n);
printf("%d,%d",t1,t2);
next=t1+t2;
while(next<=n);
{
printf("%d",next);
t1=t2;
t2=next;
next=t1+t2;
}
return 0;
}
