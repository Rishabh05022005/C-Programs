#include<stdio.h>
 int main()       
     {	
      // type conversion
      // if we try to assign fractional value
      // to non fraction type variable
      //  c automatically convert  fraction value
      // to non fraction value
      
      // while doing same c will discard precision
      // part of fractional value
      
      //  above said in c is better known as
      // automatic type conversion
      // implicit type conversion
      
      int x = 3.5 ;
      int y = 1.2 ;
       
       printf( "\n  x = %d ",x);
       printf( "\n  y = %d ",y);
       
       
       return    0;
    }
/*
         %   -- modulus operator
                used to find out remainder of division
                operation
                
                and this operator is not allowed
                on fraction type values
                
         all bitwise operators of c are not
		 allowed on  fraction type values
		 */       
          
          
     
     
       
