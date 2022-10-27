#include<stdio.h>
int main()
{
	char a;
	printf("enter a character:");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	{
		printf("Uppercase");
	}
	else
	{
		printf("LOWECASE");
	}
	
	return   0;
}
