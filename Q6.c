/*Create a C program that allows the user to convert between Binary and Decimal systems based 
on their choice, showcasing understanding of data encoding and computer number systems used in 
hardware-level design.*/

#include <stdio.h>
#include <math.h>

// Function to convert Binary → Decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, lastDigit;

    while (binary > 0) {
        lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

// Function to convert Decimal → Binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;

    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice;
    long long binary;
    int decimal;

    printf("Number System Conversion Menu:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter a binary number: ");
            scanf("%lld", &binary);
            printf("Decimal equivalent = %d\n", binaryToDecimal(binary));
            break;

        case 2:
            printf("\nEnter a decimal number: ");
            scanf("%d", &decimal);
            printf("Binary equivalent = %lld\n", decimalToBinary(decimal));
            break;

        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
