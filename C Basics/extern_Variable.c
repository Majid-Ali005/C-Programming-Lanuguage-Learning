#include <stdio.h>

extern int x;  // Declaration of external variable (no initialization)

// Definition and initialization of the external variable
int x = 10;

int main()
{
    printf("%d", x);
    return 0;
}
