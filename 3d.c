//t i + j + k = 1 and i < j < k < I.
#include<stdio.h>
int main()
{
    int a,i,j,k,l,test;
    int n1;
    int num=1;
    for(;num<=1000;num++)
    {
     
                    
        l=num%10;

        k=num/10;
        k=k%10;

        j=num/100;
        j=j%10;

        i=num/1000;
        i=i%10;

        if(i+j+k==l && i<j<k<l)
        {
             test=1;
        }
        else
        {
            test=0;
        }

    if(test==1)
    {
        n1=num;
        printf("the desire value is %d\n",n1);
    }
    

    }

return 0;
    
}