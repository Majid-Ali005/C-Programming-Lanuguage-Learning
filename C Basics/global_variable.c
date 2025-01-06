#include <stdio.h>

int GlobalVariable = 10;

void functionOne(){
    printf("%d", GlobalVariable);
}
void functionTwo(){
    printf("%d", GlobalVariable);
}

int main()
{
    functionOne();
    functionTwo();
    printf("%d", GlobalVariable);
    return 0;
}