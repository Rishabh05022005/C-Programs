#include<stdio.h>
int main()
{
	int arr[10]={10, 20, 10, 1, 100, 10, 2, 1, 5, 10};
	int arr2[10];
	int arr3[10];
	int i=0,j;
	
	for(i=0;i<10;i++)
	{
		arr2[i]=arr[i];
	}


	i=0;

	
	top: 
	
	for(i;i<10;i++)
	{
	    for(j=0;j<10;j++)
	    {
	    	if(arr[i]!=arr2[j])
	    	{
	    		
			}
			else
			{
				arr3[i]=arr2[j];
				goto top;
			}
		}
	}
	
	
		for(i=0;i<10;i++)
	{
		printf("%d,",arr3[i]);
	}
	
	
	

}
