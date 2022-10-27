#include<stdio.h>
int main()
{
	int a;
	printf("input number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
   }
   else if(a==0)
   {
   	printf("zero");
   }
   else
   {
   	printf("NEGATIVE");

   }
   getch();
   
   return  0;
}
