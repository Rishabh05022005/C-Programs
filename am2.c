#include<stdio.h>
int main()
{
	int len;
	
	printf("Input size:- ");
	scanf("%d",&len);
	
	int array[len],i=0;
	
	printf("\n Input elemets:- ");
	
	for(i=0;i<len;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("\n Output:- ");
	
	for(i=0;i<len;i++)
	{   
	    if(array[i]>0)
	   {
		printf("%d,",array[i]);
       }
	    else
	   {
		continue;
	   }
		
	}
	
	printf("\b");
	
	
	return  0;
	
}
	
	
	
	

