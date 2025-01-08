#include <stdio.h>

void intToRoman(int num) {

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Roman numeral: ");
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }
    printf("\n");
}

int main() {
    int number;

    // Input from the user
    printf("Enter a number (1 to 3999): ");
    scanf("%d", &number);

    if (number >= 1 && number <= 3999) {
        intToRoman(number);
    } else {
        printf("Please enter a number between 1 and 3999.\n");
    }

    return 0;
}



//Use this function in the leet 

/*

char * intToRoman(int num) {
    int value[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const char *roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    char *res = (char *)malloc(sizeof(char)*20);
    res[0] = '\0';

    for (int i = 0 ; i < 13 ; i++)
    {
        while (1 <= num <= 3999 && num >= value[i])
        {
            strcat(res,roman[i]);
            num -= value[i];
                 }
    }
   return res;
}

*/