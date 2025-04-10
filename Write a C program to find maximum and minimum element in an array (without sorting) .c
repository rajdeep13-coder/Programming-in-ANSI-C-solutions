#include <stdio.h>
int main() {
    int n, i;
    int max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}
