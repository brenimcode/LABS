#include <stdio.h>
#include <math.h>

int main()
{
    /*  Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l */
    printf("Digite a distancia em km e quantidade de litros de gasolina consumidos \n");
    float distancia, gasolina;
    scanf("%f%f", &distancia, &gasolina);
    if (distancia < 0 && gasolina < 0)
    {
        printf("Erro");
    }

    float consumo = distancia / gasolina;
    int a;
    if (consumo < 8)
    {
        a = 1;
    }
    else if (consumo >= 8 && consumo <= 14)
    {
        a = 2;
    }
    else if (consumo > 14)
    {
        a = 3;
    }
    switch (a)
    {
    case 1:
        printf("Venda o carro!\n");
        break;
    case 2:
        printf("Economico!\n");
        break;
    case 3:
        printf("Super economico!");
        break;

    default:
        printf("Erro!");
        break;
    }

    return 0;
}
