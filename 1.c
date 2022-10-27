//Fibonacci Series
#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("input the value of n: ");
    scanf("%d",&n);
    a=0;
    b=1;
    c=1;
    while(a<=n)
    {
        printf("%d",a);
        a=b;
        b=c;
        c=a+b;

    
    }


    return  0;

}