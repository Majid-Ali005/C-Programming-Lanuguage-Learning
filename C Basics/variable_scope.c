#include <stdio.h>

void functionName()
{
    int x = 10;
    printf("%d", x);
}

int main()
{
    //local scope variable
    functionName();
    printf("%d", x);

    return 0;
}

