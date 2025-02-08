#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    printf("Enter the coordinates of the first point of the diameter (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point of the diameter (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    double diameter = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double radius = diameter / 2;
    double area = M_PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    
    return 0;
}
