#include<stdio.h>
#include<stdlib.h>

int main()
{
    int nums1[] = {1,2,2,2,5,6,7};
    int nums2[] = {2,2,5,7};
    int n1 = sizeof(nums1)/sizeof(nums1[0]);
    int n2 = sizeof(nums2)/sizeof(nums2[0]);
    int arr[20], k = 0;
    int i, j;

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (nums1[i] == nums2[j]) {
                arr[k] = nums2[j];
                k++;
                break; // To avoid duplicate entries
            }
        }
    }

    printf("Intersection: ");
    for (i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


////Use this function in the leet Problem 350 (Easy)
// Time complexity: O(n^2)
// Space complexity: O(n)

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/* int* intersect(int* nums1, int n1, int* nums2, int n2, int* returnSize) {
    int *arr = (int *)malloc(n1*sizeof(int));
    int k=0,i,j;

    for (i=0;i<n1;i++){
        for (j=0;j<n2;j++){
            if (nums1[i] == nums2[j]){
                arr[k] = nums2[j];
                nums2[j] = -1;
                k++;
                break;
            }
        }
    }

    *returnSize = k;
    return arr;

} */