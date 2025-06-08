#include <stdio.h>

int main() {
    int n, a[100], key, j;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
// This program implements the Insertion Sort algorithm.
// It reads an array of integers, sorts it in ascending order using Insertion Sort, and prints the sorted array.