#include <stdio.h>

int main()
{
    int n = 4;
    //chekc for even if the any number is devide with 2 and the remainder comes 0 then they are called even number. koi number agr do k sath devide hojaye or oss k remainder zero ajaye tho wo odd number hog.
    if( n %2 == 0)
    {
        printf("%d is Even", n);
    }
    //or agr koi number devide hone k baad oss ka remainder zero na ajaye tho wo phir hamare pass odd number hota hy.
    else if( n % 2 != 0)
    {
        printf("%d is Odd",n);
    }
    else{printf("error");}

    
    return 0;
}