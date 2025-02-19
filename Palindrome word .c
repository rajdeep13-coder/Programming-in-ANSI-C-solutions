#include <stdio.h>
#include <string.h>
int main() {
    char word[100];
    int len, flag = 1;
    printf("Enter a word: ");
    scanf("%s", word);
    len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("\"%s\" is a palindrome.\n", word);
    else
        printf("\"%s\" is not a palindrome.\n", word);
    return 0;
}
