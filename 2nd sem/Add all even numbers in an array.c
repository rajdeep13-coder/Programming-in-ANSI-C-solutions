#include <stdio.h>

int main() {
    int n, sum = 0, a[100];
    scanf("%d", &n);               //taking size of array as input
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);         //taking elements of array as input
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) sum += a[i];
    }
    printf("%d", sum);
    return 0;
}
