#include <stdio.h>
#include <math.h>

int main() {
    printf("Angle(x)  |  Sin(x)  |  Cos(x)\n");
    printf("--------------------\n");
    int theta = 0;
    while (theta <= 180) {
        printf("%3d°   |  %.2f  |  %.2f\n", theta, sin(theta * M_PI / 180.0), cos(theta * M_PI / 180.0));
        theta += 15;
    }
    return 0;
}


//M_PI is a predefined constant in the math.h library that represents the mathematical value of π (pi), which is 3.141.