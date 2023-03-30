#include <stdio.h>
#include <math.h>

int main()
{
    /* Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor. */
    printf("Digite o valor da venda: \n");
    float venda, comissao;
    scanf("%f", &venda);
    if (venda >= 100000)
    {
        comissao = 700 + (0.16 * venda);
        printf("\ncomissao eh %.2f\n", comissao);
    }
    else if (venda >= 80000 && venda < 100000)
    {
        comissao = 650 + (0.14 * venda);
        printf("\ncomissao eh %.2f\n", comissao);
    }
    else if (venda >= 60000 && venda < 80000)
    {
        comissao = 600 + (0.14 * venda);
        printf("\ncomissao eh %.2f\n", comissao);
    }
    else if (venda >= 40000 && venda < 60000)
    {
        comissao = 550 + (0.14 * venda);
        printf("\ncomissao eh %.2f\n", comissao);
    }
    else if (venda >= 20000 && venda < 40000)
    {
        comissao = 500 + (0.14 * venda);
        printf("\ncomissao eh %.2f\n", comissao);
    }
    else if (venda < 20000 && venda >= 0)
    {
        comissao = 400 + (0.14 * venda);
        printf("\ncomissao eh %.2f\n", comissao);
    }
    else
    {
        printf("Erro.");
    }
    return 0;
}
