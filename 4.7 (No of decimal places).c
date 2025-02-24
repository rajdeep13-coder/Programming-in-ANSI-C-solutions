#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Printing with required decimal places
    printf("Correct to 2 decimal places: %.2lf\n", num);
    printf("Correct to 4 decimal places: %.4lf\n", num);
    printf("Correct to 8 decimal places: %.8lf\n", num);

    return 0;
}
