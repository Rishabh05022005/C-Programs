#include<stdio.h>
int main()
{
	float centi,meter,kilo;
	printf("Enter the length in cm=");
	scanf("%f",&centi);
	meter=centi/100;
	kilo=centi/100000;
	printf("Length in m=%f",meter);
	printf("Length in km=%f",kilo);
	
	return  0;
}
