#include <stdio.h>
int main() {
    int m, n;
    printf("Enter two integers (m and n): ");
    scanf("%d %d", &m, &n);
    if (n != 0 && m % n == 0) {
        printf("%d is a multiple of %d\n", m, n);
    } else {
        printf("%d is not a multiple of %d\n", m, n);
    }
    return 0;
}
