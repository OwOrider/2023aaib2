///要認識float浮點數(floating ponit number)
///double兩倍的浮點數(double floating ponit number)
#include <stdio.h>
int main()
{///寫了那麼多位，解果在C語言(CPU運作中)裡，只用了少少的位數
    float pi=3.14159265358979328462643383279;
    double pi2=3.14159265358979328462643383279;
    printf("float %f\n",pi);
    printf("double %f\n",pi2);
    printf("float 10位: %10f\n",pi);
    printf("double 10位: %10f\n",pi2);
    printf("float 10位: %20.18f\n",pi);
    printf("double 10位: %20.18f\n",pi2);
}
