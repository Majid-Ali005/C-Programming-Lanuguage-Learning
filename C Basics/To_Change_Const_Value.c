#include <stdio.h>

int main()
{
       // defining an integer constant
    const int x = 10;
     int* change = (int*)&x; // explicit cast to remove constness
    // changing value
    *change = 20;
    printf("%d", x);

    return 0;
}
