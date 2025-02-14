#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        temp= temp/10;
        digits= digits+1;
    }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp= temp/10;
    }
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}
