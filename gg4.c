#include<stdio.h>
 int main()       
     {
      
      int  x = 5 ;
      long long y = 2 ;
       
       printf( "\n  %u "  ,  sizeof(x));
         
       printf( "\n  %u "  ,  sizeof(y));
       printf( "\n  %u "  ,  sizeof(x+y));
         
       printf("\n   %u " , sizeof( 34 ));
         
       printf("\n   %u " , sizeof( 3.4 ));
       printf("\n   %u " , sizeof( 3.4F ));
       
       return    0;
    }
