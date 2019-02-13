#include<stdio.h>
#include<string.h>
int main()
{
char arr[100];
printf("enter a string to reverse\n");
gets(arr);
strrev(arr);
printf(arr);
return 0;
}
