#include <stdio.h>
int* minmax(int a[], int n) {
    static int r[2];
    r[0] = r[1] = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < r[0]) {
            r[0] = a[i];
        }
        if (a[i] > r[1]) {
            r[1] = a[i];
        }
    }
    return r;
}

int main() {
    int a[100], n;
    printf("n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int* r = minmax(a, n);
    printf("min = %d\nmax = %d\n", r[0], r[1]);
    return 0;
}
