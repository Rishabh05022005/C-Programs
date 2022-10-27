#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    b=a/10;
    if(b==0)
    {
        printf(" 1 digit");
    }
    else if(b>=1 && b<10)
    {
        printf(" 2 digit");
    }
    else if(b>=10 && b<100)
    {
        printf(" 3 digit");
    }
    else if(b>=100 && b<1000)
    {
        printf("4 digit");
    }
    else
    {
        printf("5 digit or more");
    }



    return 0;
    

}