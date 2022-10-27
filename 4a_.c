#include<stdio.h>
int main()
{
	int n1,n2,i,num,s;
	printf("enter the number : ");
	scanf("%d",&n1);
	
	n2=n1;
	
	do
	{
		num++;
		n2=n2/10;
	}while(n2!=0);
	printf("%d",num);
	for(i=0;i<=num;i++)
	{
		s=n1%10;
		n1=n1/10;
		switch(s)
		{
			case 0 :
               printf ("ZERO");
              break;
case 1 :
printf ("ONE");
break;
case 2 :
printf("TWO");
break;
case 3 :
printf ("THREE");
break;
case 4:
printf ("FOUR");
break;
case 5 :
printf ("FIVE");
break;
case 6:
printf ("SIX");
break ;
case 7:
printf ("SEVEN");
break;
case 8 :
printf ("EIGHT");
break;
case 9 :
printf ("NINE");
break; 

		}
		
	}
	
    return  0;	
}
