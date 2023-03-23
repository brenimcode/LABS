#include <stdio.h>

int main()
{
    // centimetros para polegadas
    printf("insira o comprimento em centimetros: \n");
    float c;
    scanf("%f", &c);
    float p = c/2.54;
    printf("O comprimento em polegadas: %f", p);
    return 0;
}
