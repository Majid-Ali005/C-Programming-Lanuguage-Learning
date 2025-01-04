#include <stdio.h>

int main()
{
    int a = 5; //that is allowed in C identifiers matalab variable ka naam rakhty howe ye allow hota hy.
    printf("%d \n", a); //%d that is called percentyl d.

    int age = 25;
    printf("my age is %d", age);

    float out; // that is correct bhai mujhe value baad me deni hy bs aap mujhe memory set kr k de dena.
    //erro
    // float 1out; in starting character is not allowed.

    float ou2t; //tho between me aap character ka use kr sakty hy magr starting me nhi.

    // float ou-t; // that is invlaud identifiers.
    // Note: bhai identifiers aap k pass variable ka naam hota hy.

//tho aap ko yaad krne ki zaroorat nhi pr jub b aap koi ghlat identifiers ko use karoge tho aap compiler identifiers ka error dega or phir aap ko samjh jana hy k error asal me hy kiya etc.

    return 0;
}