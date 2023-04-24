#include <stdio.h>
#include <math.h>
float cilindro(float h, float r)
{
    float pi = 3.14159265;
    float vol = pi * r * r * h;
    return vol;
}
int main()
{
    float altura, raio, volume;
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o raio: ");
    scanf("%f", &raio);
    volume = cilindro(altura, raio);
    printf("O volume do cirilo eh: %.3f", volume);
    return 0;
}