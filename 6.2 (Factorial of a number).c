#include <stdio.h>
int main() {
    int num, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
            if (fact < 0) {
                printf("Factorial is too large to be stored in an int.\n");
                return 1;
            }
        }
        printf("Factorial of %d is %d\n", num, fact);
    }
    return 0;
}
