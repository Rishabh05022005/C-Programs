//write a program in c to accept a letter from the user and check if its a upercase of lowercase or is it a numeral or is it a symbol
#include<stdio.h>
int main()
{
	unsigned char ch;
	printf("enter the character ");
	scanf("%c",&ch);
	if(ch>=48 && ch<=57)
	{
		printf("NUMERAL");
	}
	else if(ch>=65 && ch<=90)
	{
		printf("UPPERCASES");
	}
	else if(ch>=97 &&  ch<=122)
	{
		printf("lowecase");
	}
	else
	{
		printf("symbol");
	}
	
	
	
	
	return  0;
}
