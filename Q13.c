/*. Design a C program to find a peak element that is not smaller than its neighbours.*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Check for edge cases
    if (n == 1) {
        printf("Only one element, so the peak element is: %d\n", arr[0]);
        return 0;
    }

    printf("\nPeak elements found:\n");

    for (i = 0; i < n; i++) {
        // First element check
        if (i == 0 && arr[i] >= arr[i + 1])
            printf("%d at index %d\n", arr[i], i);
        // Last element check
        else if (i == n - 1 && arr[i] >= arr[i - 1])
            printf("%d at index %d\n", arr[i], i);
        // Middle elements
        else if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            printf("%d at index %d\n", arr[i], i);
    }

    return 0;
}
