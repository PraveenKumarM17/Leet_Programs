#include<stdio.h>
#include<stdlib.h>

int rom_int(char ch) {
    switch (ch) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: return 0;
    }
}

int main() {
    char str[20];
    int match1, match2, res = 0;

    printf("Enter the Roman numeral: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        match1 = rom_int(str[i]);
        match2 = rom_int(str[i + 1]);

        if (match2 > match1) {
            res -= match1;
        } else {
            res += match1;
        }
    }

    printf("The value is: %d\n", res);
    return 0;
}


// In leet use this code
/*

int rom_int(char ch) {
    switch (ch) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: return 0;
    }
}

int romanToInt(char* str) {
    int res = 0;
        for (int i = 0; str[i] != '\0'; i++) {
        int match1 = rom_int(str[i]);
        int match2 = rom_int(str[i + 1]);

        if (match2 > match1) {
            res -= match1;
        } else {
            res += match1;
        }
    }
    return res;
}

*/