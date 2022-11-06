#include "stdio.h"

int main () {
    // For Loop
    int i;
    for (i = 1; i <= 10; i++)
    {
        if ((i)%2 == 0)
        {
            printf("%d is even\n", i);
        } 
        else 
        {
            printf("%d is odd\n", i);
        }
        
    }

    printf("Odd Number: ");
    for (i = 1; i <= 20; i += 2)
    {
        printf("%d\t", i);
    }
    printf("\n");
    printf("Even Number: ");
    for (i = 2; i <= 20; i += 2)
    {
        printf("%d\t", i);
    }
    printf("\n");
    
    
    // While Loop
    int num1, num2;
    char ch;
    while (ch != 'q')
    {
        printf("Enter two number: ");
        scanf("%d %d", &num1, &num2);
        printf("Result : %d + %d = %d\n", num1, num2, num1+num2);

        printf("Type 'c' to continue(try again). Or, Type 'q' to quite:- ");
        scanf(" %c", &ch);
    }
    

    return 0;
}