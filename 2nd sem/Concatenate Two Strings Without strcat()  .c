#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i, j;

    scanf("%s %s", s1, s2);

    for(i = 0; s1[i] != '\0'; i++);
    for(j = 0; s2[j] != '\0'; j++) {
        s1[i + j] = s2[j];
    }
    s1[i + j] = '\0';

    printf("%s", s1);
    return 0;
}
// This program concatenates two strings without using the strcat() function.
// It reads two strings, calculates their lengths, and appends the second string to the first one.