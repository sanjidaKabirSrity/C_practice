#include "stdio.h"

int main(){
    // If Condition
    int condition = 1;
    if(condition){
        printf("I will get a new Bat\n");
    }

    // Else If Condition
    int sanji = 17;
    int nadia = 17;
    if(sanji > nadia){
        printf("Sanjida is Elder\n");
    }else if(sanji == nadia) {
        printf("They are Same age\n");
    }else {
        printf("Nadia is Elder\n");
    }

    char color_code;
    printf("Enter Color Code First Word:");
    scanf("%c", &color_code);
    if (color_code == 'r')
    {
        printf("Red Color\n");
    }
    else if (color_code == 'g')
    {
        printf("Green Color\n");
    }
    else
    {
        printf("Other Color\n");
    }
    
    

    return 0;
}