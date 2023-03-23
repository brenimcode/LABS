#include <stdio.h>

int main()
{
    // ler valor de hora de trabalho e numero de horas trabalhadas no mes. e adicionar 10% no final
    printf("Digite as horas trabalhadas no mes: \n");
    int horas = 0;
    scanf("%i", &horas);
    float valor = (30 * horas) * 1.1;
    printf("O valor a se pagar ao trabalhador eh: \n %f", valor);
    return 0;
}
