#include <stdio.h>
#include <math.h>

int main() {
    printf("Number | Square  | Square Root\n");
    printf("-----------------------------\n");
    int num = 0;
    while (num <= 100) {
        printf("%6d | %7d | %11.4f\n", num, num * num, sqrt(num));
        num += 10;
    }
    return 0;
}
