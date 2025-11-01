/*. Write a C program to cyclically rotate the array clockwise by one position, applying array 
transformation logic used in scheduling and encryption.
Input: arr[] = {1, 2, 3, 4, 5} 
Output: arr[] = {5, 1, 2, 3, 4}
Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store the last element
    int last = arr[n - 1];

    // Shift all elements to the right by one position
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the beginning
    arr[0] = last;

    // Display the rotated array
    printf("\nArray after one clockwise rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}


