#include <stdio.h>
#include <math.h>

int main() {
    double x1 = 0, y1 = 0, x2 = 4, y2 = 5;
    double diameter = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double radius = diameter / 2;
    double area = M_PI * radius * radius;
    double perimeter = 2 * M_PI * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Perimeter (Circumference) of the circle: %.2f\n", perimeter);
    
    return 0;
}
