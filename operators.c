#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c, d, e;
    a = 30;
    b = 7;
    c = 30;

    // Relational Operators
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


    // Assignment Operators
    a += 5;
    printf("a += %d\n", a);
    a -= 5;
    printf("a -= %d\n", a);
    a *= 5;
    printf("a *= %d\n", a);
    a /= 5;
    printf("a /= %d\n", a);
    a %= 5;
    printf("a modules= %d\n", a);


    // Bitwise Operators
    unsigned char bw1 = 12;
    unsigned char bw2 = 25;
    /*
    AND Operation
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    &  -> 0 0 0 0 1 0 0 0   8(10)
    */
    unsigned char bw3 = bw1 & bw2;
    printf("AND(&) Operation: %d\n", bw3);
    /*
    OR Operation
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    |  -> 0 0 0 1 1 1 0 1   29(10)
    */
    unsigned char bw4 = bw1 | bw2;
    printf("OR(|) Operation: %d\n", bw4);
    /*
    XOR Operation
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    ^  -> 0 0 0 1 0 1 0 1   21(10)
    */
    unsigned char bw5 = bw1 ^ bw2;
    printf("XOR(^) Operation: %d\n", bw5);
    /*
    Complement Operation
    25 -> 0 0 0 1 1 0 0 1
    ~  -> 1 1 1 0 0 1 1 0   230(10)
    */
    unsigned char bw6 = ~bw2;
    printf("Complement(~) Operation: %d\n", bw6);
    /*
    Left Shift
    212 -> 1 1 0 1 0 1 0 0
    <<1 -> 1 0 1 0 1 0 0 0  168(10)
    <<2 -> 0 1 0 1 0 0 0 0  80(10)
    <<3 -> 1 0 1 0 0 0 0 0  160(10)
    */
    // unsigned char ls1 = 212 << 1;
    // unsigned char ls2 = 212 << 2;
    // unsigned char ls3 = 212 << 3;
    // printf("212 Left Shift 1: %d\n", ls1);
    // printf("212 Left Shift 2: %d\n", ls2);
    // printf("212 Left Shift 3: %d\n", ls3);
    /*
    Right Shift
    212 -> 1 1 0 1 0 1 0 0
    >>1 -> 0 1 1 0 1 0 1 0  106(10)
    >>2 -> 0 0 1 1 0 1 0 1  53(10)
    >>3 -> 0 0 0 1 1 0 1 0  26(10)
    */
    unsigned char rs1 = 212 >> 1;
    unsigned char rs2 = 212 >> 2;
    unsigned char rs3 = 212 >> 3;
    printf("212 Right Shift 1: %d\n", rs1);
    printf("212 Right Shift 2: %d\n", rs2);
    printf("212 Right Shift 3: %d\n", rs3);



    // Unary Operators
    int u1,u2, u1_result, u2_result; 

    // Increment Unary Operator
    u1 = 5;
    // ++u1;
    // printf("Pre Increment: %d\n", ++u1);
    // u1++;
    // printf("Post Increment: %d\n", u1++);
    /* u1_result = u1 + ++u1 + u1++;   // 5+7+6 = 18
    printf("number:%d\tResult:%d\n", u1, u1_result); */
    /* u1_result = u1 + u1++ + u1++;   // 5+6+6 = 17
    printf("number:%d\tResult:%d\n", u1, u1_result); */
    /* u1_result = u1 + u1++ + ++u1;   // 5+6+7 = 18
    printf("number:%d\tResult:%d\n", u1, u1_result); */
    u1_result = u1 + ++u1 + ++u1;   // 5+7+7 = 19
    printf("number:%d\tResult:%d\n", u1, u1_result);

    // Decrement Unary operator
    u2 = 10;
    // --u2;
    // printf("Pre Decrement: %d\n", u2);
    // u2--;
    // printf("Post Decrement: %d\n", u2--);
    u2_result = u2 + --u2 + u2--;   // 9+9+9 = 18
    printf("number:%d\tResult:%d\n", u2, u2_result);



    // Ternary Operators
    int t1, t2, t3;
    t1 = 25;
    t2 = 23;
 
    t3 = t1>t2 ? true:false;
    // t3 = t1>t2 ? 1:0;
    printf("Ternary result: %d\n", t3);



    // Size Of Operators
    char ch = 'S';
    short s = 12;
    int i = 322;
    long l = 3245l;
    long long ll = 32456ll;

    printf("Size of Char = %d\n Byte", (int)sizeof(ch));
    printf("Size of Short = %d\n Byte", (int)sizeof(s));
    printf("Size of Int = %d\n Byte", (int)sizeof(i));
    printf("Size of Long = %d\n Byte", (int)sizeof(l));
    printf("Size of Long Long = %d\n Byte", (int)sizeof(ll));

    return 0;
}