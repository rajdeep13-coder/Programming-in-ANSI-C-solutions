#include <stdio.h>

int main() {
    int a = 5, b = 2;
    double result;
    result = (double)a / b;                    //Typecasting means to change the type of values here we have changed it from int to float
    printf("Integer division (5 / 2): %d\n", a / b);
    printf("Floating-point division (5 / 2): %.2f\n", result);
    return 0;
}
