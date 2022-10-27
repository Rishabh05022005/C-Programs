#include<stdio.h>
int main()
{
	char a='A';
	char b='a';
	while(a<=90 && b<=122)
	{
		printf("%c%c ",a,b);
		a++;
		b++;
	}
	
	
	return   0;
}
