#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,days,month,year,final;
    printf("enter the start and end  date int DD/MM/YY");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    days=d-a;
    month=e-b;
    year=f-c;
    if(days<0)
    {
        days=-1*days;
    }
     if(month<0)
    {
        month=-1*month;
    }
     if(year)
     {
        year=-1*year;
    }
    final=days+(month * 30)+(year*365);
    printf("no of days=%d",final);

 return 0;


}