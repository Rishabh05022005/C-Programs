#include<stdio.h>
 int main ()
     {
     	
     	 int mi , vivo ,  samsung;
     	 int  max_price ;
     	 
     	printf("\n enter  price of  mi phone ");
     	scanf("%d", &mi);
     	
     	printf("\n enter  price of  vivo phone ");
     	scanf("%d", &vivo);
			   
     	printf("\n enter  price of  samsung phone ");
     	scanf("%d", &samsung);
    
    if(mi>vivo)
      {
	      max_price=mi;
	      
	  }
	  else if(vivo>samsung)
	    {
	  	max_price=vivo;
	    }
	  else if(samsung>mi)
	    {
	  	max_price=samsung;
	    }
	    else
	    {
	    	printf("all have same price=%d",mi);
		}
     	 printf("\n max_price = %d",max_price);
           return 0;
       }
