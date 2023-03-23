#include <stdio.h>

int main()
{
    // Converter Celsius para Kelvin
    printf("Digite a temperatura dada em celsius: \n");
    float celsius;
    scanf("%f", &celsius);
    float kelvin = celsius + 273.15;
    printf("A temperatura em kelvin: %f", kelvin);
    return 0;
}
