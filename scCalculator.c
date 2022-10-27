//C program to create calculator using switch case and functions
#include<stdio.h>
int main()
{
    float a,b;
    char c;
    float ans;
    printf("enter two number for +/-/*//");
    scanf("%f%d%c",&a,&c,&b);
    switch(c)
    {
        case '+':
        ans=a+b;
        break;

        case '-':
        ans=a-b;
        break;

        case '/':
        ans=a/b;
        break;

        case '*':
        ans=a*b;
        break;

        default:
        printf("invalid operation");

    }

    printf("%f %c %f = %f",a,c,b,ans);



    return  0;
}
