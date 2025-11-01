/*. Develop a C program to count the number of prime numbers in an array*/
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Divisible by i → not prime
    }
    return 1; // Prime number
}

int main() {
    int n, i, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Count prime numbers
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            count++;
    }

    printf("\nTotal prime numbers in the array: %d\n", count);

    printf("Prime numbers are: ");
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
