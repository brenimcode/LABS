#include <stdio.h>

int main()
{
    //comprimento em polegadas para centimetros
    printf("Insira o comprimento em polegadas: \n");
    float p;
    scanf("%f", &p);
    float c = p*2.54;
    printf("comprimento em centimetros: %f", c);
    return 0;
}
