#include<stdio.h>

int main()
{
    int num,i;

    printf("Program to convert Natural number to Roman number: ");
    printf("\nEnter the number: ");
    scanf("%d",&num);

    int value[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    //use const char *roman[] to use multistring 
    //if used without const and pointer {char roman[]} the compilation endup in error.
    /*if we use const char *roman[] and  inside the array if 2 of the character(eg: 'CM') is single quoted , 
    C & M are considered as a different single character and it ends up in error*/

    for (i=0;i<13;i++)
    {
        while ( num >= value[i]) //Usage of if insted of for leads in skip of same occurance of the digits {while is preferable}
        {
            printf("%s",roman[i]);
            num = num - value[i];
        }
    }
    return 0;
}