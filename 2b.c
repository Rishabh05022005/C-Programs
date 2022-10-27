#include<stdio.h>
int main()
{
    int age,pay,acc;
    float premium;
    char origin,type,condition;
    printf("Enter the age of the owner\n");
    printf("Enter the condition of car\n");
    printf("enter the time period between accidents\n");
    scanf("%d%c%c",&age,&condition);    
    if(age>=25)
    {
         if(origin='india')
         {
            if(condition='good')
            {
                premium=6;
                type='comprehensive';
                pay=0;
            }
            else if(condition='not good')
            {
                premium=7;
                type='comprehensive';
                pay=100;
            }
         }
         if(origin='not india');
        {
               if(condition='good')
            {
                premium=6;
                type='comprehensive';
                pay=100;
            }
            else if(condition='not good')
            {
                premium=7;
                type='3rd party';
                pay=0;
            }
        }
         
    }
    if(age<25)
    {
       
         if(origin='india')
         {
            if(condition='good')
            {
                premium=6;
                type='comprehensive';
                pay=100;
            }
            else if(condition='not good')
            {
                printf("go jail bitch");
            }
         }
         if(origin='not india');
        {
               if(condition='good')
            {
                premium=8;
                type='comprehensive';
                pay=100;
            }
            else if(condition='not good')
            {
                printf(" oops! insurance cant be claimed ");
            } 
        }
    }
    printf("type of insurance:%c ",type);
    printf(" amount of premium %d",premium);
    printf(" excess payable amount %d",pay);
    getch();


    return  0;
}
