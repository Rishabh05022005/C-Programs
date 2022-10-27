#include<stdio.h>
int main()
{
	int one,two,three;
   printf("ENTER FIRST ANGLE:");
   printf("\n ENTER SECOND ANGLE:");
   scanf("%d%d",&one,&two);
   three=180-(one+two);
   printf("Third angle is:%d",three);
   getch();
   
   return  0;
}
