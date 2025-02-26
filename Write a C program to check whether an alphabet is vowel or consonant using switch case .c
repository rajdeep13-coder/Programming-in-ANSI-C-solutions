#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {                    //ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;     
        ch = ch + 32;                                //here we are changing alphabets from upper to lowercase
    }     
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input! Please enter an alphabet.\n");
            }
    }
    return 0;
}
