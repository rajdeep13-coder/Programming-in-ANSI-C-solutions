#include <stdio.h>

int main() {
    int x, y;
    short int z;
    x = 999999;   
    y = 100000;   
    z = x + y;
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of z (sum of x and y): %d\n", z);

    //The sum 1099999 is too large to fit into a short int. When the value exceeds the maximum limit (32,767), it wraps around and results in a negative or incorrect value due to overflow.

    return 0;
}
