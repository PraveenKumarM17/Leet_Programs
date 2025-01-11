#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int a[n],b[n],term;

    printf("Enter the array elements: ");
    for (int i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the term: ");
    scanf("%d",&term);

    int j=0,i=0;
    for (i=0; i<n ; i++)
    {
        for(j=i+1 ; j<n; j++) // start from the 2nd value  
        {
            if(a[i]+a[j] == term)
            {
                printf("[%d,%d]",i,j);
                exit(0);
            }
        }
        
    }
}

/*
About loop:
        > keep the first loop constant and run the second loop from the current position + 1 
        > then check the condition using a if loop and print the value
*/




//Use this function in the leet Problem 13 (Easy)

/*
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i=0; i< numsSize; i++)
    {
        for (int j=i + 1; j< numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                int *result = (int *)malloc(2*sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
*/