#include <stdio.h>
#include <string.h>

void byValue(int a, double b, char str[]) {
    a = 100;
    b = 99.99;
    strcpy(str, "Value");
}

void byReference(int *a, double *b, char str[]) {
    *a = 200;
    *b = 88.88;
    strcpy(str, "Reference");
}

int main() {
    int x = 10;
    double y = 5.5;
    char s[20] = "Original";

    // Call by Value
    byValue(x, y, s);
    printf("After byValue: x=%d, y=%.2f, s=%s\n", x, y, s);

    // Call by Reference
    byReference(&x, &y, s);
    printf("After byReference: x=%d, y=%.2f, s=%s\n", x, y, s);

    return 0;
}


//Call by Value: Changes inside byValue() do not affect main() variables because it works on copies.
//Call by Reference: Changes inside byReference() affect the original variables using pointers (&).

//Output:
//After byValue: x=10, y=5.50, s=Original
//After byReference: x=200, y=88.88, s=Reference