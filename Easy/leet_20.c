#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    char stack[strlen(s)];
    int top = -1;
    
    for (int i = 0; s[i] != '\0'; i++) {
        char current = s[i];
        
        if (current == '(' || current == '[' || current == '{') {
            stack[++top] = current;
        } else if (current == ')' || current == ']' || current == '}') {
            if (top == -1) {
                return false;
            }
            
            char topChar = stack[top--];
            if ((current == ')' && topChar != '(') || 
                (current == ']' && topChar != '[') || 
                (current == '}' && topChar != '{')) {
                return false;
            }
        }
    }
    
    return top == -1;
}

int main() {
    // Input string from the user
    char s[100];
    printf("Enter a string containing parentheses: ");
    scanf("%s", s);

    // Output whether the string is valid or not
    if (isValid(s)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
