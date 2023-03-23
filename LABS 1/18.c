#include <stdio.h>

int main()
{
    // converter metros cubicos para litros
    printf("Insira o volume em metros cubicos: \n");
    float m3;
    scanf("%f", &m3);
    float l = m3*1000;
    printf("O volume em litros: %f", l);
    return 0;
}
