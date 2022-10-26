#include <stdio.h>

int main() {
    // ----------Integer Type Data-----------

    // Signed Integer Data
    printf("Signed Integers:-\n");
    // Short - %d %hi %hd
    short si = -32768;
    printf("I am Short Integer, %hi\n", si);
    // Int - %d %i
    int i = 2147483647;
    printf("I am int %i\n", i);
    // Long - %ld %li
    long l = 2147483649L;
    printf("I am long %li\n", l);
    // Long long - %lld %lli
    long long ll = 2147483649ll;
    printf("I am long long %lli\n", ll);
    // Octal Int - %o
    int o = 0777;
    printf("I am Octal %o. And its decimal number %d\n", o, o);
    // Hexadecimal Int - %x %X
    int h1 = 4095;
    int h2 = 0xfff;
    printf("I am Hexadecimal %x, %x. And its decimal number %d, %d\n", h1, h2, h1, h2);


    // Unsigned Integer Data
    printf("Unsigned Integers:-\n");
    // Unsigned Short - %hu
    unsigned short us = 41;
    printf("I am Unsigned Short Integers %hu\n", us);
    // Unsigned Int - %u
    unsigned int ui = 41432;
    printf("I am Unsigned Integers %u\n", ui);
    // Unsigned Long - %lu
    unsigned long ul = 415678L;
    printf("I am Unsigned Long Integers %lu\n", ul);
    // Unsigned Long Long - %llu
    unsigned long long ull = 415678LL;
    printf("I am Unsigned Long Long Integers %llu\n", ull);

    // Negative Unsigned
    unsigned short us_neg1 = -1;
    unsigned short us_neg2 = -2;
    unsigned short us_neg3 = -4;
    printf("Unsigned Negative Short Integers %hu, %hu, %hu\n", us_neg1, us_neg2, us_neg3);



    // ----------Float Type Data-----------
    printf("Float Numbers:-\n");
    // Float - %f
    float f = 678.984F;
    printf("Float : %f\n", f);
    // Double - %lf
    double d = 6785675.98411;
    printf("Double : %lf\n", d);
    // Long Double - %LF
    long double ld = 67856775.98411;
    printf("Long Double : %LF\n", ld);

    return 0;
}