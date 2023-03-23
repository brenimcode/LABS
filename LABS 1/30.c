#include <stdio.h>

int main()
{
    //Valor em real para dolares
    printf("Digite o valor em real e receba em dolar: \n");
    float real;
    scanf("%f",&real);
    float dolar = real*5.27;
    printf("O valor em dolar eh: %f", dolar);
    return 0;

}
