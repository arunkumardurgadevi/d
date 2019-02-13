#include<stdio.h>
using namespace std;
unsigned int factorial(unsigned int n)
{
if(n==0)
return 1;
return n*factorial(n-1);
}
int main
{
int num=5;
cout<<num<<factorial(num)<<endl;
return 0;
}
