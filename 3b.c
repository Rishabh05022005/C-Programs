/*Super-Duper Micros currently sells 100 Super-Dupers per 
month at a profit of Rs. 500/- per Super-Duper. They have a 
fixed operating cost of Rs 10,000/- that does not depend on the 
volume of sales. They currently spend Rs 1000/- per month on 
advertising. A marketing consultant advised them that if they 
double the amount spent on advertising, sales will increase by 
20 %. Write a program that begins with the company's current 
status, and successively doubles the amount spent on advertising until the net profit begins to decline. Have the program print 
the number of Super-Duper sales, the advertising budget, and 
the net profit just before the profit begins to decline */

#include<stdio.h>
int main()
{
    int sales,ads,profit,cost;
    sales=100;
    printf("current sales=%d",sales);
    cost=10000;
    printf("current operation cost=%d",cost);
    ads=1000;
    printf("current add budget=%d",ads);
    profit=500*100;
    printf("current profit=%d",profit);
    for(ads;profit>=profit;ads*2)
    {
        sales=sales+(sales*20)/100;
        profit=500*sales;

    }
    printf("net profit=%d",profit);
return 0;
}














    