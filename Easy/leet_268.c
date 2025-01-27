#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[] = {9,6,4,2,3,5,7,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum1 = 0;
    int sum2 = 0;

    for (int i=0; i<n; i++)
    {
        sum1 += arr[i];
    }
    for (int i=1; i<=n; i++)
    {
        sum2 += i;
    }

    printf("Missing number is: %d\n", sum2-sum1);
    return 0;
}


//Use this function in the leet Problem 268 (Easy)
// Time complexity: O(n)
// Space complexity: O(1)


/* 
int missingNumber(int* nums, int n) {
    int i,sum1 = 0,sum2 = 0;

    for (i=0;i<n;i++)
    {
        sum1 = sum1 + nums[i];
    }
    for (i=1;i<=n;i++)
    {
        sum2 = sum2 + i;
    }
    return sum2-sum1;
}
*/