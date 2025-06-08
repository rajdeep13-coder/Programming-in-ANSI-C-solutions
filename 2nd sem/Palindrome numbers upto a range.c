#include <stdio.h>

int isPal(int n) {
    int rev = 0, t = n;
    while (t > 0) {
        rev = rev * 10 + t % 10;
        t /= 10;
    }
    return n == rev;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (isPal(i))
         printf("%d ", i);
    }
    return 0;
}
