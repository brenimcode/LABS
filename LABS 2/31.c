#include <stdio.h>

int main()
{
    /* Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
    seguir, verifique e mostra qual a classificação dessa pessoa.
    */
    printf("\nInsira a altura em metros e o peso em kg: \n");
    float altura, peso;
    scanf("%f%f", &altura, &peso);
    printf("\n\nA CLASSIFICACAO EH: \n");
    if (peso < 60)
    {
        if (altura < 1.20)
        {
            printf("A\n");
        }
        else if (altura >= 1.20 && altura <= 1.70)
        {
            printf("B\n");
        }
        else
        {
            printf("C\n");
        }
    }
    if (peso >= 60 && peso <= 90)
    {
        if (altura < 1.20)
        {
            printf("D\n");
        }
        else if (altura >= 1.20 && altura <= 1.70)
        {
            printf("E\n");
        }
        else
        {
            printf("F\n");
        }
    }
    if (peso > 90)
    {
        if (altura < 1.20)
        {
            printf("G");
        }
        else if (altura >= 1.20 && altura <= 1.70)
        {
            printf("H");
        }
        else
        {
            printf("I");
        }
    }

    return 0;
}