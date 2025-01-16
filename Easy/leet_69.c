#include<stdio.h>
#include<math.h>

int squareroot(int x)
{
    return sqrt(x);
}

int main()
{
    int x,a;
    printf("Enter the x: ");
    scanf("%d",&x);
    a = squareroot(x);
    printf("The square root of %d is %d.",x,a);
    return 0;
}



//Use this function in the leet Problem 69 (Easy)

/*

int squareroot(int x)
{
    return sqrt(x);
}

*/