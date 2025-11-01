/*. Design a C program to find the first occurrence of the score “99” in an array, focusing on linear 
search and data retrieval techniques*/
#include <stdio.h>

int main() {
    int n, i, found = 0;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n];

    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Linear search for first occurrence of 99
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            printf("The first occurrence of 99 is at position %d (index %d).\n", i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("The score 99 was not found in the list.\n");

    return 0;
}
