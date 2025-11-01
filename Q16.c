/*. Implement a C program to insert an element at the front, middle, or end of an array, and print 
the array before and after insertion.*/
#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100]; // Fixed size array for simplicity

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the element to insert: ");
    scanf("%d", &value);

    printf("Choose insertion position:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:  // Insert at front
            pos = 0;
            break;

        case 2:  // Insert at middle
            pos = n / 2;
            break;

        case 3:  // Insert at end
            pos = n;
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    // Shift elements to make space for the new element
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = value;
    n++; // Increase array size

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
