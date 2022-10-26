#include <stdio.h>

int main(){
    // type-1
    char name1[20];
    name1[0] = 'K';
    name1[1] = 'S';
    name1[2] = ' ';
    name1[3] = 'S';
    name1[4] = 'r';
    name1[5] = 'i';
    name1[6] = 't';
    name1[7] = 'y';
    printf("%s\n", name1);

    // type-2
    char name2[20] = {'K', 'S', ' ', 'S', 'r', 'i', 't', 'y'};
    printf("%s\n", name2);

    // type-3
    char name3[20] = "KS Srity";
    printf("%s\n", name3);


    printf("index 0 = %c\nindex 3 = %c\n", name1[0], name1[3]);

    char name4[20]; 
    printf("What is your Name?");
    scanf("%s\n", &name4);
    printf("Thank You, %s\n", name4);

    return 0;
}