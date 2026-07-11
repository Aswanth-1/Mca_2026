1. Use a switch to check if the entered character is a vowel or not.

#include<stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The character is a vowel.\n");
            break;
        default:
            printf("The character is not a vowel.\n");
    }

    return 0;
}