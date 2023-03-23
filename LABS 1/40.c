#include <stdio.h>

int main()
{
    /* Solicita quantos dias trabalhados pelo encanador e
    imprime o valor a se pagar a ele,
    dado o desconto de 8% do imposto de renda */
    printf("Quantos dias o encanador trabalhou? \n");
    int dias;
    scanf("%i",&dias);
    float pago = (dias*30)*0.98;
    printf("O valor liquido a pagar para o encanador eh: \n %f",pago);
    return 0;
}
