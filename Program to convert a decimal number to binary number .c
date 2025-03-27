#include <stdio.h>
int main() {
    int d, b = 0, p = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &d);
    while (d > 0) {
        b += (d % 2) * p;
        d /= 2;
        p *= 10;
    }
    printf("Binary: %d\n", b);
    return 0;
}
