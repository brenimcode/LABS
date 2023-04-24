#include <stdio.h>
float consumo(float dist, float vol)
{
    float consumo = dist / vol;
    if (vol > 0 && dist > 0)
    {
        if (consumo < 8)
        {
            return printf("Venda o carro!\n");
        }
        else if (consumo >= 8 && consumo <= 14)
        {
            return printf("Economico!\n");
        }
        else if (consumo > 14)
        {
            return printf("Super economico!\n");
        }
    }
    return printf("Erro.");
}
int main()
{
    float distancia, litros;
    printf("Digite a distancia: ");
    scanf("%f", &distancia);
    printf("Digite quantos litros: ");
    scanf("%f", &litros);
    consumo(distancia, litros);
    return 0;
}