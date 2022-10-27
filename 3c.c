#include<stdio.h>
#include<math.h>
int main()
{
    int r,x,y,total;
    printf("enter the radius");
    scanf("%d",&r);
    total=0;
    for(x=0;x<=r;x++)
    {
        for(y=0;y<=r;y++)
        {
            if((x*x)+(y*y)<=(r*r))
            {
               total++;
            }
        }
    }
    printf("\n%d",total);
    
return 0;
}