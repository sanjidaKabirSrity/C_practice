#include <stdio.h>
#define PI 3.1416

int main() {
    // Variable
    int num1 = 50;
    int num2 = 30;

    printf("'%f' this is PI Number\n", PI);

    const float g = 9.81;
    printf("%f is Gravity Value \n", g);

    printf("Number1 and Number2 Sum = %d\n", num1+num2);
    printf("Number1 and Number2 Subtraction = %d\n", num1-num2);
    printf("Number1 and Number2 Multiplication = %d\n", num1*num2);
    printf("Number1 and Number2 Divide = %d\n", num1/num2);

    printf("Sum: %d+%d = %d\n", num1, num2, num1+num2);
    printf("Subtraction: %d-%d = %d\n", num1, num2, num1-num2);
    printf("Multiplication: %d*%d = %d\n", num1, num2, num1*num2);
    printf("Divide: %d/%d = %d\n", num1, num2, num1/num2);

    int num3;
    num3 = 25;
    printf("%d\n", num3);


    // Simple Calculator
    float f_num1, f_num2, result_f;
    
    printf("Please Enter Two Numbers: ");
    scanf("%f %f", &f_num1, &f_num2);

    result_f = f_num1+f_num2;
    printf("%.2f + %.2f = %.2f\n", f_num1, f_num2, result_f);

    result_f = f_num1-f_num2;
    printf("%.2f - %.2f = %.2f\n", f_num1, f_num2, result_f);

    result_f = f_num1*f_num2;
    printf("%.2f * %.2f = %.2f\n", f_num1, f_num2, result_f);

    result_f = f_num1/f_num2;
    printf("%.2f / %.2f = %.2f\n", f_num1, f_num2, result_f);

    return 0;
}