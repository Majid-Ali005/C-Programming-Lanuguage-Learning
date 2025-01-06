#include <stdio.h>

int main()
{
    int a = 10;
    short int b = 5;
    int c;
    short int d;
    long int e = 10;

    // short modifiers they are only used with int
    short int s;
    int ss;
    printf("sized of a %d\n", a); //output: 10
    printf("acutal size of int %d", ss); //output: 32764

    // long modiers 
 int num;
    long int long_num;
    long long int long_long_num;

    double dub_num;
    long double long_dub_num;
        printf("Size of num: %d", sizeof(num));



    
    return 0;
}