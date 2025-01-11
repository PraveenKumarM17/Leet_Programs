#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int array[20];
    float res;
    int a[] = {1,2};
    int b[] = {3,4,1};
    int l1 = sizeof(a)/sizeof(a[0]);//or divide by 4 , because we get {length of array * sizeof(int) = arraylenght*4} so,divide by 4.
    int l2 = sizeof(b)/sizeof(b[0]);
    printf("%d",l1);
    printf("\t%d\n",l2);

    printf("Array 1: ");
    for(i=0;i<l1;i++)
    {
        printf("%d   ",a[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for(i=0;i<l2;i++)
    {
        printf("%d   ",b[i]);
    }
    printf("\n");

    for(i=0;i<l1;i++)
    {
        array[i] = a[i];
    }
    for(i=l1,j=0;i<l1+l2,j<l2;i++,j++)  //continue the loop from the l1 to l1+l2 so that 
    //the value of array2 can be inserted  into array after inserting tht array1.
    {
        array[i] = b[j];
    }
    printf("Combined array is: ");

    for(i=0;i<l1+l2;i++)
    {
        printf("%d   ",array[i]);
    }

//use the sorting algorithm to sort the array to find the median.
    for(i=0;i<l1+l2 - 1;i++)
    {
        for (j=0;j<l1+l2 - i -1;j++)
        {
            if (array[j+1] < array[j])
                {
                    int temp = array[j+1];
                    array[j+1] = array[j];
                    array[j] = temp;
                }
        }
    }

    printf("\nAfter sort: ");
    for (i=0;i<l1+l2;i++)
    {
        printf("%d   ",array[i]);
    }

    int l = l1+l2;

//check condition and assign the result into res.
    if(l%2==0)  
    {
        res = (array[l/2]+array[l/2-1])/2.0;
        printf("\nMedian: %f",res);
    }
    else
    {
        res = array[l/2];
        printf("\nMedian: %f",res);
    }
    return 0;
}



//Use this function in the leet 


/*

#include <stdlib.h>

double findMedianSortedArrays(int a[], int l1, int b[], int l2) {
    int *array = (int *)malloc((l1 + l2) * sizeof(int));    //use malloc or else it will end up with some error
    int i, j, k;
    double res;

    for (i = 0, j = 0, k = 0; i < l1 && j < l2;) 
    {
        if (a[i] < b[j]) 
        {
            array[k++] = a[i++];
        } 
        else 
        {
            array[k++] = b[j++];
        }
    }

    for (; i < l1; i++) 
    {
        array[k++] = a[i];
    }

    for (; j < l2; j++)
    {
        array[k++] = b[j];
    }

    int l = l1 + l2;

    if (l % 2 == 0) 
    {
        res = (array[l / 2] + array[l / 2 - 1]) / 2.0;
    }
    else 
    {
        res = array[l / 2];
    }

    free(array);    //after performing the work free the elements in the array.
    return res;
}


*/