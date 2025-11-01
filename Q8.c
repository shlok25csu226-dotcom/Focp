/*. Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the 
sum of the two preceding ones.
0, 1, 1, 2, 3, 5, 8, 13, ...*/

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d", first);

        if (i != n)
            printf(", ");

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
