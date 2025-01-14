#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[20],b[20],n,i,val,cnt;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d",&val);

    for(i=0;i<n;i++)
    {
        if(a[i]!=val)
        {
            b[i] = a[i];
            printf("%d\n",b[i]);
            cnt++;
        }
    }
    printf("\n%d",cnt);
    return 0;
}



//Use this function in the leet 

/*

int removeElement(int* nums, int numsSize, int val) {
    int i, j = 0;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

*/