#include <stdio.h>
#include <math.h>
int main() {
    double num;
    printf("Enter a real number: ");
    scanf("%lf", &num);
    int smallest_int = (int)ceil(num);
    int largest_int = (int)floor(num);
    printf("%d %.2f %d\n", smallest_int, num, largest_int);

    return 0;
}
