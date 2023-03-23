#include <stdio.h>

int main()
{
    // Leitura de 3 valores e o resultado e
    // a soma dos quadrados dos tres valores lidos
    printf("Digite 3 valores: \n");
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f %f %f",&a,&b,&c);
    float soma = (a*a)+(b*b)+(c*c);
    printf("O valor da soma dos quadrados dos 3 numeros eh: %f", soma);
    return 0;
}
