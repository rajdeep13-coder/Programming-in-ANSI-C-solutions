#include <stdio.h>

int main() {
    float num;
    int i;
    printf("Enter a float value: ");
    scanf("%f", &num);
    i = (int)num; //type conversion
    int rightmost_digit = i % 100;
    printf("The 2 rightmost digit of the integral part is: %d\n", rightmost_digit);

    return 0;
}
