/*. Develop a C program to find the maximum and minimum scores in an array, applying 
comparative logic for ranking and analysis.*/
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n];

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    int max = scores[0];
    int min = scores[0];

    // Traverse array to find max and min
    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

    printf("\nMaximum Score: %d", max);
    printf("\nMinimum Score: %d\n", min);

    return 0;
}
