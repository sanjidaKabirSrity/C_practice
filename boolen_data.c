#include <stdio.h>
#include <stdbool.h>

int main(){
    // Type-1
    short is_number = 0;
    if(is_number){
        printf("True Number\n");
    } else{
        printf("False Number\n");
    }

    // Type-2
    bool is_logged_in = true;
    if(is_logged_in){
        printf("User Logged in\n");
    } else{
        printf("User logged out\n");
    }

    return 0;
}