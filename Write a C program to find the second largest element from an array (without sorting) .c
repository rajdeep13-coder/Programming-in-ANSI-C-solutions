#include <stdio.h>
int main() {
    int n, i;
    int largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = second = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    for(i = 0; i < n; i++) {
        if(arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }
    if(largest == second)
        printf("All elements are equal or no second largest element.\n");
    else
        printf("Second largest element = %d\n", second);
    return 0;
}
