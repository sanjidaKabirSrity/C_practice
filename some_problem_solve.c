#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stdbool.h"

int main(){

    //// Even-Odd number 
    /* int n;
    printf("Enter An Integer Number: ");
    scanf("%d", &n);

    if(n%2 == 0) {
        printf("%d is Even\n", n);
    } else {
        printf("%d is Odd\n", n);
    } */




    //// Upercase to Lowercase number
    /* char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z') {
        printf("%c\n", ch+32);
    } else if(ch>='a' && ch<='z') {
        printf("%c\n", ch-32);
    } else {
        printf("Invalid Letter\n");
    } */




    /* //// Upercase-Lowercase vice varse -> using while loop
    char name[30]; 
    int i = 0;
    printf("Enter String: ");
    fgets(name, 30, stdin);

    while (name[i])
    {
        if (name[i]>='A' && name[i]<='Z') {
            name[i] = name[i] + 32;
        } else if (name[i]>='a' && name[i]<='z') {
            name[i] = name[i]-32;
        }

        i++;
    }
    printf("%s\n", name); */
    



    //// Leap Year
    /* int year, is_leapyear;
    printf("Enter a year number: ");
    scanf("%d", &year);
    
    if(year%100 == 0){   // type-1
        if (year%400 == 0){
            printf("Leap year\n");
        }else {
            printf("This year is not Leap year\n");
        }
    } else if (year%4 == 0){
        printf("Leap year\n");
    } else {
        printf("This year is not Leap year\n");
    } */

    /* if(year%4 == 0){    // type-2
        if (year%100 == 0){
            if (year%400 == 0){
                printf("Leap Year\n");
            } else {
                printf("This year is not Leap year\n");
            }
        } else {
            printf("Leap Year\n");
        }
    } else {
        printf("This year is not Leap year\n");
    } */

    /* if(((year%4 == 0) && (year%100 != 0)) || ((year%100 == 0) && (year%400 == 0))) {     \\ type-3
        is_leapyear = 1;
    } else {
        is_leapyear = 0;
    }

    if(is_leapyear){
        printf("Leap Year\n");
    } else {
        printf("This year is not Leap year\n");
    } */




    //// Pick A Lucky Number
    /* int picked_number, given_number;
    time_t t;

    srand((unsigned)time(&t));
    picked_number = rand() % 10+1;

    printf("Enter a number for game(1-10) : ");
    scanf("%d", &given_number);

    if (picked_number == given_number) {
        printf("Hurrah! You Win\n");
    } else {
        printf("Alas! You Lose.\tPicked Number was %d\n", picked_number);
    } */




    //// Pick A Lucky Number - using while loop
    /* int choosen_num, lucky_num, chance = 3, is_loss = true;
    time_t t;
    srand((unsigned)time(&t));
    lucky_num = rand() % 10+1;

    while (chance > 0)
    {
        printf("Guess The Lucky Number. chance(%d): ", chance);
        scanf("%d", &choosen_num);

        if(lucky_num == choosen_num) {
            printf("Congratulation! You have choose the correct number\n");
            is_loss = false;
            break;
        } else {
            printf("Try again\n");
        }
        chance--;
    }

    if(is_loss){
        printf("Sorry! You loss. The correct number was %d", lucky_num);
    } */




    /* //// Pick A Lucky Number - using Do while loop
    int choosen_num, lucky_num, chance = 3, is_loss = true;
    time_t t;
    srand((unsigned)time(&t));
    lucky_num = rand() % 20+1;

    do
    {
        printf("Guess The Lucky Number. chance(%d): ", chance);
        scanf("%d", &choosen_num);

        if(lucky_num == choosen_num) {
            printf("Congratulation! You have choose the correct number\n");
            is_loss = false;
            break;
        } else if (lucky_num < choosen_num) {
            printf("Your Choosen Number is Big. Try again\n");
        } else {
            printf("Your Choosen Number is Small. Try again\n");
        }

        chance--;
    } while (chance > 0);

    if(is_loss){
        printf("Sorry! You loss. The correct number was %d\n", lucky_num);
    } */
    



    /* //// Draw A Star Box
    int width = 10, height = 10, i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf("* ");
        }
        printf("\n");
    } */
        



    /* //// Draw Half Piramid
    int rows = 5, i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = rows; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    } */
            



    //// Draw Full Piramid
    /* int rows = 5, i, j;
    for (i = 0; i < rows; i++) {
        for (j = i; j < rows; j++) {
            printf("  ");
        }
        for (j = i; j > 0; j--) {
            printf("* ");
        }
        for (j = i-1; j > 0; j--) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = rows; i > 0; i--) {
        for (j = i; j < rows; j++) {
            printf("  ");
        }
        for (j = i; j > 0; j--) {
            printf("* ");
        }
        for (j = i-1; j > 0; j--) {
            printf("* ");
        }
        printf("\n");
    } */

    /* int rows = 5, i, j;
    for (i = 0; i < rows; i++) {
        for (j = i; j < rows; j++) {
            printf("  ");
        }
        for (j = 0; j < (2*i)-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = rows; i > 0; i--) {
        for (j = i; j < rows; j++) {
            printf("  ");
        }
        for (j = 0; j < (2*i)-1; j++) {
            printf("* ");
        }
        printf("\n");
    } */

    /* int i, j, rows = 5, stars = 1, spaces = rows-1;
    for (i = 1; i < rows*2; i++) {
        for (j = 1; j <= spaces; j++) {
            printf("  ");
        }
        for (j = 1; j < stars*2; j++){
            printf("* ");
        }
        printf("\n");

        if (i < rows) {
            spaces--;
            stars++;
        } else {
            spaces++;
            stars--;
        }
    } */
            



    //// Write a program to find the perimeter and of a circle. The program will ask the user for a radius. and Then print the perimeter and area
    // Formula:
    //      Perimeter = 2 * pi * r
    //      Area = pi * r^2
    // Sample Interaction: 
    //      Enter radius: 1
    //      Perimeter = 6.28
    //      Area = 3.14
    printf("Enter radius: ");
    const float PI = 3.1416;
    float radius, perimeter, area;
    scanf("%f", &radius);
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Perimeter = %.2f\nRadius = %.2f\n", perimeter, area);


    return 0;
}