#include <stdio.h>

int main() {
    char first[20], middle[20], last[20];
    printf("Enter full name (First Middle Last): ");
    scanf("%s %s %s", first, middle, last);

    printf("\n%s %c. %s\n", first, middle[0], last);   //ANIL K. GUPTA
    printf("%c.%c. %s\n", first[0], middle[0], last);  //A.K. GUPTA
    printf("%s %c.%c.\n", last, first[0], middle[0]);  //GUPTA A.K.

    return 0;
}
