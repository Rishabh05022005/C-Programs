    //palindrome numbers: a number that is same after reverse
    #include<stdio.h>
    int main()
    {
        int a,rem,ori;
        int rev=0;
        printf("enter the number: ");
        scanf("%d",&a);
        ori=a;
        while(a!=0)
        {
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }

        printf("%d\n",rev);

        if(rev==ori)
        {
            printf("yes");
        
        }
        else
        {
           printf("not a palindrome number");
        }




        return  0;
        
    }