/*. Develop a program to identify and print duplicate elements in an array, or print “-1” if no 
duplicates exist, applying frequency detection and data validation.
Examples: 
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1*/
#include <stdio.h>

int main() {
    int n, i, j, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements are: ");

    // Loop through array elements
    for (i = 0; i < n; i++) {
        int count = 1;

        // Skip already-checked elements by marking them as -1
        if (arr[i] == -1)
            continue;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark duplicate to avoid rechecking
            }
        }

        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}
