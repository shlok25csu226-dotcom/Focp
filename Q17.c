/*Design a C program to delete an element from the front, middle, or end of an array, and print 
the array before and after deletion.*/
#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nChoose deletion position:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:  // Delete from front
            pos = 0;
            break;

        case 2:  // Delete from middle
            pos = n / 2;
            break;

        case 3:  // Delete from end
            pos = n - 1;
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    // Shift elements left to remove the chosen element
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease size after deletion

    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
