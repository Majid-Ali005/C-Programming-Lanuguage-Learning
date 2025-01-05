#include <stdio.h>

int main()
{
    //the samlles part of your program which is only know by compiler is called tokesn in c and any other programming language.
    int a = 10;
    printf("this is the int tokens %d\n", a);

char b [] = "hello world";
printf("%s",b); //bhai string ko print krne k liye %s ka use kiya jata hy.

//Identifiers naming rules 
//valid identifiers
int abc = 10;
int age = 10;
int a8 = 10;
char First_name [] = "hello world";
char _letter = 'A';

//invalud indentifiers
int a b c = 10;
int a ge = 10;
int 8a = 10;
char First-Name [] = "hello world";
char char = "A";
//iss trha se koi b reserved word jo keyword hota hy oss ko aap variable ka name nhi rakh sakty ho.

// case sensitive
int salary = 500;
int SALARY = 400; // the both variables are different from each other.


    return 0;
}