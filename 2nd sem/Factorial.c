#include <stdio.h>
int main() {
    int n;
    long f = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
     f *= i;
    printf("%ld", f);
    return 0;
}
