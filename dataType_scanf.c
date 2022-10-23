#include <stdio.h>

int main() {
    // Data Type
    int num1 = 45;
    float num2 = 55.83F;
    char ch = 's';

    printf("%d Integer Number. %f Floating Number.\n", num1, num2);
    printf("'%c' this is a character\n", ch);
 
 
    // C Input System
    int a , b, c;
    float a1, b1, c1;
    char a2, b2, c2;

    // scanf("%d %d %d", &a, &b, &c);
    // scanf("%f %f %f", &a1, &b1, &c1);
    // scanf("%c %c %c", &a2, &b2, &c2);
    scanf("%c %c %c %d %d %d %f %f %f", &a2, &b2, &c2, &a, &b, &c, &a1, &b1, &c1);

    // printf("'%d' first int number.\t'%d' Second int number.\t'%d' Third int number.\t Sum: %d", a, b, c, a+b+c);
    // printf("'%f' first float number.\t'%f' Second float number.\t'%f' Third float number.\t Sum: %f\n", a1, b1, c1, a1+b1+c1);
    printf("%c first Character.\t%c Second Character.\t%c Third Character.\n", a2, b2, c2);
    printf("'%d' first int number.\t'%d' Second int number.\t'%d' Third int number.\t Sum: %d\n", a, b, c, a+b+c);
    printf("'%f' first float number.\t'%f' Second float number.\t'%f' Third float number.\t Sum: %f\n", a1, b1, c1, a1+b1+c1);

    return 0;
}