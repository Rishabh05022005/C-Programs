#include<stdio.h>
int main()
{
	float cel,fer;
	printf("Enter the temperature in Celcuius");
	scanf("%f",&cel);
	fer=(cel*1.8)+32;
	printf("Temperature in Farhenite=%f",fer);
	getch();
	
	return  0;
}
