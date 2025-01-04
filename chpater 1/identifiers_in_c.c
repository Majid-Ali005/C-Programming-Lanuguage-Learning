#include <stdio.h>
// 2nd way to define const in C
#define AGE = 18;

int main()
{
    int a = 5; //that is allowed in C identifiers matalab variable ka naam rakhty howe ye allow hota hy.
    printf("%d \n", a); //%d that is called percentyl d.

    int age = 25;
    printf("my age is %d \n", age);

    float out; // that is correct bhai mujhe value baad me deni hy bs aap mujhe memory set kr k de dena.
    //erro
    // float 1out; in starting character is not allowed.

    float ou2t; //tho between me aap character ka use kr sakty hy magr starting me nhi.

    // float ou-t; // that is invlaud identifiers.
    // Note: bhai identifiers aap k pass variable ka naam hota hy.

//tho aap ko yaad krne ki zaroorat nhi pr jub b aap koi ghlat identifiers ko use karoge tho aap compiler identifiers ka error dega or phir aap ko samjh jana hy k error asal me hy kiya etc.

//you can change the vlaue of variable see below
int change = 50;
change = 40; // like this aap k variable me value change ho k 50 se 40 hojayegi etc.
printf("%d \n",change);

//const is immutable
const float aa = 3.14;
aa = 9.1; /// that is not possible because const is immutable.


    return 0;
}