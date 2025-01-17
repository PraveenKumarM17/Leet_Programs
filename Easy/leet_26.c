#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[20],op[20];
    int i,n,k=0;

    printf("Enter the array size: ");
    scanf("%d",&n);

    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for (i=0;i<n;i++)
    {
        if (array[i] != array[i+1])
        {
            op[k] = array[i];
            k++;
        }
    }

    for (i=0;i<k;i++)
    {
        printf("%d  ",op[i]);
    }
}



//Use this function in the leet Problem 26 (Easy)

/*

int removeDuplicates(int nums[], int n) {

    int k = 0;

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[k]) {
            k++;
            nums[k] = nums[i];
        }
    }

    return k + 1; 
}

*/