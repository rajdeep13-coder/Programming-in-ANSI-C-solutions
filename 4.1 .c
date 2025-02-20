#include <stdio.h>

int main() {
    char text[] = "WORDPROCESSING";

    // (a) Insert a space between "WORD" and "PROCESSING"
    printf("\n(a) %c%c%c%c %s\n", text[0], text[1], text[2], text[3], &text[4]);

    // (b) Display "WORD" on the first line and "PROCESSING" on the second line
    printf("\n(b)\n%c%c%c%c\n%s\n", text[0], text[1], text[2], text[3], &text[4]);

    // (c) Display "W.P."
    printf("\n(c) %c.%c.\n", text[0], text[4]);

    return 0;
}
