#include<stdio.h>
#include<math.h>
int main()
{
	float a,circumference,area;
	printf("enter the radius");
	scanf("%f",&a);
	circumference=2*3.14*a;
	area=3.14*(a*a);
	printf("circum=%f and area-%f",circumference,area);
	
	
	return  0;
	
}
