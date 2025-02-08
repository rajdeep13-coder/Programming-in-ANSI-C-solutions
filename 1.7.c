#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}

int main() {
    int num1 = 20, num2 = 10;
    int sum = add(num1, num2);
    int difference = sub(num1, num2);
    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, difference);
    
    return 0;
}

    scanf("%d, %d", &a, &b);

}
