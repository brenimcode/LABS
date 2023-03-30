#include <stdio.h>

int main()
{
    /*
    Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%).
     */

    printf("Insira valor do produto: \n");
    float valor;
    int estado;
    scanf("%f", &valor);
    printf("\n\nInsira o estado:\nMG:0\nSP:1\nRJ:2\nMS:3\n");
    scanf("%i",&estado);
    float mg, sp, rj, ms;
    switch (estado)
    {
    case 0:
        mg = valor * 0.93;
        printf("\nO valor do produto em MG: %f", mg);
        break;

    case 1:
        sp = valor * 0.88;
        printf("\nO valor do produto em MG: %f", sp);
        break;

    case 2:
        rj = valor * 0.85;
        printf("\nO valor do produto em MG: %f", rj);
        break;

    case 3:
        ms = valor * 0.92;
        printf("\nO valor do produto em MG: %f", ms);
        break;

    default:
        printf("\nDigite um numero valido!");
    }
    return 0;
}
