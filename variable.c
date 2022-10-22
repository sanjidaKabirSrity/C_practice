#include <stdio.h>

int main() {
    int num1 = 50;
    int num2 = 30;
    
    printf("\nNumber1 and Number2 Sum = %d\n", num1+num2);
    printf("Number1 and Number2 Subtraction = %d\n", num1-num2);
    printf("Number1 and Number2 Multiplication = %d\n", num1*num2);
    printf("Number1 and Number2 Divide = %d\n\n", num1/num2);

    printf("Sum: %d+%d = %d\n", num1, num2, num1+num2);
    printf("Subtraction: %d-%d = %d\n", num1, num2, num1-num2);
    printf("Multiplication: %d*%d = %d\n", num1, num2, num1*num2);
    printf("Divide: %d/%d = %d\n\n", num1, num2, num1/num2);

    int num3;
    num3 = 25;
    printf("%d\n", num3);

    return 0;
}