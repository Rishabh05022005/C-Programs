#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number: ");
	scanf("%d",&a);
	top:
	while(a!=0)
	{
		b=a%10;
		goto mid;
	}
	mid:
	while(1)
	{
		switch(b)
		{
			case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;	
		}
	    break;
	    a=a/10;
		goto top;
	}
	
	
	return   0;
}
