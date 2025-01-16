#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array1[20], array2[20];
    int res[20] = {0};
    int n1, n2, k = 0;

    printf("Enter the size of array1: ");
    scanf("%d", &n1);
    printf("Enter the size of array2: ");
    scanf("%d", &n2);

    printf("Enter elements of array1: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of array2: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (array1[i] == array2[j])
            {
                int isDuplicate = 0;
                for (int m = 0; m < k; m++)
                {
                    if (res[m] == array2[j])
                    {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate)
                {
                    res[k] = array2[j];
                    k++;
                }
            }
        }
    }

    printf("Common elements are: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}



//Use this function in the leet Problem 349 (Easy)

/*

#include <stdlib.h>

int* intersection(int* array1, int n1, int* array2, int n2, int* returnSize) {
    int* res = (int*)malloc(sizeof(int) * (n1 < n2 ? n1 : n2)); // Allocate maximum possible size
    int k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (array1[i] == array2[j]) {
                int isDuplicate = 0;
                for (int m = 0; m < k; m++) {
                    if (res[m] == array2[j]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    res[k] = array2[j];
                    k++;
                }
            }
        }
    }

    *returnSize = k;
    return res;
}


*/