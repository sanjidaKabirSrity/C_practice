#include "stdio.h"
#include "stdlib.h"
#include "time.h"

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

    return 0;
}