#include <stdio.h>
#include <math.h>
int main()
{
    /* Ler um num inteiro se for negativo: numero invalido, se positivo calcular log*/
    printf("Digite um numero inteiro: \n");
    int num;
    scanf("%i", &num);
    if (num > 0)
    {
        float logaritmo = log10(num);
        printf("O logaritmo na base 10 deste numero eh %.2f", logaritmo);
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}
