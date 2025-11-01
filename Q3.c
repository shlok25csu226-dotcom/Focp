/*. Design a C program to subtract two integers without using the minus (-) operator, applying 
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in 
embedded systems or processors.*/
  #include <stdio.h>



int subtract(int a, int b) {
   
    while (b != 0) {
        
        int borrow = (~a) & b;

     
        a = a ^ b;

        
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Result of subtraction (%d - %d) = %d\n", num1, num2, subtract(num1, num2));

    return 0;
}
