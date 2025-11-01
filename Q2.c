/*. Construct a C program to find the HCF (Highest Common Factor) of two integers using 
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic 
computations.*/
   #include <stdio.h>

int main() {
    int num1, num2, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    if (num1 == 0 || num2 == 0) {
        printf("HCF is not defined for zero.\n");
        return 0;
    }

   
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    hcf = num1; 
    printf("HCF (Highest Common Factor) = %d\n", hcf);

    return 0;
}

