#include <stdio.h>
#include <stdbool.h>

int main(){
    // Relational Operators
    int a, b, c, d, e;
    a = 30;
    b = 7;
    c = 30;

    bool a_is_greater = a>b;
    printf("A is greater than B : %d\n", a_is_greater);

    bool a_is_smaller = a<b;
    printf("A is smaller than B : %d\n", a_is_smaller);

    bool c_is_smaller_equal = c<=a;
    printf("C is smaller or equal A : %d\n", c_is_smaller_equal);

    bool c_is_greater_equal = c>=a;
    printf("C is greater or equal A : %d\n", c_is_greater_equal);

    bool a_is_b = a==b;
    printf("A is B : %d\n", a_is_b);

    bool a_is_not_b = a!=b;
    printf("A is not B : %d\n", a_is_not_b);


    // Logical Operators
    bool have_nid = false;
    bool is_adult = true;
    bool have_passport = true;

    bool is_permitted1 = have_nid && is_adult;
    printf("Permission case-1 : %d\n", is_permitted1);

    bool is_identity = have_nid || have_passport;
    printf("Identity : %d\n", is_identity);

    bool is_permitted2 = is_identity && is_adult;
    printf("Permission case-2 : %d\n", is_permitted2);

    bool is_permitted3 = (have_nid||have_passport) && is_adult;
    printf("Permission case-3 : %d\n", is_permitted3);

    bool is_permitted4 = !((have_nid||have_passport) && is_adult);
    printf("Permission case-4 : %d\n", !is_permitted4);

    return 0;
}