#include<stdio.h>
int main()
{
	float a,b,c,d,e,total,average,percentage;
	printf("Enter marks of five subjects:");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	average=total/5;
	percentage=(total/500)*100;
	printf("Total=%f \n Average=%f \n Percentage=%f",total,average,percentage);
	getch();
	
	
	return   0;
}
