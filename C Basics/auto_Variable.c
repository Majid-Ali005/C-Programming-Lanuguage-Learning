#include <stdio.h>

void This_Is_My_Function()
{
    int x = 10; // local variable (also automatic)
    auto int y = 20; // automatic variable
    printf("Auto Variable: %d", y);
}

int main()
{
    This_Is_My_Function();
    return 0;
}

