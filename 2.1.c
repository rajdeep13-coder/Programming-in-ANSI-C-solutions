#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum =sum + 1.0 / i;
    }

    // Output the result
    printf("The sum of the harmonic progression up to 1/%d is: %.4f\n", n, sum);

    return 0;
}
