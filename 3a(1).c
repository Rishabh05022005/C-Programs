#include<stdio.h>
int main()
{
    int r,w,day,temp1,count;
    float a,b,c,d;
    a=0.01;
    b=0.005;
    c=0.00001;
    d=0.01;
    r=10000;
    w=1000;
    count=1;
    again:
    day=1;
    for(day;day<=25;day++)
    {
        temp1=r;
        r=(1+a)*r-c*r*w;
        w=(1-b)*w+c*d*temp1*w;
        if(day==25)
        {
		
        printf("\npopulation after next 25 days= %5d %5d ",r,w);
        
       }
   
}
if(count<40)
{

    count++;
            goto again;
            
            
        }
        printf("\n-------------------------------------------------------------------------------");
        
        printf("\n population after 1000 days will be \n Rabbit:- %5d \n Wolves:- %5d ",r,w);
        
         printf("\n-------------------------------------------------------------------------------");

    return 0;
}  
