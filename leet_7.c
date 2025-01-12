/*
Note: For the leet function we should write these two condition to get output for 1534236469 as 0;
>if(rev > 214748364 || (rev == 214748364 && x/10 >7)) return 0;
>if(rev < -214748364 || (rev == -214748364 && x/10 <-8)) return 0; 
write inbetween the digit and rev lines 😁.
*/

#include<stdio.h>

int main()
{
    int n,i=0,rev=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(n != 0)
    {
        int digit = n%10;
        rev = rev *10 +digit;
        n = n/10;
    }
    printf("num reverse: %d",rev);
    return 0;
}


//Use this function in the leet 

/*

int reverse(int x){
    int rev=0;
    
    while((x != 0))
    {
        int digit = x%10;
        if(rev > 214748364 || (rev == 214748364 && x/10 >7)) return 0;
        if(rev < -214748364 || (rev == -214748364 && x/10 <-8)) return 0;
        rev = rev *10 + digit;
        x = x/10;
    }
    return rev;
}

*/