#include <stdio.h>

//make const using define preprocessor
#define pi  3.14

int main()
{
    // bhai ye constant nhi hy q k iss me const nhi laga hy.
    int not_constant;

    // constant variable; ye hy q k const laga hy.
    const int constant = 20;

    // changing values
    not_constant = 40;
    // constant = 22;
    // const int x;
    // x = 10;
 printf("this is define by #define %.2f", pi);

 



    return 0;
}