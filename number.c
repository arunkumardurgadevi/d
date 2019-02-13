#include<stdio.h>
#include<string .h>
#include<stdlib.h>
#include<ctype.h>
#define MAXINPUT 100
int main()
{
char input[MAXINPUT]= "";
int length,i;
scanf("%d",&input);
length=strlen(input);
for(i=0;i<length;i++)
if(!isdigit(input[i]))
{
printf("no");
exit(1);
}
printf("yes");
return 0;
}
