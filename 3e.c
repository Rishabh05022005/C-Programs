#include<stdio.h>
#include<math.h>
int main()
{
    int num,a1,a2,b1,b2,i,j,s1,s2;
    int z=1;
    //1 4 9 16 25 36 49 64 81 
     printf("enter the no to check the desired criteria: ");
     scanf("%d",&num);
        b2=num%10;

        b1=num/10;
        b1=b1%10;

        a2=num/100;
        a2=a2%10;

        a1=num/1000;
        a1=a1%10;

        i=10*a1+a2;
        j=10*b1+b2;

        for(z=1;z<=9;z++)
        {
            if(i==z*z)
            {
                s1=1;
            }
            else 
            {
                s1=0;
            }
        }

        for(z=1;z<=9;z++)
        {
            if(j==z*z)
            {
                s2=1;
            }
            else 
            {
                s2=0;
            }
        }
    
        if(s1==1 && s2==1)
        {
            printf("desired number is %d",num);
        }
        else
        {
           printf("criteria dint match");
        }

return 0;



}