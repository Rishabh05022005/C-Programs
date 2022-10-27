#include<stdio.h>
int main()
{
	int days,year,week,day,left,left2;
	printf("Enter days:");
	scanf("%d",&days);
	year=days/365;
	left=days%365;
	week=left/7;
	left2=left%7;
	day=left2;
	printf("%d days=%d years,%d weeks,%d days",days,year,week,day);
	getch();
	
	
	return  0;
}
