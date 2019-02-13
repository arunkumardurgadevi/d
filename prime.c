#include<stdio.h>
int main()
{
int i,n=11,f=0;
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
f=1;
break;
}
}
else
{
if(f==0)
printf("yes");
else
printf("no");
}
return 0;
}
