#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,a1[20],a2[20],res[20],i,k=0;

    printf("Enter the array 1: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
    
    printf("Enter the array 2: ");
    for (i=0;i<3;i++)
    {
        scanf("%d",&a2[i]);
    }

    printf("Enter the n1: ");
    scanf("%d",&n1);
    
    printf("Enter the n2: ");
    scanf("%d",&n2);

    for (i=0;i<n1;i++)
    {
        res[k] = a1[i];
        k++;
    }
 
    for (i=0;i<n2;i++)
    {
        res[k] = a2[i];
        k++;
    }

    for(i=0;i<n1+n2-1;i++)
    {
        for (int j=0;j<n1+n2-i-1;j++)
        {
            if ( res[j] > res[j+1])
            {
                int temp = res[j];
                res[j] = res[j+1];
                res[j+1] = temp;  
            }
        }
    }

    printf("the array elements are: ");
    for (i=0;i<n1+n2;i++)
    {
        printf("%d  ",res[i]);
    }
return 0;
}



//Use this function in the leet Problem 88 (Easy)


/*

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

*/