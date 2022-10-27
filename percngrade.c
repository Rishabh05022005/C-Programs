//C program to enter student marks and find percentage and grade
#include<stdio.h>
int main()
{
	int a,b,c,d,e,perc;
	char grade;
	printf("input marks of five subjects:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	perc=(a+b+c+d+e)/5;
	while(perc>100)
	{
	
	    if(perc>100)
	    {
		printf("INVALID INPUT");
		break;
	    }
   }
	if(perc>=90)
	{
		grade='A';
	}
	else if(perc>=80)
	{
		grade='B';
	}
	else if(perc>=70)
	{
		grade='C';
	}
	else if(perc>=60)
	{
		grade='D';
	}
	else if(perc>=40)
	{
		grade='E';
	}
	else if(perc<40)
	{
		grade='F';
	}
	if(perc>=0 && perc<=100)
{
	printf("percentage: %d\ngrade: %c",perc,grade);
}
	getch();
	
	
	return  0;
}
