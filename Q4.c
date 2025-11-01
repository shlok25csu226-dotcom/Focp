/*. Implement a C program to swap two numbers using four different methods, demonstrating 
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable 
usage — a key skill in memory and variable management.*/

#include <stdio.h>

// 1️⃣ Swap using a temporary variable
void swapWithTemp(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (Temp Variable): a = %d, b = %d\n", a, b);
}

// 2️⃣ Swap using arithmetic operators
void swapWithArithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (Arithmetic): a = %d, b = %d\n", a, b);
}

// 3️⃣ Swap using bitwise XOR
void swapWithXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping (Bitwise XOR): a = %d, b = %d\n", a, b);
}

// 4️⃣ Swap using pointers
void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n\n", a, b);

    // Method 1: Temporary variable
    swapWithTemp(a, b);

    // Method 2: Arithmetic method
    swapWithArithmetic(a, b);

    // Method 3: Bitwise XOR method
    swapWithXOR(a, b);

    // Method 4: Using pointers
    swapWithPointers(&a, &b);
    printf("After swapping (Using Pointers): a = %d, b = %d\n", a, b);

    return 0;
}
