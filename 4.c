//program to find factorial of a number
#include<stdio.h>
int main()
{
    long long  int n,result;
    long long int i=1;
    printf("enter the number: ");
    scanf("%lld",&n);
    result=n;

    for(i;i<n;i++)
    {
       result=result*i;
    }
    printf("Factorial is: %lld",result);


    return 0;
}