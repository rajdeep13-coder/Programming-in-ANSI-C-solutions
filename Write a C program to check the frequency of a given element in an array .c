#include <stdio.h>
int main() {
    int n, i, key, freq = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find its frequency: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key)
            freq++;
    }
    printf("\nFrequency of %d in the array = %d\n", key, freq);
    return 0;
}
