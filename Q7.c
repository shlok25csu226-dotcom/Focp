/*Develop a C program to print a binary pyramid pattern.
 0 0
 01 01
 010 010 
 0101 0101 
 0101001010*/

 #include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int bit = 0; // Start each row with 0

        // Print the binary sequence for the current row
        for (j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit; // Alternate between 0 and 1
        }

        printf(" "); // Space between left and right parts

        bit = 0; // Reset for right side of the pattern
        for (j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit;
        }

        printf("\n");
    }

    return 0;
}
