#include <stdio.h>

int main()
{
    //converter Kelvin para celsius
    printf("digite a temperatura em Kelvin: \n");
    float kelvin;
    scanf("%f", &kelvin);
    float celsius = kelvin - 273.15 ;
    printf("A temperatura dada em celsius: %f", celsius);
    return 0;
}
