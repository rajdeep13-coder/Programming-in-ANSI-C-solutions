#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;
    printf("Enter the lengths of the sides of the triangle (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %.2f\n", area);
    
    return 0;
}
