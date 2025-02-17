#include <stdio.h>
int main() {
    int a, b, c, sum, largest, smallest;
    float avg;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
  
    avg = sum / 3.0; 

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
