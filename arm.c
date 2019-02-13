#include<stdio.h>
int main()
{
int n,original,rem,result=0;
printf("enter a three digit integer");
scanf("%d",&n);
if(n<=100000)
{
original=n;
while(origianl!=0)
{
rem=original%10;
result+=rem*rem*rem;
original/=10;
}
if(result==n)
{
printf("yes");
}
else
{
printf("no");
}
}
else
{
printf("the value of n must be below 100000");
}
return 0;
}
