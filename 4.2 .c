#include <stdio.h>
int main() {
    float x, y; 
    printf("Enter values for x and y: ");
    scanf("%f %f", &x, &y);
    float r1 = (x + y) / (x - y); // (x + y) / (x - y)
    float r2 = (x + y) / 2;       // (x + y) / 2
    float r3 = (x + y) * (x - y); // (x + y) * (x - y)
    printf("Results: %f, %f, %f\n", r1, r2, r3);
    return 0;
}
