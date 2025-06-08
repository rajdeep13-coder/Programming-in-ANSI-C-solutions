#include <stdio.h>

int main() {
    int n, a[100], min_idx, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n-1; i++) {
        min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[min_idx])
                min_idx = j;
        }
        temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
// This program implements the Selection Sort algorithm.
// It reads an array of integers, sorts it in ascending order using Selection Sort,